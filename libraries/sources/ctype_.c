#include	<ctype.h>

#ifdef	_XA_
code unsigned char _ctype_[257] = {
#else
const unsigned char _ctype_[257] = {
#endif
		0,
/* 000 */	_CNTRL,	_CNTRL,	_CNTRL,	_CNTRL,	_CNTRL,	_CNTRL,	_CNTRL,	_CNTRL,
/* 010 */	_CNTRL,	_CNTRL|_WHTSP,	_CNTRL|_WHTSP,	_CNTRL|_WHTSP,	_CNTRL|_WHTSP,	_CNTRL|_WHTSP,	_CNTRL,	_CNTRL,
/* 020 */	_CNTRL,	_CNTRL,	_CNTRL,	_CNTRL,	_CNTRL,	_CNTRL,	_CNTRL,	_CNTRL,
/* 030 */	_CNTRL,	_CNTRL,	_CNTRL,	_CNTRL,	_CNTRL,	_CNTRL,	_CNTRL,	_CNTRL,
/* 040 */	_WHTSP|_PRINT,	_PUNCT,	_PUNCT,	_PUNCT,	_PUNCT,	_PUNCT,	_PUNCT,	_PUNCT,
/* 050 */	_PUNCT,	_PUNCT,	_PUNCT,	_PUNCT,	_PUNCT,	_PUNCT,	_PUNCT,	_PUNCT,
/* 060 */	_DIGIT,	_DIGIT,	_DIGIT,	_DIGIT,	_DIGIT,	_DIGIT,	_DIGIT,	_DIGIT,
/* 070 */	_DIGIT,	_DIGIT,	_PUNCT,	_PUNCT,	_PUNCT,	_PUNCT,	_PUNCT,	_PUNCT,
/* 100 */	_PUNCT,	_UCASE|_HEXAD,	_UCASE|_HEXAD,	_UCASE|_HEXAD,	_UCASE|_HEXAD,	_UCASE|_HEXAD,	_UCASE|_HEXAD,	_UCASE,
/* 110 */	_UCASE,	_UCASE,	_UCASE,	_UCASE,	_UCASE,	_UCASE,	_UCASE,	_UCASE,
/* 120 */	_UCASE,	_UCASE,	_UCASE,	_UCASE,	_UCASE,	_UCASE,	_UCASE,	_UCASE,
/* 130 */	_UCASE,	_UCASE,	_UCASE,	_PUNCT,	_PUNCT,	_PUNCT,	_PUNCT,	_PUNCT,
/* 140 */	_PUNCT,	_LCASE|_HEXAD,	_LCASE|_HEXAD,	_LCASE|_HEXAD,	_LCASE|_HEXAD,	_LCASE|_HEXAD,	_LCASE|_HEXAD,	_LCASE,
/* 150 */	_LCASE,	_LCASE,	_LCASE,	_LCASE,	_LCASE,	_LCASE,	_LCASE,	_LCASE,
/* 160 */	_LCASE,	_LCASE,	_LCASE,	_LCASE,	_LCASE,	_LCASE,	_LCASE,	_LCASE,
/* 170 */	_LCASE,	_LCASE,	_LCASE,	_PUNCT,	_PUNCT,	_PUNCT,	_PUNCT,	_CNTRL
};