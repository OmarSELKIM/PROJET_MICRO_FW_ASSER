
#ifndef	_HTC_H_
#warning Header file pic12f617.h included directly. Use #include <htc.h> instead.
#endif

/* header file for the MICROCHIP PIC microcontroller
 *  12F617
 */


#ifndef __PIC12F617_H
#define __PIC12F617_H

// Config Register: CONFIG
#define CONFIG               0x2007

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
volatile bit IRP                 @ ((unsigned)&STATUS*8)+7;
volatile bit RP0                 @ ((unsigned)&STATUS*8)+5;
volatile bit RP1                 @ ((unsigned)&STATUS*8)+6;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	C                   : 1;
        unsigned	DC                  : 1;
        unsigned	Z                   : 1;
        unsigned	nPD                 : 1;
        unsigned	nTO                 : 1;
        unsigned	RP                  : 2;
        unsigned	IRP                 : 1;
    };
    struct {
        unsigned	                    : 5;
        unsigned	RP0                 : 1;
        unsigned	RP1                 : 1;
    };
} STATUSbits @ 0x003;
#endif

// Register: FSR
volatile unsigned char           FSR                 @ 0x004;
// bit and bitfield definitions

// Register: GPIO
volatile unsigned char           GPIO                @ 0x005;
volatile unsigned char           PORTA               @ 0x005;
// bit and bitfield definitions
volatile bit GP0                 @ ((unsigned)&GPIO*8)+0;
volatile bit GP1                 @ ((unsigned)&GPIO*8)+1;
volatile bit GP2                 @ ((unsigned)&GPIO*8)+2;
volatile bit GP3                 @ ((unsigned)&GPIO*8)+3;
volatile bit GP4                 @ ((unsigned)&GPIO*8)+4;
volatile bit GP5                 @ ((unsigned)&GPIO*8)+5;
volatile bit GPIO0               @ ((unsigned)&GPIO*8)+0;
volatile bit GPIO1               @ ((unsigned)&GPIO*8)+1;
volatile bit GPIO2               @ ((unsigned)&GPIO*8)+2;
volatile bit GPIO3               @ ((unsigned)&GPIO*8)+3;
volatile bit GPIO4               @ ((unsigned)&GPIO*8)+4;
volatile bit GPIO5               @ ((unsigned)&GPIO*8)+5;
volatile bit RA0                 @ ((unsigned)&GPIO*8)+0;
volatile bit RA1                 @ ((unsigned)&GPIO*8)+1;
volatile bit RA2                 @ ((unsigned)&GPIO*8)+2;
volatile bit RA3                 @ ((unsigned)&GPIO*8)+3;
volatile bit RA4                 @ ((unsigned)&GPIO*8)+4;
volatile bit RA5                 @ ((unsigned)&GPIO*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	GP0                 : 1;
        unsigned	GP1                 : 1;
        unsigned	GP2                 : 1;
        unsigned	GP3                 : 1;
        unsigned	GP4                 : 1;
        unsigned	GP5                 : 1;
    };
    struct {
        unsigned	GPIO0               : 1;
        unsigned	GPIO1               : 1;
        unsigned	GPIO2               : 1;
        unsigned	GPIO3               : 1;
        unsigned	GPIO4               : 1;
        unsigned	GPIO5               : 1;
    };
    struct {
        unsigned	RA0                 : 1;
        unsigned	RA1                 : 1;
        unsigned	RA2                 : 1;
        unsigned	RA3                 : 1;
        unsigned	RA4                 : 1;
        unsigned	RA5                 : 1;
    };
} GPIObits @ 0x005;
#endif

// Register: PCLATH
volatile unsigned char           PCLATH              @ 0x00A;
// bit and bitfield definitions
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	                    : 5;
    };
} PCLATHbits @ 0x00A;
#endif

