; special function registers

#include	"ashdr.h"

WREG	equ	0FE8h
FSR0L	equ	0FE9h
FSR0H	equ	0FEAh
FSR1L	equ	0FE1h
FSR1H	equ	0FE2h
FSR2L	equ	0FD9h
FSR2H	equ	0FDAh
POSTINC0	equ	0FEEh
POSTDEC0	equ	0FEDh
POSTINC1	equ	0FE6h
POSTDEC1	equ	0FE5h
INDF0	equ	0FEFh

STATUS	equ	0FD8h

CY	equ	0
Z	equ	2

PCLATU	equ	0FFBh
PCLATH	equ	0FFAh
PCL	equ	0FF9h
TBLPTRU	equ	0FF8h
TBLPTRH	equ	0FF7h
TBLPTRL	equ	0FF6h
TABLAT	equ	0FF5h
BSR	equ	0FE0h

PRODL	equ	0FF3h
PRODH	equ	0FF4h

TOSU	equ	0FFFh
TOSH	equ	0FFEh
TOSL	equ	0FFDh

        psect   temp,global,class=COMRAM,space=1,ovrld,common

; A macro which ensures that the memory bank in which the temp psect
; resides is selected.
; It swaps bank if there is no common area and there is more than
; one bank of memory available.

SELTEMP	macro
	endm

; A macro to select bank 0

SELBANK0	macro
	endm

; Deal with the 18Cx52  parts that have a broken lfsr

#if	defined(_18C252) || defined(_18C452) || defined(_18C242) || defined(_18C442)

#define	_BROKEN_LFSR

loadfsr	macro	which, what
	movlw	low(what)
	movwf	FSR&which&L
	movlw	high(what)
	movwf	FSR&which&H
	endm

#else

loadfsr	macro	which,what
	lfsr	which,what
	endm

#endif

loadtblptr macro	what
	movlw	low(what)
	movwf	TBLPTRL
	movlw	low(what >> 8)
	movwf	TBLPTRH
	movlw	low(what >> 16)
	movwf	TBLPTRU
	endm

#if defined(ERRATA_FXX2_B3) || defined(ERRATA_FXX8_B4)
put_errata_nop	macro
	dw 0ffffh
	endm
#else
put_errata_nop	macro
	endm
#endif

	psect	text,class=CODE,delta=1
