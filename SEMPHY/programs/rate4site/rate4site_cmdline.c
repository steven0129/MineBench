/*
  File autogenerated by gengetopt version 2.13
  generated with the following command:
  gengetopt -irate4site.ggo -Frate4site_cmdline 

  The developers of gengetopt consider the fixed text that goes in all
  gengetopt output files to be in the public domain:
  we make no copyright claims on it.
*/

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "getopt.h"

#include "rate4site_cmdline.h"

static
void clear_given (struct gengetopt_args_info *args_info);
static
void clear_args (struct gengetopt_args_info *args_info);

static int
cmdline_parser_internal (int argc, char * const *argv, struct gengetopt_args_info *args_info, int override, int initialize, int check_required, const char *additional_error);


static char *
gengetopt_strdup (const char *s);

static
void clear_given (struct gengetopt_args_info *args_info)
{
  args_info->help_given = 0 ;
  args_info->version_given = 0 ;
  args_info->treefile_given = 0 ;
  args_info->seqfile_given = 0 ;
  args_info->logFile_given = 0 ;
  args_info->referenceSeq_given = 0 ;
  args_info->logValue_given = 0 ;
  args_info->outFile_given = 0 ;
  args_info->outFileNotNormalize_given = 0 ;
  args_info->treeOutFile_given = 0 ;
  args_info->spPositionFile_given = 0 ;
  args_info->manyTreeFileInput_given = 0 ;
  args_info->treePositionFile_given = 0 ;
  args_info->modelName_given = 0 ;
  args_info->treeSearchAlg_given = 0 ;
  args_info->alphabet_size_given = 0 ;
  args_info->optimizeBranchLengths_given = 0 ;
  args_info->rateEstimationMethod_given = 0 ;
  args_info->numberOfDiscreteCategories_given = 0 ;
  args_info->userInputAlpha_given = 0 ;
  args_info->fileListingManySubstitutionMatrices_given = 0 ;
}

static
void clear_args (struct gengetopt_args_info *args_info)
{
  args_info->treefile_arg = gengetopt_strdup ("");
  args_info->seqfile_arg = gengetopt_strdup ("-");
  args_info->logFile_arg = gengetopt_strdup ("-");
  args_info->referenceSeq_arg = gengetopt_strdup ("");
  args_info->logValue_arg = 3 ;
  args_info->outFile_arg = gengetopt_strdup ("");
  args_info->outFileNotNormalize_arg = gengetopt_strdup ("");
  args_info->treeOutFile_arg = gengetopt_strdup ("");
  args_info->spPositionFile_arg = gengetopt_strdup ("");
  args_info->manyTreeFileInput_arg = gengetopt_strdup ("");
  args_info->treePositionFile_arg = gengetopt_strdup ("");
  args_info->modelName_arg = gengetopt_strdup ("jtt");
  args_info->treeSearchAlg_arg = gengetopt_strdup ("njML");
  args_info->alphabet_size_arg = 20 ;
  args_info->optimizeBranchLengths_arg = gengetopt_strdup ("mlAndAlphaBBL");
  args_info->rateEstimationMethod_arg = gengetopt_strdup ("ebExp");
  args_info->numberOfDiscreteCategories_arg = 16 ;
  args_info->userInputAlpha_arg = 0 ;
  args_info->fileListingManySubstitutionMatrices_arg = gengetopt_strdup ("");
}

void
cmdline_parser_print_version (void)
{
  printf ("%s %s\n", CMDLINE_PARSER_PACKAGE, CMDLINE_PARSER_VERSION);
}

