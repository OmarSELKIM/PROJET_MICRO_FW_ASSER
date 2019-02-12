;	re-use memory for things

	global	storeback,RES032
	global	__fpover, __fpunder, ___saveunder
	global	__fpdiv0

        psect   temp,ovrld,class=COMRAM,space=1
mant1:
btemp: 	ds     	12
mant2 	equ	btemp+4
cntr	equ	mant2+3		;use the high byte of mant2 as a counter byte
prod	equ	btemp+8

AARGB2	equ     mant1
AARGB1	equ     mant1+1
AARGB0	equ     mant1+2
AARG	equ     mant1+2    	; most significant byte of argument A
EXP	equ	mant1+3
AEXP	equ	mant1+3		; 8 bit biased exponent for argument A

BARGB2	equ     mant2+0
BARGB1	equ     mant2+1
BARGB0	equ     mant2+2
BARG	equ     mant2+2    	; most significant byte of argument B
BEXP	equ	mant2+3		; 8 bit biased exponent for argument B



AARGB5	equ     btemp+8
AARGB4	equ     btemp+9
AARGB3	equ     btemp+10
BARGB3	equ     btemp+11    ; save location for sign in MSB


        psect   temp,ovrld,class=COMRAM,space=1
exp1:	ds	1
exp2:	ds	1
signs:	ds	1
SIGN:	ds 	1

TEMPB3	equ	exp1
TEMPB2	equ	exp2
TEMPB1	equ	signs
TEMPB0:	ds	1
TEMP	equ	TEMPB0	; temporary storage
TL_BK:	ds	1		; Back up Table Pointer that
TH_BK:	ds	1		; are used by division

EXPBIAS	equ     127	; biased exponents

FPFLAGS: ds	1			; floating point library exception flags

;       floating point library exception flags

                
IOV	equ     0       ; bit0 = integer overflow flag

FOV	equ     1       ; bit1 = floating point overflow flag

FUN	equ     2       ; bit2 = floating point underflow flag

FDZ	equ     3       ; bit3 = floating point divide by zero flag

NAN	equ	4	; bit4 = not-a-number exception flag

DOM	equ	5	; bit5 = domain error flag

RND	equ     6       ; bit6 = floating point rounding flag, 0 = truncation
              		; 1 = unbiased rounding to nearest LSB

SAT	equ     7       ; bit7 = floating point saturate flag, 0 = terminate on
                      	; exception without saturation, 1 = terminate on
                 	; exception with saturation to appropriate value



	global	used_btemp0
	global	used_btemp1
	global	used_btemp2
	global	used_btemp3
	global	used_btemp4
	global	used_btemp5
	global	used_btemp6
	global	used_btemp7
	global	used_btemp8
	global	used_btemp9
	global	used_btemp10
	global	used_btemp11
	global	used_btemp12
	global	used_btemp13
	global	used_btemp14



;	general literal constants

;	define assembler constants

B0	equ	0
B1	equ	1
B2	equ	2
B3	equ	3
B4	equ	4
B5	equ	5
B6	equ	6
B7	equ	7

MSB	equ	7
LSB	equ	0

#include	"sfr.h"

psect	text,class=CODE,delta=1,reloc=2
