#ifndef	_HTC_H_
#warning Header file pic12f520.h included directly. Use #include <htc.h> instead.
#endif

/* header file for the MICROCHIP PIC microcontroller
 *  12F520
 */


#ifndef __PIC12F520_H
#define __PIC12F520_H

// Config Register: CONFIG
#define CONFIG               0x0FFF

//
// Special function register definitions
//


// Register: INDF
volatile unsigned char           INDF                @ 0x000;
// bit and bitfield definitions

// Register: TMR0
volatile unsigned char           TMR0                @ 0x001;
// bit and bitfield definitions

// Register: PCL
volatile unsigned char           PCL                 @ 0x002;
// bit and bitfield definitions

// Register: STATUS
volatile unsigned char           STATUS              @ 0x003;
// bit and bitfield definitions
volatile bit CARRY               @ ((unsigned)&STATUS*8)+0;
volatile bit DC                  @ ((unsigned)&STATUS*8)+1;
volatile bit ZERO                @ ((unsigned)&STATUS*8)+2;
volatile bit nPD                 @ ((unsigned)&STATUS*8)+3;
volatile bit nTO                 @ ((unsigned)&STATUS*8)+4;
volatile bit PA0                 @ ((unsigned)&STATUS*8)+5;
volatile bit PA1                 @ ((unsigned)&STATUS*8)+6;
volatile bit RBWUF               @ ((unsigned)&STATUS*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	C                   : 1;
        unsigned	DC                  : 1;
        unsigned	Z                   : 1;
        unsigned	nPD                 : 1;
        unsigned	nTO                 : 1;
        unsigned	PA0                 : 1;
        unsigned	PA1                 : 1;
        unsigned	RBWUF               : 1;
    };
} STATUSbits @ 0x003;
#endif

// Register: FSR
volatile unsigned char           FSR                 @ 0x004;
// bit and bitfield definitions

// Register: OSCCAL
volatile unsigned char           OSCCAL              @ 0x005;
// bit and bitfield definitions
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	                    : 1;
        unsigned	CAL                 : 7;
    };
} OSCCALbits @ 0x005;
#endif

// Register: PORTB
volatile unsigned char           PORTB               @ 0x006;
// bit and bitfield definitions
volatile bit RB0                 @ ((unsigned)&PORTB*8)+0;
volatile bit RB1                 @ ((unsigned)&PORTB*8)+1;
volatile bit RB2                 @ ((unsigned)&PORTB*8)+2;
volatile bit RB3                 @ ((unsigned)&PORTB*8)+3;
volatile bit RB4                 @ ((unsigned)&PORTB*8)+4;
volatile bit RB5                 @ ((unsigned)&PORTB*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	RB0                 : 1;
        unsigned	RB1                 : 1;
        unsigned	RB2                 : 1;
        unsigned	RB3                 : 1;
        unsigned	RB4                 : 1;
        unsigned	RB5                 : 1;
    };
} PORTBbits @ 0x006;
#endif

//
// Special function register definitions: Bank 1
//


// Register: EECON
volatile unsigned char           EECON               @ 0x021;
// bit and bitfield definitions
volatile bit RD                  @ ((unsigned)&EECON*8)+0;
volatile bit WR                  @ ((unsigned)&EECON*8)+1;
volatile bit WREN                @ ((unsigned)&EECON*8)+2;
volatile bit WRERR               @ ((unsigned)&EECON*8)+3;
volatile bit FREE                @ ((unsigned)&EECON*8)+4;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	RD                  : 1;
        unsigned	WR                  : 1;
        unsigned	WREN                : 1;
        unsigned	WRERR               : 1;
        unsigned	FREE                : 1;
    };
} EECONbits @ 0x021;
#endif

// Register: EEDATA
volatile unsigned char           EEDATA              @ 0x025;
// bit and bitfield definitions

// Register: EEADR
volatile unsigned char           EEADR               @ 0x026;
// bit and bitfield definitions

// Register: WREG
volatile unsigned char           WREG                @ 0x051;
// bit and bitfield definitions

// Register: STKPTR
volatile unsigned char           STKPTR              @ 0x052;
// bit and bitfield definitions

// Register: TRISB
volatile unsigned char           TRISB               @ 0x053;
// bit and bitfield definitions
volatile bit TRISB0              @ ((unsigned)&TRISB*8)+0;
volatile bit TRISB1              @ ((unsigned)&TRISB*8)+1;
volatile bit TRISB2              @ ((unsigned)&TRISB*8)+2;
volatile bit TRISB3              @ ((unsigned)&TRISB*8)+3;
volatile bit TRISB4              @ ((unsigned)&TRISB*8)+4;
volatile bit TRISB5              @ ((unsigned)&TRISB*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	TRISB0              : 1;
        unsigned	TRISB1              : 1;
        unsigned	TRISB2              : 1;
        unsigned	TRISB3              : 1;
        unsigned	TRISB4              : 1;
        unsigned	TRISB5              : 1;
        unsigned	                    : 2;
    };
} TRISBbits @ 0x053;
#endif

// Register: OPTION_REG
volatile unsigned char           OPTION_REG          @ 0x054;
// bit and bitfield definitions
volatile bit PSA                 @ ((unsigned)&OPTION_REG*8)+3;
volatile bit T0SE                @ ((unsigned)&OPTION_REG*8)+4;
volatile bit T0CS                @ ((unsigned)&OPTION_REG*8)+5;
volatile bit nRBPU               @ ((unsigned)&OPTION_REG*8)+6;
volatile bit nRBWU               @ ((unsigned)&OPTION_REG*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	PS                  : 3;
        unsigned	PSA                 : 1;
        unsigned	T0SE                : 1;
        unsigned	T0CS                : 1;
        unsigned	nRBPU               : 1;
        unsigned	nRBWU               : 1;
    };
} OPTION_REGbits @ 0x054;
#endif

#endif