void
cmdline_parser_print_help (void)
{
  cmdline_parser_print_version ();
  printf("\n%s\n", "generate random numbers drawn from a Gamma distribution");
  printf("\nUsage: rate3site [OPTIONS]...\n\n");
  printf("%s\n","  -h, --help                    Print help and exit");
  printf("%s\n","  -V, --version                 Print version and exit");
  printf("%s\n","  -t, --treefile=STRING           (default=`')");
  printf("%s\n","  -s, --seqfile=STRING            (default=`-')");
  printf("%s\n","  -l, --logFile=STRING            (default=`-')");
  printf("%s\n","  -R, --referenceSeq=STRING       (default=`')");
  printf("%s\n","  -v, --logValue=INT              (default=`3')");
  printf("%s\n","  -o, --outFile=STRING            (default=`')");
  printf("%s\n","  -O, --outFileNotNormalize=STRING\n                                  (default=`')");
  printf("%s\n","  -T, --treeOutFile=STRING        (default=`')");
  printf("%s\n","  -p, --spPositionFile=STRING     (default=`')");
  printf("%s\n","  -M, --manyTreeFileInput=STRING\n                                  (default=`')");
  printf("%s\n","  -P, --treePositionFile=STRING   (default=`')");
  printf("%s\n","      --modelName=STRING          (default=`jtt')");
  printf("%s\n","  -a, --treeSearchAlg=STRING      (default=`njML')");
  printf("%s\n","  -z, --alphabet_size=INT         (default=`20')");
  printf("%s\n","  -b, --optimizeBranchLengths=STRING\n                                  (default=`mlAndAlphaBBL')");
  printf("%s\n","      --rateEstimationMethod=STRING\n                                  (default=`ebExp')");
  printf("%s\n","  -C, --numberOfDiscreteCategories=INT\n                                  (default=`16')");
  printf("%s\n","  -A, --userInputAlpha=INT        (default=`0')");
  printf("%s\n","      --fileListingManySubstitutionMatrices=STRING\n                                  (default=`')");
  
}

void
cmdline_parser_init (struct gengetopt_args_info *args_info)
{
  clear_given (args_info);
  clear_args (args_info);
}

void
cmdline_parser_free (struct gengetopt_args_info *args_info)
{
  
  if (args_info->treefile_arg)
    {
      free (args_info->treefile_arg); /* free previous argument */
      args_info->treefile_arg = 0;
    }
  if (args_info->seqfile_arg)
    {
      free (args_info->seqfile_arg); /* free previous argument */
      args_info->seqfile_arg = 0;
    }
  if (args_info->logFile_arg)
    {
      free (args_info->logFile_arg); /* free previous argument */
      args_info->logFile_arg = 0;
    }
  if (args_info->referenceSeq_arg)
    {
      free (args_info->referenceSeq_arg); /* free previous argument */
      args_info->referenceSeq_arg = 0;
    }
  if (args_info->outFile_arg)
    {
      free (args_info->outFile_arg); /* free previous argument */
      args_info->outFile_arg = 0;
    }
  if (args_info->outFileNotNormalize_arg)
    {
      free (args_info->outFileNotNormalize_arg); /* free previous argument */
      args_info->outFileNotNormalize_arg = 0;
    }
  if (args_info->treeOutFile_arg)
    {
      free (args_info->treeOutFile_arg); /* free previous argument */
      args_info->treeOutFile_arg = 0;
    }
  if (args_info->spPositionFile_arg)
    {
      free (args_info->spPositionFile_arg); /* free previous argument */
      args_info->spPositionFile_arg = 0;
    }
  if (args_info->manyTreeFileInput_arg)
    {
      free (args_info->manyTreeFileInput_arg); /* free previous argument */
      args_info->manyTreeFileInput_arg = 0;
    }
  if (args_info->treePositionFile_arg)
    {
      free (args_info->treePositionFile_arg); /* free previous argument */
      args_info->treePositionFile_arg = 0;
    }
  if (args_info->modelName_arg)
    {
      free (args_info->modelName_arg); /* free previous argument */
      args_info->modelName_arg = 0;
    }
  if (args_info->treeSearchAlg_arg)
    {
      free (args_info->treeSearchAlg_arg); /* free previous argument */
      args_info->treeSearchAlg_arg = 0;
    }
  if (args_info->optimizeBranchLengths_arg)
    {
      free (args_info->optimizeBranchLengths_arg); /* free previous argument */
      args_info->optimizeBranchLengths_arg = 0;
    }
  if (args_info->rateEstimationMethod_arg)
    {
      free (args_info->rateEstimationMethod_arg); /* free previous argument */
      args_info->rateEstimationMethod_arg = 0;
    }
  if (args_info->fileListingManySubstitutionMatrices_arg)
    {
      free (args_info->fileListingManySubstitutionMatrices_arg); /* free previous argument */
      args_info->fileListingManySubstitutionMatrices_arg = 0;
    }
  
  clear_given (args_info);
}

