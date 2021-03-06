/*----------------------------------------------------------------------
  File    : skel1.c
  Contents: table program skeleton (without domain file reading)
  Author  : Christian Borgelt
  History : 28.08.1997 file created
            25.09.1998 table reading simplified
            07.02.1999 input from stdin, output to stdout added
            12.02.1999 default header handling improved
            17.04.1999 simplified using the new module 'io'
            16.08.2003 slight changes in error message output
----------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <assert.h>
#ifndef TAB_RDWR
#define TAB_RDWR
#endif
#include "io.h"
#ifdef STORAGE
#include "storage.h"
#endif

/*----------------------------------------------------------------------
  Preprocessor Definitions
----------------------------------------------------------------------*/
#define PRGNAME     "skel1"
#define DESCRIPTION "table program skeleton"
#define VERSION     "version 0.4 (2003.08.16)         " \
                    "(c) 1997-2003   Christian Borgelt"

/* --- error codes --- */
#define OK            0         /* no error */
#define E_NONE        0         /* no error */
#define E_NOMEM     (-1)        /* not enough memory */
#define E_FOPEN     (-2)        /* file open failed */
#define E_FREAD     (-3)        /* file read failed */
#define E_FWRITE    (-4)        /* file write failed */
#define E_OPTION    (-5)        /* unknown option */
#define E_OPTARG    (-6)        /* missing option argument */
#define E_ARGCNT    (-7)        /* wrong number of arguments */
#define E_UNKNOWN   (-8)        /* unknown error */

/*----------------------------------------------------------------------
  Constants
----------------------------------------------------------------------*/
static const char *errmsgs[] = {   /* error messages */
  /* E_NONE     0 */  "no error\n",
  /* E_NOMEM   -1 */  "not enough memory\n",
  /* E_FOPEN   -2 */  "cannot open file %s\n",
  /* E_FREAD   -3 */  "read error on file %s\n",
  /* E_FWRITE  -4 */  "write error on file %s\n",
  /* E_OPTION  -5 */  "unknown option -%c\n",
  /* E_OPTARG  -6 */  "missing option argument\n",
  /* E_ARGCNT  -7 */  "wrong number of arguments\n",
  /* E_UNKNOWN -8 */  "unknown error\n"
};

/*----------------------------------------------------------------------
  Global Variables
----------------------------------------------------------------------*/
const  char   *prgname = NULL;  /* program name for error messages */
static ATTSET *attset  = NULL;  /* attribute set */
static TABLE  *table   = NULL;  /* table */

/*----------------------------------------------------------------------
  Functions
----------------------------------------------------------------------*/

static void error (int code, ...)
{                               /* --- print error message */
  va_list    args;              /* list of variable arguments */
  const char *msg;              /* error message */

  assert(prgname);              /* check the program name */
  if (code < E_UNKNOWN) code = E_UNKNOWN;
  if (code < 0) {               /* if to report an error, */
    msg = errmsgs[-code];       /* get the error message */
    if (!msg) msg = errmsgs[-E_UNKNOWN];
    fprintf(stderr, "\n%s: ", prgname);
    va_start(args, code);       /* get variable arguments */
    vfprintf(stderr, msg, args);/* print the error message */
    va_end(args);               /* end argument evaluation */
  }
  #ifndef NDEBUG                /* clean up memory */
  if (table)  tab_delete(table, 0);
  if (attset) as_delete(attset);
  #endif
  #ifdef STORAGE
  showmem("at end of program"); /* check memory usage */
  #endif
  exit(code);                   /* abort the program */
}  /* error() */

/*--------------------------------------------------------------------*/