// Register: INTCON
volatile unsigned char           INTCON              @ 0x00B;
// bit and bitfield definitions
volatile bit GPIF                @ ((unsigned)&INTCON*8)+0;
volatile bit INTF                @ ((unsigned)&INTCON*8)+1;
volatile bit T0IF                @ ((unsigned)&INTCON*8)+2;
volatile bit GPIE                @ ((unsigned)&INTCON*8)+3;
volatile bit INTE                @ ((unsigned)&INTCON*8)+4;
volatile bit T0IE                @ ((unsigned)&INTCON*8)+5;
volatile bit PEIE                @ ((unsigned)&INTCON*8)+6;
volatile bit GIE                 @ ((unsigned)&INTCON*8)+7;
volatile bit TMR0IF              @ ((unsigned)&INTCON*8)+2;
volatile bit TMR0IE              @ ((unsigned)&INTCON*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	GPIF                : 1;
        unsigned	INTF                : 1;
        unsigned	T0IF                : 1;
        unsigned	GPIE                : 1;
        unsigned	INTE                : 1;
        unsigned	T0IE                : 1;
        unsigned	PEIE                : 1;
        unsigned	GIE                 : 1;
    };
    struct {
        unsigned	                    : 2;
        unsigned	TMR0IF              : 1;
        unsigned	: 2;
        unsigned	TMR0IE              : 1;
    };
} INTCONbits @ 0x00B;
#endif

// Register: PIR1
volatile unsigned char           PIR1                @ 0x00C;
// bit and bitfield definitions
volatile bit TMR1IF              @ ((unsigned)&PIR1*8)+0;
volatile bit TMR2IF              @ ((unsigned)&PIR1*8)+1;
volatile bit CMIF                @ ((unsigned)&PIR1*8)+3;
volatile bit CCP1IF              @ ((unsigned)&PIR1*8)+5;
volatile bit ADIF                @ ((unsigned)&PIR1*8)+6;
volatile bit C1IF                @ ((unsigned)&PIR1*8)+3;
volatile bit CCPIF               @ ((unsigned)&PIR1*8)+5;
volatile bit ECCPIF              @ ((unsigned)&PIR1*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	TMR1IF              : 1;
        unsigned	TMR2IF              : 1;
        unsigned	                    : 1;
        unsigned	CMIF                : 1;
        unsigned	: 1;
        unsigned	CCP1IF              : 1;
        unsigned	ADIF                : 1;
    };
    struct {
        unsigned	: 3;
        unsigned	C1IF                : 1;
        unsigned	: 1;
        unsigned	CCPIF               : 1;
    };
    struct {
        unsigned	: 5;
        unsigned	ECCPIF              : 1;
    };
} PIR1bits @ 0x00C;
#endif
// bit and bitfield definitions

// Register: TMR1L
volatile unsigned char           TMR1L               @ 0x00E;
// bit and bitfield definitions

// Register: TMR1H
volatile unsigned char           TMR1H               @ 0x00F;
// bit and bitfield definitions

// Register: TMR1
volatile unsigned int            TMR1                @ 0x00E;

// Register: T1CON
volatile unsigned char           T1CON               @ 0x010;
// bit and bitfield definitions
volatile bit TMR1ON              @ ((unsigned)&T1CON*8)+0;
volatile bit TMR1CS              @ ((unsigned)&T1CON*8)+1;
volatile bit nT1SYNC             @ ((unsigned)&T1CON*8)+2;
volatile bit T1OSCEN             @ ((unsigned)&T1CON*8)+3;
volatile bit TMR1GE              @ ((unsigned)&T1CON*8)+6;
volatile bit T1GINV              @ ((unsigned)&T1CON*8)+7;
volatile bit T1CKPS0             @ ((unsigned)&T1CON*8)+4;
volatile bit T1CKPS1             @ ((unsigned)&T1CON*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	TMR1ON              : 1;
        unsigned	TMR1CS              : 1;
        unsigned	nT1SYNC             : 1;
        unsigned	T1OSCEN             : 1;
        unsigned	T1CKPS              : 2;
        unsigned	TMR1GE              : 1;
        unsigned	T1GINV              : 1;
    };
    struct {
        unsigned	                    : 4;
        unsigned	T1CKPS0             : 1;
        unsigned	T1CKPS1             : 1;
    };
} T1CONbits @ 0x010;
#endif

// Register: TMR2
volatile unsigned char           TMR2                @ 0x011;
// bit and bitfield definitions