/* gengetopt_strdup() */
/* strdup.c replacement of strdup, which is not standard */
char *
gengetopt_strdup (const char *s)
{
  char *result = NULL;
  if (!s)
    return result;

  result = (char*)malloc(strlen(s) + 1);
  if (result == (char*)0)
    return (char*)0;
  strcpy(result, s);
  return result;
}

int
cmdline_parser (int argc, char * const *argv, struct gengetopt_args_info *args_info)
{
  return cmdline_parser2 (argc, argv, args_info, 0, 1, 1);
}

int
cmdline_parser2 (int argc, char * const *argv, struct gengetopt_args_info *args_info, int override, int initialize, int check_required)
{
  int result;

  result = cmdline_parser_internal (argc, argv, args_info, override, initialize, check_required, NULL);

  if (result == EXIT_FAILURE)
    {
      cmdline_parser_free (args_info);
      exit (EXIT_FAILURE);
    }
  
  return result;
}

int
cmdline_parser_required (struct gengetopt_args_info *args_info, const char *prog_name)
{
  return EXIT_SUCCESS;
}

int
cmdline_parser_internal (int argc, char * const *argv, struct gengetopt_args_info *args_info, int override, int initialize, int check_required, const char *additional_error)
{
  int c;	/* Character of the parsed option.  */

  int error = 0;
  struct gengetopt_args_info local_args_info;

  if (initialize)
    cmdline_parser_init (args_info);

  cmdline_parser_init (&local_args_info);

  optarg = 0;
  optind = 1;
  opterr = 1;
  optopt = '?';

  while (1)
    {
      int option_index = 0;
      char *stop_char;

      static struct option long_options[] = {
        { "help",	0, NULL, 'h' },
        { "version",	0, NULL, 'V' },
        { "treefile",	1, NULL, 't' },
        { "seqfile",	1, NULL, 's' },
        { "logFile",	1, NULL, 'l' },
        { "referenceSeq",	1, NULL, 'R' },
        { "logValue",	1, NULL, 'v' },
        { "outFile",	1, NULL, 'o' },
        { "outFileNotNormalize",	1, NULL, 'O' },
        { "treeOutFile",	1, NULL, 'T' },
        { "spPositionFile",	1, NULL, 'p' },
        { "manyTreeFileInput",	1, NULL, 'M' },
        { "treePositionFile",	1, NULL, 'P' },
        { "modelName",	1, NULL, 0 },
        { "treeSearchAlg",	1, NULL, 'a' },
        { "alphabet_size",	1, NULL, 'z' },
        { "optimizeBranchLengths",	1, NULL, 'b' },
        { "rateEstimationMethod",	1, NULL, 0 },
        { "numberOfDiscreteCategories",	1, NULL, 'C' },
        { "userInputAlpha",	1, NULL, 'A' },
        { "fileListingManySubstitutionMatrices",	1, NULL, 0 },
        { NULL,	0, NULL, 0 }
      };

      stop_char = 0;
      c = getopt_long (argc, argv, "hVt:s:l:R:v:o:O:T:p:M:P:a:z:b:C:A:", long_options, &option_index);

      if (c == -1) break;	/* Exit from `while (1)' loop.  */

      switch (c)
        {
        case 'h':	/* Print help and exit.  */
          cmdline_parser_print_help ();
          exit (EXIT_SUCCESS);

        case 'V':	/* Print version and exit.  */
          cmdline_parser_print_version ();
          exit (EXIT_SUCCESS);

        case 't':	/* .  */
          if (local_args_info.treefile_given)
            {
              fprintf (stderr, "%s: `--treefile' (`-t') option given more than once%s\n", argv[0], (additional_error ? additional_error : ""));
              goto failure;
            }
          if (args_info->treefile_given && ! override)
            continue;
          local_args_info.treefile_given = 1;
          args_info->treefile_given = 1;
          if (args_info->treefile_arg)
            free (args_info->treefile_arg); /* free previous string */
          args_info->treefile_arg = gengetopt_strdup (optarg);
          break;

        case 's':	/* .  */
          if (local_args_info.seqfile_given)
            {
              fprintf (stderr, "%s: `--seqfile' (`-s') option given more than once%s\n", argv[0], (additional_error ? additional_error : ""));
              goto failure;
            }
          if (args_info->seqfile_given && ! override)
            continue;
          local_args_info.seqfile_given = 1;
          args_info->seqfile_given = 1;
          if (args_info->seqfile_arg)
            free (args_info->seqfile_arg); /* free previous string */
          args_info->seqfile_arg = gengetopt_strdup (optarg);
          break;

        case 'l':	/* .  */
          if (local_args_info.logFile_given)
            {
              fprintf (stderr, "%s: `--logFile' (`-l') option given more than once%s\n", argv[0], (additional_error ? additional_error : ""));
              goto failure;
            }
          if (args_info->logFile_given && ! override)
            continue;
          local_args_info.logFile_given = 1;
          args_info->logFile_given = 1;
          if (args_info->logFile_arg)
            free (args_info->logFile_arg); /* free previous string */
          args_info->logFile_arg = gengetopt_strdup (optarg);
          break;

        case 'R':	/* .  */
          if (local_args_info.referenceSeq_given)
            {
              fprintf (stderr, "%s: `--referenceSeq' (`-R') option given more than once%s\n", argv[0], (additional_error ? additional_error : ""));
              goto failure;
            }
          if (args_info->referenceSeq_given && ! override)
            continue;
          local_args_info.referenceSeq_given = 1;
          args_info->referenceSeq_given = 1;
          if (args_info->referenceSeq_arg)
            free (args_info->referenceSeq_arg); /* free previous string */
          args_info->referenceSeq_arg = gengetopt_strdup (optarg);
          break;

        case 'v':	/* .  */
          if (local_args_info.logValue_given)
            {
              fprintf (stderr, "%s: `--logValue' (`-v') option given more than once%s\n", argv[0], (additional_error ? additional_error : ""));
              goto failure;
            }
          if (args_info->logValue_given && ! override)
            continue;
          local_args_info.logValue_given = 1;
          args_info->logValue_given = 1;
          args_info->logValue_arg = strtol (optarg,&stop_char,0);
          break;

        case 'o':	/* .  */
          if (local_args_info.outFile_given)
            {
              fprintf (stderr, "%s: `--outFile' (`-o') option given more than once%s\n", argv[0], (additional_error ? additional_error : ""));
              goto failure;
            }
          if (args_info->outFile_given && ! override)
            continue;
          local_args_info.outFile_given = 1;
          args_info->outFile_given = 1;
          if (args_info->outFile_arg)
            free (args_info->outFile_arg); /* free previous string */
          args_info->outFile_arg = gengetopt_strdup (optarg);
          break;

        case 'O':	/* .  */
          if (local_args_info.outFileNotNormalize_given)
            {
              fprintf (stderr, "%s: `--outFileNotNormalize' (`-O') option given more than once%s\n", argv[0], (additional_error ? additional_error : ""));
              goto failure;
            }
          if (args_info->outFileNotNormalize_given && ! override)
            continue;
          local_args_info.outFileNotNormalize_given = 1;
          args_info->outFileNotNormalize_given = 1;
          if (args_info->outFileNotNormalize_arg)
            free (args_info->outFileNotNormalize_arg); /* free previous string */
          args_info->outFileNotNormalize_arg = gengetopt_strdup (optarg);
          break;

        case 'T':	/* .  */
          if (local_args_info.treeOutFile_given)
            {
              fprintf (stderr, "%s: `--treeOutFile' (`-T') option given more than once%s\n", argv[0], (additional_error ? additional_error : ""));
              goto failure;
            }
          if (args_info->treeOutFile_given && ! override)
            continue;
          local_args_info.treeOutFile_given = 1;
          args_info->treeOutFile_given = 1;
          if (args_info->treeOutFile_arg)
            free (args_info->treeOutFile_arg); /* free previous string */
          args_info->treeOutFile_arg = gengetopt_strdup (optarg);
          break;

        case 'p':	/* .  */
          if (local_args_info.spPositionFile_given)
            {
              fprintf (stderr, "%s: `--spPositionFile' (`-p') option given more than once%s\n", argv[0], (additional_error ? additional_error : ""));
              goto failure;
            }
          if (args_info->spPositionFile_given && ! override)
            continue;
          local_args_info.spPositionFile_given = 1;
          args_info->spPositionFile_given = 1;
          if (args_info->spPositionFile_arg)
            free (args_info->spPositionFile_arg); /* free previous string */
          args_info->spPositionFile_arg = gengetopt_strdup (optarg);
          break;

        case 'M':	/* .  */
          if (local_args_info.manyTreeFileInput_given)
            {
              fprintf (stderr, "%s: `--manyTreeFileInput' (`-M') option given more than once%s\n", argv[0], (additional_error ? additional_error : ""));
              goto failure;
            }
          if (args_info->manyTreeFileInput_given && ! override)
            continue;
          local_args_info.manyTreeFileInput_given = 1;
          args_info->manyTreeFileInput_given = 1;
          if (args_info->manyTreeFileInput_arg)
            free (args_info->manyTreeFileInput_arg); /* free previous string */
          args_info->manyTreeFileInput_arg = gengetopt_strdup (optarg);
          break;

        case 'P':	/* .  */
          if (local_args_info.treePositionFile_given)
            {
              fprintf (stderr, "%s: `--treePositionFile' (`-P') option given more than once%s\n", argv[0], (additional_error ? additional_error : ""));
              goto failure;
            }
          if (args_info->treePositionFile_given && ! override)
            continue;
          local_args_info.treePositionFile_given = 1;
          args_info->treePositionFile_given = 1;
          if (args_info->treePositionFile_arg)
            free (args_info->treePositionFile_arg); /* free previous string */
          args_info->treePositionFile_arg = gengetopt_strdup (optarg);
          break;

        case 'a':	/* .  */
          if (local_args_info.treeSearchAlg_given)
            {
              fprintf (stderr, "%s: `--treeSearchAlg' (`-a') option given more than once%s\n", argv[0], (additional_error ? additional_error : ""));
              goto failure;
            }
          if (args_info->treeSearchAlg_given && ! override)
            continue;
          local_args_info.treeSearchAlg_given = 1;
          args_info->treeSearchAlg_given = 1;
          if (args_info->treeSearchAlg_arg)
            free (args_info->treeSearchAlg_arg); /* free previous string */
          args_info->treeSearchAlg_arg = gengetopt_strdup (optarg);
          break;

        case 'z':	/* .  */
          if (local_args_info.alphabet_size_given)
            {
              fprintf (stderr, "%s: `--alphabet_size' (`-z') option given more than once%s\n", argv[0], (additional_error ? additional_error : ""));
              goto failure;
            }
          if (args_info->alphabet_size_given && ! override)
            continue;
          local_args_info.alphabet_size_given = 1;
          args_info->alphabet_size_given = 1;
          args_info->alphabet_size_arg = strtol (optarg,&stop_char,0);
          break;

        case 'b':	/* .  */
          if (local_args_info.optimizeBranchLengths_given)
            {
              fprintf (stderr, "%s: `--optimizeBranchLengths' (`-b') option given more than once%s\n", argv[0], (additional_error ? additional_error : ""));
              goto failure;
            }
          if (args_info->optimizeBranchLengths_given && ! override)
            continue;
          local_args_info.optimizeBranchLengths_given = 1;
          args_info->optimizeBranchLengths_given = 1;
          if (args_info->optimizeBranchLengths_arg)
            free (args_info->optimizeBranchLengths_arg); /* free previous string */
          args_info->optimizeBranchLengths_arg = gengetopt_strdup (optarg);
          break;

        case 'C':	/* .  */
          if (local_args_info.numberOfDiscreteCategories_given)
            {
              fprintf (stderr, "%s: `--numberOfDiscreteCategories' (`-C') option given more than once%s\n", argv[0], (additional_error ? additional_error : ""));
              goto failure;
            }
          if (args_info->numberOfDiscreteCategories_given && ! override)
            continue;
          local_args_info.numberOfDiscreteCategories_given = 1;
          args_info->numberOfDiscreteCategories_given = 1;
          args_info->numberOfDiscreteCategories_arg = strtol (optarg,&stop_char,0);
          break;

        case 'A':	/* .  */
          if (local_args_info.userInputAlpha_given)
            {
              fprintf (stderr, "%s: `--userInputAlpha' (`-A') option given more than once%s\n", argv[0], (additional_error ? additional_error : ""));
              goto failure;
            }
          if (args_info->userInputAlpha_given && ! override)
            continue;
          local_args_info.userInputAlpha_given = 1;
          args_info->userInputAlpha_given = 1;
          args_info->userInputAlpha_arg = strtol (optarg,&stop_char,0);
          break;


        case 0:	/* Long option with no short option */
          /* .  */
          if (strcmp (long_options[option_index].name, "modelName") == 0)
          {
            if (local_args_info.modelName_given)
              {
                fprintf (stderr, "%s: `--modelName' option given more than once%s\n", argv[0], (additional_error ? additional_error : ""));
                goto failure;
              }
            if (args_info->modelName_given && ! override)
              continue;
            local_args_info.modelName_given = 1;
            args_info->modelName_given = 1;
            if (args_info->modelName_arg)
              free (args_info->modelName_arg); /* free previous string */
            args_info->modelName_arg = gengetopt_strdup (optarg);
          }
          /* .  */
          else if (strcmp (long_options[option_index].name, "rateEstimationMethod") == 0)
          {
            if (local_args_info.rateEstimationMethod_given)
              {
                fprintf (stderr, "%s: `--rateEstimationMethod' option given more than once%s\n", argv[0], (additional_error ? additional_error : ""));
                goto failure;
              }
            if (args_info->rateEstimationMethod_given && ! override)
              continue;
            local_args_info.rateEstimationMethod_given = 1;
            args_info->rateEstimationMethod_given = 1;
            if (args_info->rateEstimationMethod_arg)
              free (args_info->rateEstimationMethod_arg); /* free previous string */
            args_info->rateEstimationMethod_arg = gengetopt_strdup (optarg);
          }
          /* .  */
          else if (strcmp (long_options[option_index].name, "fileListingManySubstitutionMatrices") == 0)
          {
            if (local_args_info.fileListingManySubstitutionMatrices_given)
              {
                fprintf (stderr, "%s: `--fileListingManySubstitutionMatrices' option given more than once%s\n", argv[0], (additional_error ? additional_error : ""));
                goto failure;
              }
            if (args_info->fileListingManySubstitutionMatrices_given && ! override)
              continue;
            local_args_info.fileListingManySubstitutionMatrices_given = 1;
            args_info->fileListingManySubstitutionMatrices_given = 1;
            if (args_info->fileListingManySubstitutionMatrices_arg)
              free (args_info->fileListingManySubstitutionMatrices_arg); /* free previous string */
            args_info->fileListingManySubstitutionMatrices_arg = gengetopt_strdup (optarg);
          }
          
          break;
        case '?':	/* Invalid option.  */
          /* `getopt_long' already printed an error message.  */
          goto failure;

        default:	/* bug: option not considered.  */
          fprintf (stderr, "%s: option unknown: %c%s\n", CMDLINE_PARSER_PACKAGE, c, (additional_error ? additional_error : ""));
          abort ();
        } /* switch */
    } /* while */




  cmdline_parser_free (&local_args_info);

  if ( error )
    return (EXIT_FAILURE);

  return 0;

failure:
  
  cmdline_parser_free (&local_args_info);
  return (EXIT_FAILURE);
}