int main (int argc, char *argv[])
{                               /* --- main function */
  int  i, k = 0;                /* loop variables, counters */
  char *s;                      /* to traverse options */
  char **optarg = NULL;         /* option argument */
  char *fn_hdr  = NULL;         /* name of table header file */
  char *fn_tab  = NULL;         /* name of table file */
  char *blanks  = NULL;         /* blank  characters */
  char *fldseps = NULL;         /* field  separators */
  char *recseps = NULL;         /* record separators */
  char *uvchars = NULL;         /* unknown value characters */
  int  flags    = 0;            /* table file read flags */
  int  show     = 0;            /* whether to show the table read */

  prgname = argv[0];            /* get program name for error msgs. */

  /* --- print startup/usage message --- */
  if (argc > 1) {               /* if arguments are given */
    fprintf(stderr, "%s - %s\n", argv[0], DESCRIPTION);
    fprintf(stderr, VERSION); } /* print a startup message */
  else {                        /* if no argument is given */
    printf("usage: %s [options] [-d|-h hdrfile] tabfile\n", argv[0]);
    printf("%s\n", DESCRIPTION);
    printf("%s\n", VERSION);
    printf("-s       show the table read\n");
    printf("-b/f/r#  blank characters, field and record separators\n"
           "         (default: \" \\t\\r\", \" \\t\", \"\\n\")\n");
    printf("-u#      unknown value characters (default: \"?\")\n");
    printf("-n       number of tuple occurrences in last field\n");
    printf("-d       use default header "
                    "(field names = field numbers)\n");
    printf("-h       read table header (field names) from hdrfile\n");
    printf("hdrfile  file containing table header (field names)\n");
    printf("tabfile  table file to read "
                    "(field names in first record)\n");
    return 0;                   /* print a usage message */
  }                             /* and abort the program */

  /* --- evaluate arguments --- */
  for (i = 1; i < argc; i++) {  /* traverse arguments */
    s = argv[i];                /* get option argument */
    if (optarg) { *optarg = s; optarg = NULL; continue; }
    if ((*s == '-') && *++s) {  /* -- if argument is an option */
      while (1) {               /* traverse characters */
        switch (*s++) {         /* evaluate option */
          case 's': show   = 1;            break;
  	  case 'b': optarg = &blanks;      break;
          case 'f': optarg = &fldseps;     break;
          case 'r': optarg = &recseps;     break;
          case 'u': optarg = &uvchars;     break;
          case 'n': flags |= AS_WEIGHT;    break;
          case 'd': flags |= AS_DFLT;      break;
          case 'h': optarg = &fn_hdr;      break;
          default : error(E_OPTION, *--s); break;
        }                       /* set option variables */
        if (!*s) break;         /* if at end of string, abort loop */
        if (optarg) { *optarg = s; optarg = NULL; break; }
      } }                       /* get option argument */
    else {                      /* -- if argument is no option */
      switch (k++) {            /* evaluate non-option */
        case  0: fn_tab = s;      break;
        default: error(E_ARGCNT); break;
      }                         /* note filenames */
    }
  }
  if (optarg) error(E_OPTARG);  /* check option argument */
  if (k != 1) error(E_ARGCNT);  /* check number of arguments */
  if (fn_hdr) {                 /* set header flags */
    flags = AS_ATT | (flags & ~AS_DFLT);
    if (strcmp(fn_hdr, "-") == 0) fn_hdr = "";
  }                             /* convert "-" to "" */

  /* --- create attribute set and read table --- */
  attset = as_create("domains", att_delete);
  if (!attset) error(E_NOMEM);  /* create an attribute set */
  as_chars(attset, blanks, fldseps, recseps, uvchars);
  fprintf(stderr, "\n");        /* set delimiter characters */
  table = io_tabin(attset, fn_hdr, fn_tab, flags, "table", 1);
  if (!table) error(1);         /* read the table file */

  /* >>> application specific code goes here <<< */
  if (show) io_tabout(table, NULL, AS_ATT|AS_ALIGN, 1);

  /* --- clean up --- */
  #ifndef NDEBUG
  tab_delete(table, 1);         /* delete table and attribute set */
  #endif
  #ifdef STORAGE
  showmem("at end of program"); /* check memory usage */
  #endif
  return 0;                     /* return 'ok' */
}  /* main() */
