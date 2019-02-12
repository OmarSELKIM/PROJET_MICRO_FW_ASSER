;	Copyright (C) 1997 HI-TECH Software 

;	Single Precision IEEE Floating point arithmetic routines for PIC
;	The 32 bit IEEE format is referred to as 'double'.

;	The format of floating point numbers is as follows:

;	-----------------
;	*   mantissa	*  23 bits + 1 implied bit = 24 bits
;	-----------------
;	*   exponent	*  8 bits
;	-----------------
;	*     sign	*  1 bit
;	-----------------

;	The implied bit is always 1 except for a zero value where it is
;	zero. A zero value is indicated by a zero exponent. The exponent
;	for a float is stored as excess 127 (i.e. an exponent of 0 is
;	represented by 127). The mantissa is in positive magnitude form.

;	The memory layout has the least significant
;	byte (i.e. that containing LSB of the mantissa) coming first, i.e. at the
;	lowest address.

;	Calling conventions:

;	Left operand in btemp, right operand in btemp+4
;
;	Return value is in btemp+8 mostly

;	Naming conventions: A routine name is constructed by

;	      ASOP

;	Where A is the arithmetic type (f for float), and op is the operation,
;	one of mul, div, mod, add, sub and cmp. S is the size, always d for double.
;	Conversion routines are named

;		AStod

;	where A is the arithmetic type (a for integer, l for unsigned)
;	S is the integer size, one of b (byte), w (word) or l (long).
;	Conversion from double to integer is dtol.

#include	"sfr.h"

	GLOBAL	?p(double),??p(double),p(double)
	GLOBAL	p(flunpack1), p(flunpack2), p(flnorm1), p(zerct)
	GLOBAL	__fpover,__fpunder,saveunder
	GLOBAL	__fpdiv0

;	re-use memory for things

tempbank	EQU	?p(double)>>8
mant1	EQU	(?p(double))&0ffh
mant2	EQU	(?p(double)+4)&0ffh
cntr	EQU	(??p(double))&0ffh
prod	EQU	(??p(double)+1)&0ffh
exp1	EQU	(??p(double)+5)&0ffh
exp2	EQU	(??p(double)+6)&0ffh
signs	EQU	(??p(double)+7)&0ffh

	PSECT	text,class=CODE,reloc=2