// Register: T2CON
volatile unsigned char           T2CON               @ 0x012;
// bit and bitfield definitions
volatile bit TMR2ON              @ ((unsigned)&T2CON*8)+2;
volatile bit T2CKPS0             @ ((unsigned)&T2CON*8)+0;
volatile bit T2CKPS1             @ ((unsigned)&T2CON*8)+1;
volatile bit TOUTPS0             @ ((unsigned)&T2CON*8)+3;
volatile bit TOUTPS1             @ ((unsigned)&T2CON*8)+4;
volatile bit TOUTPS2             @ ((unsigned)&T2CON*8)+5;
volatile bit TOUTPS3             @ ((unsigned)&T2CON*8)+6;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	T2CKPS              : 2;
        unsigned	TMR2ON              : 1;
        unsigned	TOUTPS              : 4;
    };
    struct {
        unsigned	T2CKPS0             : 1;
        unsigned	T2CKPS1             : 1;
        unsigned	                    : 1;
        unsigned	TOUTPS0             : 1;
        unsigned	TOUTPS1             : 1;
        unsigned	TOUTPS2             : 1;
        unsigned	TOUTPS3             : 1;
    };
} T2CONbits @ 0x012;
#endif
// bit and bitfield definitions

// Register: CCPR1L
volatile unsigned char           CCPR1L              @ 0x013;
// bit and bitfield definitions

// Register: CCPR1H
volatile unsigned char           CCPR1H              @ 0x014;
// bit and bitfield definitions

// Register: CCPR1
volatile unsigned int            CCPR1               @ 0x013;

// Register: CCP1CON
volatile unsigned char           CCP1CON             @ 0x015;
// bit and bitfield definitions
volatile bit P1M                 @ ((unsigned)&CCP1CON*8)+7;
volatile bit CCP1M0              @ ((unsigned)&CCP1CON*8)+0;
volatile bit CCP1M1              @ ((unsigned)&CCP1CON*8)+1;
volatile bit CCP1M2              @ ((unsigned)&CCP1CON*8)+2;
volatile bit CCP1M3              @ ((unsigned)&CCP1CON*8)+3;
volatile bit DCB0                @ ((unsigned)&CCP1CON*8)+4;
volatile bit DCB1                @ ((unsigned)&CCP1CON*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	CCP1M               : 4;
        unsigned	DCB                 : 2;
        unsigned	                    : 1;
        unsigned	P1M                 : 1;
    };
    struct {
        unsigned	CCP1M0              : 1;
        unsigned	CCP1M1              : 1;
        unsigned	CCP1M2              : 1;
        unsigned	CCP1M3              : 1;
        unsigned	DCB0                : 1;
        unsigned	DCB1                : 1;
    };
} CCP1CONbits @ 0x015;
#endif

// Register: PWM1CON
volatile unsigned char           PWM1CON             @ 0x016;
// bit and bitfield definitions
volatile bit PRSEN               @ ((unsigned)&PWM1CON*8)+7;
volatile bit PDC0                @ ((unsigned)&PWM1CON*8)+0;
volatile bit PDC1                @ ((unsigned)&PWM1CON*8)+1;
volatile bit PDC2                @ ((unsigned)&PWM1CON*8)+2;
volatile bit PDC3                @ ((unsigned)&PWM1CON*8)+3;
volatile bit PDC4                @ ((unsigned)&PWM1CON*8)+4;
volatile bit PDC5                @ ((unsigned)&PWM1CON*8)+5;
volatile bit PDC6                @ ((unsigned)&PWM1CON*8)+6;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	PDC                 : 7;
        unsigned	PRSEN               : 1;
    };
    struct {
        unsigned	PDC0                : 1;
        unsigned	PDC1                : 1;
        unsigned	PDC2                : 1;
        unsigned	PDC3                : 1;
        unsigned	PDC4                : 1;
        unsigned	PDC5                : 1;
        unsigned	PDC6                : 1;
    };
} PWM1CONbits @ 0x016;
#endif

