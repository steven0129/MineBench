// $Id: maseFormat.h 2399 2014-03-13 22:43:51Z wkliao $

#ifndef ___MASE_FORMAT
#define ___MASE_FORMAT

#include "sequenceContainer.h"

class maseFormat{
public:
	static sequenceContainer read(istream &infile, const alphabet* alph);
	static void write(ostream &out, const sequenceContainer& sd);
	//readUnAligned: the input sequences do not need to be aligned (not all sequences are the same length).
	static sequenceContainer readUnAligned(istream &infile, const alphabet* alph);
};

#endif

/* EXAMPLE OF THE FORMAT:

;;this is the place for general remarks.
;here we put sequence specific remark. 
Langur
KIFERCELARTLKKLGLDGYKGVSLANWVCLAKWESGYNTEATNYNPGDESTDYGIFQINSRYWCNNGKPGAVDACHISCSALLQNNIADAVACAKRVVSDQGIRAWVAWRNHCQNKDVSQYVKGCGV
;
Baboon
KIFERCELARTLKRLGLDGYRGISLANWVCLAKWESDYNTQATNYNPGDQSTDYGIFQINSHYWCNDGKPGAVNACHISCNALLQDNITDAVACAKRVVSDQGIRAWVAWRNHCQNRDVSQYVQGCGV
;
Human
KVFERCELARTLKRLGMDGYRGISLANWMCLAKWESGYNTRATNYNAGDRSTDYGIFQINSRYWCNDGKPGAVNACHLSCSALLQDNIADAVACAKRVVRDQGIRAWVAWRNRCQNRDVRQYVQGCGV
;
Rat
KTYERCEFARTLKRNGMSGYYGVSLADWVCLAQHESNYNTQARNYDPGDQSTDYGIFQINSRYWCNDGKPRAKNACGIPCSALLQDDITQAIQCAKRVVRDQGIRAWVAWQRHCKNRDLSGYIRNCGV
;
Cow
KVFERCELARTLKKLGLDGYKGVSLANWLCLTKWESSYNTKATNYNPSSESTDYGIFQINSKWWCNDGKPNAVDGCHVSCSELMENDIAKAVACAKKIVSEQGITAWVAWKSHCRDHDVSSYVEGCTL
;
Horse
KVFSKCELAHKLKAQEMDGFGGYSLANWVCMAEYESNFNTRAFNGKNANGSSDYGLFQLNNKWWCKDNKRSSSNACNIMCSKLLDENIDDDISCAKRVVRDKGMSAWKAWVKHCKDKDLSEYLASCNL

*/