// Register: ECCPAS
volatile unsigned char           ECCPAS              @ 0x017;
// bit and bitfield definitions
volatile bit ECCPASE             @ ((unsigned)&ECCPAS*8)+7;
volatile bit PSSBD0              @ ((unsigned)&ECCPAS*8)+0;
volatile bit PSSBD1              @ ((unsigned)&ECCPAS*8)+1;
volatile bit PSSAC0              @ ((unsigned)&ECCPAS*8)+2;
volatile bit PSSAC1              @ ((unsigned)&ECCPAS*8)+3;
volatile bit ECCPAS0             @ ((unsigned)&ECCPAS*8)+4;
volatile bit ECCPAS1             @ ((unsigned)&ECCPAS*8)+5;
volatile bit ECCPAS2             @ ((unsigned)&ECCPAS*8)+6;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	PSSBD               : 2;
        unsigned	PSSAC               : 2;
        unsigned	ECCPAS              : 3;
        unsigned	ECCPASE             : 1;
    };
    struct {
        unsigned	PSSBD0              : 1;
        unsigned	PSSBD1              : 1;
        unsigned	PSSAC0              : 1;
        unsigned	PSSAC1              : 1;
        unsigned	ECCPAS0             : 1;
        unsigned	ECCPAS1             : 1;
        unsigned	ECCPAS2             : 1;
    };
} ECCPASbits @ 0x017;
#endif

// Register: VRCON
volatile unsigned char           VRCON               @ 0x019;
// bit and bitfield definitions
volatile bit FVREN               @ ((unsigned)&VRCON*8)+4;
volatile bit VRR                 @ ((unsigned)&VRCON*8)+5;
volatile bit CMVREN              @ ((unsigned)&VRCON*8)+7;
volatile bit VR0                 @ ((unsigned)&VRCON*8)+0;
volatile bit VR1                 @ ((unsigned)&VRCON*8)+1;
volatile bit VR2                 @ ((unsigned)&VRCON*8)+2;
volatile bit VR3                 @ ((unsigned)&VRCON*8)+3;
volatile bit C1VREN              @ ((unsigned)&VRCON*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	VR                  : 4;
        unsigned	FVREN               : 1;
        unsigned	VRR                 : 1;
        unsigned	                    : 1;
        unsigned	CMVREN              : 1;
    };
    struct {
        unsigned	VR0                 : 1;
        unsigned	VR1                 : 1;
        unsigned	VR2                 : 1;
        unsigned	VR3                 : 1;
        unsigned	: 3;
        unsigned	C1VREN              : 1;
    };
} VRCONbits @ 0x019;
#endif

// Register: CMCON0
volatile unsigned char           CMCON0              @ 0x01A;
// bit and bitfield definitions
volatile bit CMCH                @ ((unsigned)&CMCON0*8)+0;
volatile bit CMR                 @ ((unsigned)&CMCON0*8)+2;
volatile bit CMPOL               @ ((unsigned)&CMCON0*8)+4;
volatile bit CMOE                @ ((unsigned)&CMCON0*8)+5;
volatile bit COUT                @ ((unsigned)&CMCON0*8)+6;
volatile bit CMON                @ ((unsigned)&CMCON0*8)+7;
volatile bit C1CH                @ ((unsigned)&CMCON0*8)+0;
volatile bit C1R                 @ ((unsigned)&CMCON0*8)+2;
volatile bit C1POL               @ ((unsigned)&CMCON0*8)+4;
volatile bit C1OE                @ ((unsigned)&CMCON0*8)+5;
volatile bit C1OUT               @ ((unsigned)&CMCON0*8)+6;
volatile bit C1ON                @ ((unsigned)&CMCON0*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	CMCH                : 1;
        unsigned	                    : 1;
        unsigned	CMR                 : 1;
        unsigned	: 1;
        unsigned	CMPOL               : 1;
        unsigned	CMOE                : 1;
        unsigned	COUT                : 1;
        unsigned	CMON                : 1;
    };
    struct {
        unsigned	C1CH                : 1;
        unsigned	: 1;
        unsigned	C1R                 : 1;
        unsigned	: 1;
        unsigned	C1POL               : 1;
        unsigned	C1OE                : 1;
        unsigned	C1OUT               : 1;
        unsigned	C1ON                : 1;
    };
} CMCON0bits @ 0x01A;
#endif

// Register: CMCON1
volatile unsigned char           CMCON1              @ 0x01C;
// bit and bitfield definitions
volatile bit CMSYNC              @ ((unsigned)&CMCON1*8)+0;
volatile bit T1GSS               @ ((unsigned)&CMCON1*8)+1;
volatile bit CMHYS               @ ((unsigned)&CMCON1*8)+3;
volatile bit T1ACS               @ ((unsigned)&CMCON1*8)+4;
volatile bit C1SYNC              @ ((unsigned)&CMCON1*8)+0;
volatile bit C1HYS               @ ((unsigned)&CMCON1*8)+3;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	CMSYNC              : 1;
        unsigned	T1GSS               : 1;
        unsigned	                    : 1;
        unsigned	CMHYS               : 1;
        unsigned	T1ACS               : 1;
    };
    struct {
        unsigned	C1SYNC              : 1;
        unsigned	: 2;
        unsigned	C1HYS               : 1;
    };
} CMCON1bits @ 0x01C;
#endif

// Register: ADRESH
volatile unsigned char           ADRESH              @ 0x01E;
// bit and bitfield definitions

// Register: ADCON0
volatile unsigned char           ADCON0              @ 0x01F;
// bit and bitfield definitions
volatile bit ADON                @ ((unsigned)&ADCON0*8)+0;
volatile bit GO_nDONE            @ ((unsigned)&ADCON0*8)+1;
volatile bit VCFG                @ ((unsigned)&ADCON0*8)+6;
volatile bit ADFM                @ ((unsigned)&ADCON0*8)+7;
volatile bit CHS0                @ ((unsigned)&ADCON0*8)+2;
volatile bit CHS1                @ ((unsigned)&ADCON0*8)+3;
volatile bit CHS2                @ ((unsigned)&ADCON0*8)+4;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	ADON                : 1;
        unsigned	GO_nDONE            : 1;
        unsigned	CHS                 : 3;
        unsigned	                    : 1;
        unsigned	VCFG                : 1;
        unsigned	ADFM                : 1;
    };
    struct {
        unsigned	: 2;
        unsigned	CHS0                : 1;
        unsigned	CHS1                : 1;
        unsigned	CHS2                : 1;
    };
} ADCON0bits @ 0x01F;
#endif

//
// Special function register definitions: Bank 1
//


// Register: OPTION_REG
volatile unsigned char           OPTION_REG          @ 0x081;
// bit and bitfield definitions
volatile bit PSA                 @ ((unsigned)&OPTION_REG*8)+3;
volatile bit T0SE                @ ((unsigned)&OPTION_REG*8)+4;
volatile bit T0CS                @ ((unsigned)&OPTION_REG*8)+5;
volatile bit INTEDG              @ ((unsigned)&OPTION_REG*8)+6;
volatile bit nGPPU               @ ((unsigned)&OPTION_REG*8)+7;
volatile bit PS0                 @ ((unsigned)&OPTION_REG*8)+0;
volatile bit PS1                 @ ((unsigned)&OPTION_REG*8)+1;
volatile bit PS2                 @ ((unsigned)&OPTION_REG*8)+2;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	PS                  : 3;
        unsigned	PSA                 : 1;
        unsigned	T0SE                : 1;
        unsigned	T0CS                : 1;
        unsigned	INTEDG              : 1;
        unsigned	nGPPU               : 1;
    };
    struct {
        unsigned	PS0                 : 1;
        unsigned	PS1                 : 1;
        unsigned	PS2                 : 1;
    };
} OPTION_REGbits @ 0x081;
#endif

// Register: TRISIO
volatile unsigned char           TRISIO              @ 0x085;
volatile unsigned char           TRISA               @ 0x085;
// bit and bitfield definitions
volatile bit TRISIO0             @ ((unsigned)&TRISIO*8)+0;
volatile bit TRISIO1             @ ((unsigned)&TRISIO*8)+1;
volatile bit TRISIO2             @ ((unsigned)&TRISIO*8)+2;
volatile bit TRISIO3             @ ((unsigned)&TRISIO*8)+3;
volatile bit TRISIO4             @ ((unsigned)&TRISIO*8)+4;
volatile bit TRISIO5             @ ((unsigned)&TRISIO*8)+5;
volatile bit TRISA0              @ ((unsigned)&TRISIO*8)+0;
volatile bit TRISA1              @ ((unsigned)&TRISIO*8)+1;
volatile bit TRISA2              @ ((unsigned)&TRISIO*8)+2;
volatile bit TRISA3              @ ((unsigned)&TRISIO*8)+3;
volatile bit TRISA4              @ ((unsigned)&TRISIO*8)+4;
volatile bit TRISA5              @ ((unsigned)&TRISIO*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	TRISIO0             : 1;
        unsigned	TRISIO1             : 1;
        unsigned	TRISIO2             : 1;
        unsigned	TRISIO3             : 1;
        unsigned	TRISIO4             : 1;
        unsigned	TRISIO5             : 1;
    };
    struct {
        unsigned	TRISA0              : 1;
        unsigned	TRISA1              : 1;
        unsigned	TRISA2              : 1;
        unsigned	TRISA3              : 1;
        unsigned	TRISA4              : 1;
        unsigned	TRISA5              : 1;
    };
} TRISIObits @ 0x085;
#endif

// Register: PIE1
volatile unsigned char           PIE1                @ 0x08C;
// bit and bitfield definitions
volatile bit TMR1IE              @ ((unsigned)&PIE1*8)+0;
volatile bit TMR2IE              @ ((unsigned)&PIE1*8)+1;
volatile bit CMIE                @ ((unsigned)&PIE1*8)+3;
volatile bit CCP1IE              @ ((unsigned)&PIE1*8)+5;
volatile bit ADIE                @ ((unsigned)&PIE1*8)+6;
volatile bit C1IE                @ ((unsigned)&PIE1*8)+3;
volatile bit CCPIE               @ ((unsigned)&PIE1*8)+5;
volatile bit ECCPIE              @ ((unsigned)&PIE1*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	TMR1IE              : 1;
        unsigned	TMR2IE              : 1;
        unsigned	                    : 1;
        unsigned	CMIE                : 1;
        unsigned	: 1;
        unsigned	CCP1IE              : 1;
        unsigned	ADIE                : 1;
    };
    struct {
        unsigned	: 3;
        unsigned	C1IE                : 1;
        unsigned	: 1;
        unsigned	CCPIE               : 1;
    };
    struct {
        unsigned	: 5;
        unsigned	ECCPIE              : 1;
    };
} PIE1bits @ 0x08C;
#endif

// Register: PCON
volatile unsigned char           PCON                @ 0x08E;
// bit and bitfield definitions
volatile bit nBOR                @ ((unsigned)&PCON*8)+0;
volatile bit nPOR                @ ((unsigned)&PCON*8)+1;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	nBOR                : 1;
        unsigned	nPOR                : 1;
    };
} PCONbits @ 0x08E;
#endif

// Register: OSCTUNE
volatile unsigned char           OSCTUNE             @ 0x090;
// bit and bitfield definitions
volatile bit TUN0                @ ((unsigned)&OSCTUNE*8)+0;
volatile bit TUN1                @ ((unsigned)&OSCTUNE*8)+1;
volatile bit TUN2                @ ((unsigned)&OSCTUNE*8)+2;
volatile bit TUN3                @ ((unsigned)&OSCTUNE*8)+3;
volatile bit TUN4                @ ((unsigned)&OSCTUNE*8)+4;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	TUN                 : 5;
    };
    struct {
        unsigned	TUN0                : 1;
        unsigned	TUN1                : 1;
        unsigned	TUN2                : 1;
        unsigned	TUN3                : 1;
        unsigned	TUN4                : 1;
    };
} OSCTUNEbits @ 0x090;
#endif

// Register: PR2
volatile unsigned char           PR2                 @ 0x092;
// bit and bitfield definitions

// Register: APFCON
volatile unsigned char           APFCON              @ 0x093;
// bit and bitfield definitions
volatile bit P1ASEL              @ ((unsigned)&APFCON*8)+0;
volatile bit P1BSEL              @ ((unsigned)&APFCON*8)+1;
volatile bit T1GSEL              @ ((unsigned)&APFCON*8)+4;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	P1ASEL              : 1;
        unsigned	P1BSEL              : 1;
        unsigned	                    : 2;
        unsigned	T1GSEL              : 1;
    };
} APFCONbits @ 0x093;
#endif

// Register: WPU
volatile unsigned char           WPU                 @ 0x095;
volatile unsigned char           WPUA                @ 0x095;
// bit and bitfield definitions
volatile bit WPU0                @ ((unsigned)&WPU*8)+0;
volatile bit WPU1                @ ((unsigned)&WPU*8)+1;
volatile bit WPU2                @ ((unsigned)&WPU*8)+2;
volatile bit WPU4                @ ((unsigned)&WPU*8)+4;
volatile bit WPU5                @ ((unsigned)&WPU*8)+5;
volatile bit WPUA0               @ ((unsigned)&WPU*8)+0;
volatile bit WPUA1               @ ((unsigned)&WPU*8)+1;
volatile bit WPUA2               @ ((unsigned)&WPU*8)+2;
volatile bit WPUA4               @ ((unsigned)&WPU*8)+4;
volatile bit WPUA5               @ ((unsigned)&WPU*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	WPU0                : 1;
        unsigned	WPU1                : 1;
        unsigned	WPU2                : 1;
        unsigned	                    : 1;
        unsigned	WPU4                : 1;
        unsigned	WPU5                : 1;
    };
    struct {
        unsigned	WPUA0               : 1;
        unsigned	WPUA1               : 1;
        unsigned	WPUA2               : 1;
        unsigned	: 1;
        unsigned	WPUA4               : 1;
        unsigned	WPUA5               : 1;
    };
} WPUbits @ 0x095;
#endif

// Register: IOC
volatile unsigned char           IOC                 @ 0x096;
volatile unsigned char           IOCA                @ 0x096;
// bit and bitfield definitions
volatile bit IOC0                @ ((unsigned)&IOC*8)+0;
volatile bit IOC1                @ ((unsigned)&IOC*8)+1;
volatile bit IOC2                @ ((unsigned)&IOC*8)+2;
volatile bit IOC3                @ ((unsigned)&IOC*8)+3;
volatile bit IOC4                @ ((unsigned)&IOC*8)+4;
volatile bit IOC5                @ ((unsigned)&IOC*8)+5;
volatile bit IOCA0               @ ((unsigned)&IOC*8)+0;
volatile bit IOCA1               @ ((unsigned)&IOC*8)+1;
volatile bit IOCA2               @ ((unsigned)&IOC*8)+2;
volatile bit IOCA3               @ ((unsigned)&IOC*8)+3;
volatile bit IOCA4               @ ((unsigned)&IOC*8)+4;
volatile bit IOCA5               @ ((unsigned)&IOC*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	IOC0                : 1;
        unsigned	IOC1                : 1;
        unsigned	IOC2                : 1;
        unsigned	IOC3                : 1;
        unsigned	IOC4                : 1;
        unsigned	IOC5                : 1;
    };
    struct {
        unsigned	IOCA0               : 1;
        unsigned	IOCA1               : 1;
        unsigned	IOCA2               : 1;
        unsigned	IOCA3               : 1;
        unsigned	IOCA4               : 1;
        unsigned	IOCA5               : 1;
    };
} IOCbits @ 0x096;
#endif

// Register: PMCON1
volatile unsigned char           PMCON1              @ 0x098;
// bit and bitfield definitions
volatile bit RD                  @ ((unsigned)&PMCON1*8)+0;
volatile bit WR                  @ ((unsigned)&PMCON1*8)+1;
volatile bit WREN                @ ((unsigned)&PMCON1*8)+2;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	RD                  : 1;
        unsigned	WR                  : 1;
        unsigned	WREN                : 1;
    };
} PMCON1bits @ 0x098;
#endif

// Register: PMCON2
volatile unsigned char           PMCON2              @ 0x099;
// bit and bitfield definitions

// Register: PMADRL
volatile unsigned char           PMADRL              @ 0x09A;
// bit and bitfield definitions
volatile bit PMADRL0             @ ((unsigned)&PMADRL*8)+0;
volatile bit PMADRL1             @ ((unsigned)&PMADRL*8)+1;
volatile bit PMADRL2             @ ((unsigned)&PMADRL*8)+2;
volatile bit PMADRL3             @ ((unsigned)&PMADRL*8)+3;
volatile bit PMADRL4             @ ((unsigned)&PMADRL*8)+4;
volatile bit PMADRL5             @ ((unsigned)&PMADRL*8)+5;
volatile bit PMADRL6             @ ((unsigned)&PMADRL*8)+6;
volatile bit PMADRL7             @ ((unsigned)&PMADRL*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	PMADRL0             : 1;
        unsigned	PMADRL1             : 1;
        unsigned	PMADRL2             : 1;
        unsigned	PMADRL3             : 1;
        unsigned	PMADRL4             : 1;
        unsigned	PMADRL5             : 1;
        unsigned	PMADRL6             : 1;
        unsigned	PMADRL7             : 1;
    };
} PMADRLbits @ 0x09A;
#endif

// Register: PMADRH
volatile unsigned char           PMADRH              @ 0x09B;
// bit and bitfield definitions
volatile bit PMADRH0             @ ((unsigned)&PMADRH*8)+0;
volatile bit PMADRH1             @ ((unsigned)&PMADRH*8)+1;
volatile bit PMADRH2             @ ((unsigned)&PMADRH*8)+2;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	PMADRH0             : 1;
        unsigned	PMADRH1             : 1;
        unsigned	PMADRH2             : 1;
    };
} PMADRHbits @ 0x09B;
#endif

// Register: PMDATL
volatile unsigned char           PMDATL              @ 0x09C;
// bit and bitfield definitions
volatile bit PMDATL0             @ ((unsigned)&PMDATL*8)+0;
volatile bit PMDATL1             @ ((unsigned)&PMDATL*8)+1;
volatile bit PMDATL2             @ ((unsigned)&PMDATL*8)+2;
volatile bit PMDATL3             @ ((unsigned)&PMDATL*8)+3;
volatile bit PMDATL4             @ ((unsigned)&PMDATL*8)+4;
volatile bit PMDATL5             @ ((unsigned)&PMDATL*8)+5;
volatile bit PMDATL6             @ ((unsigned)&PMDATL*8)+6;
volatile bit PMDATL7             @ ((unsigned)&PMDATL*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	PMDATL0             : 1;
        unsigned	PMDATL1             : 1;
        unsigned	PMDATL2             : 1;
        unsigned	PMDATL3             : 1;
        unsigned	PMDATL4             : 1;
        unsigned	PMDATL5             : 1;
        unsigned	PMDATL6             : 1;
        unsigned	PMDATL7             : 1;
    };
} PMDATLbits @ 0x09C;
#endif

// Register: PMDATH
volatile unsigned char           PMDATH              @ 0x09D;
// bit and bitfield definitions
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	PMDATH              : 6;
    };
} PMDATHbits @ 0x09D;
#endif

// Register: ADRESL
volatile unsigned char           ADRESL              @ 0x09E;
// bit and bitfield definitions

// Register: ANSEL
volatile unsigned char           ANSEL               @ 0x09F;
// bit and bitfield definitions
volatile bit ANS0                @ ((unsigned)&ANSEL*8)+0;
volatile bit ANS1                @ ((unsigned)&ANSEL*8)+1;
volatile bit ANS2                @ ((unsigned)&ANSEL*8)+2;
volatile bit ANS3                @ ((unsigned)&ANSEL*8)+3;
volatile bit ADCS0               @ ((unsigned)&ANSEL*8)+4;
volatile bit ADCS1               @ ((unsigned)&ANSEL*8)+5;
volatile bit ADCS2               @ ((unsigned)&ANSEL*8)+6;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	ANS                 : 4;
        unsigned	ADCS                : 3;
    };
    struct {
        unsigned	ANS0                : 1;
        unsigned	ANS1                : 1;
        unsigned	ANS2                : 1;
        unsigned	ANS3                : 1;
        unsigned	ADCS0               : 1;
        unsigned	ADCS1               : 1;
        unsigned	ADCS2               : 1;
    };
} ANSELbits @ 0x09F;
#endif

#endif
