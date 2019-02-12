#ifndef	_HTC_H_
#warning Header file pic16f721.h included directly. Use #include <htc.h> instead.
#endif

 /* header file for the MICROCHIP PIC microcontroller
    16F721
 */

#ifndef __PIC16F721_H
#define __PIC16F721_H

// Config Register: CONFIG
#define CONFIG               0x2007 

// Config Register: CONFIG2
#define CONFIG2              0x2009 

//
// Special function register definitions: Bank 0
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
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned C                   : 1;
        volatile unsigned DC                  : 1;
        volatile unsigned Z                   : 1;
        volatile unsigned nPD                 : 1;
        volatile unsigned nTO                 : 1;
        volatile unsigned RP                  : 2;
        volatile unsigned IRP                 : 1;
    };
} STATUSbits @ 0x003;
#endif

// Register: FSR
volatile unsigned char           FSR                 @ 0x004;
// bit and bitfield definitions

// Register: PORTA
volatile unsigned char           PORTA               @ 0x005;
// bit and bitfield definitions
volatile bit RA0                 @ ((unsigned)&PORTA*8)+0;
volatile bit RA1                 @ ((unsigned)&PORTA*8)+1;
volatile bit RA2                 @ ((unsigned)&PORTA*8)+2;
volatile bit RA3                 @ ((unsigned)&PORTA*8)+3;
volatile bit RA4                 @ ((unsigned)&PORTA*8)+4;
volatile bit RA5                 @ ((unsigned)&PORTA*8)+5;
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned RA0                 : 1;
        volatile unsigned RA1                 : 1;
        volatile unsigned RA2                 : 1;
        volatile unsigned RA3                 : 1;
        volatile unsigned RA4                 : 1;
        volatile unsigned RA5                 : 1;
        volatile unsigned                     : 1;
        volatile unsigned : 1;
    };
} PORTAbits @ 0x005;
#endif

// Register: PORTB
volatile unsigned char           PORTB               @ 0x006;
// bit and bitfield definitions
volatile bit RB4                 @ ((unsigned)&PORTB*8)+4;
volatile bit RB5                 @ ((unsigned)&PORTB*8)+5;
volatile bit RB6                 @ ((unsigned)&PORTB*8)+6;
volatile bit RB7                 @ ((unsigned)&PORTB*8)+7;
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned                     : 1;
        volatile unsigned : 1;
        volatile unsigned : 1;
        volatile unsigned : 1;
        volatile unsigned RB4                 : 1;
        volatile unsigned RB5                 : 1;
        volatile unsigned RB6                 : 1;
        volatile unsigned RB7                 : 1;
    };
} PORTBbits @ 0x006;
#endif

// Register: PORTC
volatile unsigned char           PORTC               @ 0x007;
// bit and bitfield definitions
volatile bit RC0                 @ ((unsigned)&PORTC*8)+0;
volatile bit RC1                 @ ((unsigned)&PORTC*8)+1;
volatile bit RC2                 @ ((unsigned)&PORTC*8)+2;
volatile bit RC3                 @ ((unsigned)&PORTC*8)+3;
volatile bit RC4                 @ ((unsigned)&PORTC*8)+4;
volatile bit RC5                 @ ((unsigned)&PORTC*8)+5;
volatile bit RC6                 @ ((unsigned)&PORTC*8)+6;
volatile bit RC7                 @ ((unsigned)&PORTC*8)+7;
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned RC0                 : 1;
        volatile unsigned RC1                 : 1;
        volatile unsigned RC2                 : 1;
        volatile unsigned RC3                 : 1;
        volatile unsigned RC4                 : 1;
        volatile unsigned RC5                 : 1;
        volatile unsigned RC6                 : 1;
        volatile unsigned RC7                 : 1;
    };
} PORTCbits @ 0x007;
#endif

// Register: PCLATH
volatile unsigned char           PCLATH              @ 0x00A;
// bit and bitfield definitions
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned PCLATH              : 5;
    };
} PCLATHbits @ 0x00A;
#endif

// Register: INTCON
volatile unsigned char           INTCON              @ 0x00B;
// bit and bitfield definitions
volatile bit RABIF               @ ((unsigned)&INTCON*8)+0;
volatile bit INTF                @ ((unsigned)&INTCON*8)+1;
volatile bit TMR0IF              @ ((unsigned)&INTCON*8)+2;
volatile bit RABIE               @ ((unsigned)&INTCON*8)+3;
volatile bit INTE                @ ((unsigned)&INTCON*8)+4;
volatile bit TMR0IE              @ ((unsigned)&INTCON*8)+5;
volatile bit PEIE                @ ((unsigned)&INTCON*8)+6;
volatile bit GIE                 @ ((unsigned)&INTCON*8)+7;
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned RABIF               : 1;
        volatile unsigned INTF                : 1;
        volatile unsigned TMR0IF              : 1;
        volatile unsigned RABIE               : 1;
        volatile unsigned INTE                : 1;
        volatile unsigned TMR0IE              : 1;
        volatile unsigned PEIE                : 1;
        volatile unsigned GIE                 : 1;
    };
} INTCONbits @ 0x00B;
#endif

// Register: PIR1
volatile unsigned char           PIR1                @ 0x00C;
// bit and bitfield definitions
//volatile bit TMR1IF             @ ((unsigned)&PIR1*8)+0;
//volatile bit TMR2IF             @ ((unsigned)&PIR1*8)+1;
//volatile bit CCP1IF             @ ((unsigned)&PIR1*8)+2;
//volatile bit SSPIF              @ ((unsigned)&PIR1*8)+3;
volatile bit TXIF                @ ((unsigned)&PIR1*8)+4;
volatile bit RCIF                @ ((unsigned)&PIR1*8)+5;
//volatile bit ADIF               @ ((unsigned)&PIR1*8)+6;
volatile bit TMR1GIF             @ ((unsigned)&PIR1*8)+7;
////volatile bit TMR1IF             @ ((unsigned)&PIR1*8)+0;
////volatile bit TMR2IF             @ ((unsigned)&PIR1*8)+1;
////volatile bit CCP1IF             @ ((unsigned)&PIR1*8)+2;
////volatile bit SSPIF              @ ((unsigned)&PIR1*8)+3;
////volatile bit ADIF               @ ((unsigned)&PIR1*8)+6;
volatile bit PSPIF               @ ((unsigned)&PIR1*8)+7;
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned TMR1IF              : 1;
        volatile unsigned TMR2IF              : 1;
        volatile unsigned CCP1IF              : 1;
        volatile unsigned SSPIF               : 1;
        volatile unsigned TXIF                : 1;
        volatile unsigned RCIF                : 1;
        volatile unsigned ADIF                : 1;
        volatile unsigned TMR1GIF             : 1;
    };
    struct {
        volatile unsigned : 1;
        volatile unsigned : 1;
        volatile unsigned : 1;
        volatile unsigned : 1;
        volatile unsigned                     : 2;
        volatile unsigned : 1;
        volatile unsigned PSPIF               : 1;
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
volatile bit T1SYNC              @ ((unsigned)&T1CON*8)+2;
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned TMR1ON              : 1;
        volatile unsigned                     : 1;
        volatile unsigned T1SYNC              : 1;
        volatile unsigned : 1;
        volatile unsigned T1CKPS              : 2;
        volatile unsigned TMR1CS              : 2;
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
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned T2CKPS              : 2;
        volatile unsigned TMR2ON              : 1;
        volatile unsigned TOUTPS              : 4;
    };
} T2CONbits @ 0x012;
#endif

// Register: SSPBUF
volatile unsigned char           SSPBUF              @ 0x013;
// bit and bitfield definitions

// Register: SSPCON
volatile unsigned char           SSPCON              @ 0x014;
// bit and bitfield definitions
volatile bit CKP                 @ ((unsigned)&SSPCON*8)+4;
volatile bit SSPEN               @ ((unsigned)&SSPCON*8)+5;
volatile bit SSPOV               @ ((unsigned)&SSPCON*8)+6;
volatile bit WCOL                @ ((unsigned)&SSPCON*8)+7;
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned SSPM                : 4;
        volatile unsigned CKP                 : 1;
        volatile unsigned SSPEN               : 1;
        volatile unsigned SSPOV               : 1;
        volatile unsigned WCOL                : 1;
    };
} SSPCONbits @ 0x014;
#endif
// bit and bitfield definitions

// Register: CCPR1L
volatile unsigned char           CCPR1L              @ 0x015;
// bit and bitfield definitions

// Register: CCPR1H
volatile unsigned char           CCPR1H              @ 0x016;
// bit and bitfield definitions

// Register: CCPR1
volatile unsigned int            CCPR1               @ 0x015;

// Register: CCP1CON
volatile unsigned char           CCP1CON             @ 0x017;
// bit and bitfield definitions
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned CCP1M               : 4;
        volatile unsigned DC1B                : 2;
        volatile unsigned                     : 2;
    };
} CCP1CONbits @ 0x017;
#endif

// Register: RCSTA
volatile unsigned char           RCSTA               @ 0x018;
// bit and bitfield definitions
volatile bit RX9D                @ ((unsigned)&RCSTA*8)+0;
volatile bit OERR                @ ((unsigned)&RCSTA*8)+1;
volatile bit FERR                @ ((unsigned)&RCSTA*8)+2;
volatile bit ADDEN               @ ((unsigned)&RCSTA*8)+3;
volatile bit CREN                @ ((unsigned)&RCSTA*8)+4;
volatile bit SREN                @ ((unsigned)&RCSTA*8)+5;
volatile bit RX9                 @ ((unsigned)&RCSTA*8)+6;
volatile bit SPEN                @ ((unsigned)&RCSTA*8)+7;
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned RX9D                : 1;
        volatile unsigned OERR                : 1;
        volatile unsigned FERR                : 1;
        volatile unsigned ADDEN               : 1;
        volatile unsigned CREN                : 1;
        volatile unsigned SREN                : 1;
        volatile unsigned RX9                 : 1;
        volatile unsigned SPEN                : 1;
    };
} RCSTAbits @ 0x018;
#endif

// Register: TXREG
volatile unsigned char           TXREG               @ 0x019;
// bit and bitfield definitions

// Register: RCREG
volatile unsigned char           RCREG               @ 0x01A;
// bit and bitfield definitions

// Register: ADRES
volatile unsigned char           ADRES               @ 0x01E;
// bit and bitfield definitions

// Register: ADCON0
volatile unsigned char           ADCON0              @ 0x01F;
// bit and bitfield definitions
//volatile bit ADON               @ ((unsigned)&ADCON0*8)+0;
//volatile bit GO_nDONE           @ ((unsigned)&ADCON0*8)+1;
////volatile bit ADON               @ ((unsigned)&ADCON0*8)+0;
////volatile bit GO_nDONE           @ ((unsigned)&ADCON0*8)+1;
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned ADON                : 1;
        volatile unsigned GO_nDONE            : 1;
        volatile unsigned CHS                 : 4;
    };
    struct {
        volatile unsigned : 1;
        volatile unsigned : 1;
        volatile unsigned : 4;
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
volatile bit nRABPU              @ ((unsigned)&OPTION_REG*8)+7;
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned PS                  : 3;
        volatile unsigned PSA                 : 1;
        volatile unsigned T0SE                : 1;
        volatile unsigned T0CS                : 1;
        volatile unsigned INTEDG              : 1;
        volatile unsigned nRABPU              : 1;
    };
} OPTION_REGbits @ 0x081;
#endif

// Register: TRISA
volatile unsigned char           TRISA               @ 0x085;
// bit and bitfield definitions
volatile bit TRISA0              @ ((unsigned)&TRISA*8)+0;
volatile bit TRISA1              @ ((unsigned)&TRISA*8)+1;
volatile bit TRISA2              @ ((unsigned)&TRISA*8)+2;
volatile bit TRISA4              @ ((unsigned)&TRISA*8)+4;
volatile bit TRISA5              @ ((unsigned)&TRISA*8)+5;
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned TRISA0              : 1;
        volatile unsigned TRISA1              : 1;
        volatile unsigned TRISA2              : 1;
        volatile unsigned                     : 1;
        volatile unsigned TRISA4              : 1;
        volatile unsigned TRISA5              : 1;
        volatile unsigned : 1;
        volatile unsigned : 1;
    };
} TRISAbits @ 0x085;
#endif

// Register: TRISB
volatile unsigned char           TRISB               @ 0x086;
// bit and bitfield definitions
volatile bit TRISB4              @ ((unsigned)&TRISB*8)+4;
volatile bit TRISB5              @ ((unsigned)&TRISB*8)+5;
volatile bit TRISB6              @ ((unsigned)&TRISB*8)+6;
volatile bit TRISB7              @ ((unsigned)&TRISB*8)+7;
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned                     : 1;
        volatile unsigned : 1;
        volatile unsigned : 1;
        volatile unsigned : 1;
        volatile unsigned TRISB4              : 1;
        volatile unsigned TRISB5              : 1;
        volatile unsigned TRISB6              : 1;
        volatile unsigned TRISB7              : 1;
    };
} TRISBbits @ 0x086;
#endif

// Register: TRISC
volatile unsigned char           TRISC               @ 0x087;
// bit and bitfield definitions
volatile bit TRISC0              @ ((unsigned)&TRISC*8)+0;
volatile bit TRISC1              @ ((unsigned)&TRISC*8)+1;
volatile bit TRISC2              @ ((unsigned)&TRISC*8)+2;
volatile bit TRISC3              @ ((unsigned)&TRISC*8)+3;
volatile bit TRISC4              @ ((unsigned)&TRISC*8)+4;
volatile bit TRISC5              @ ((unsigned)&TRISC*8)+5;
volatile bit TRISC6              @ ((unsigned)&TRISC*8)+6;
volatile bit TRISC7              @ ((unsigned)&TRISC*8)+7;
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned TRISC0              : 1;
        volatile unsigned TRISC1              : 1;
        volatile unsigned TRISC2              : 1;
        volatile unsigned TRISC3              : 1;
        volatile unsigned TRISC4              : 1;
        volatile unsigned TRISC5              : 1;
        volatile unsigned TRISC6              : 1;
        volatile unsigned TRISC7              : 1;
    };
} TRISCbits @ 0x087;
#endif

// Register: PIE1
volatile unsigned char           PIE1                @ 0x08C;
// bit and bitfield definitions
volatile bit TMR1IE              @ ((unsigned)&PIE1*8)+0;
volatile bit TMR2IE              @ ((unsigned)&PIE1*8)+1;
volatile bit CCP1IE              @ ((unsigned)&PIE1*8)+2;
volatile bit SSPIE               @ ((unsigned)&PIE1*8)+3;
volatile bit TXIE                @ ((unsigned)&PIE1*8)+4;
volatile bit RCIE                @ ((unsigned)&PIE1*8)+5;
volatile bit ADIE                @ ((unsigned)&PIE1*8)+6;
volatile bit TMR1GIE             @ ((unsigned)&PIE1*8)+7;
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned TMR1IE              : 1;
        volatile unsigned TMR2IE              : 1;
        volatile unsigned CCP1IE              : 1;
        volatile unsigned SSPIE               : 1;
        volatile unsigned TXIE                : 1;
        volatile unsigned RCIE                : 1;
        volatile unsigned ADIE                : 1;
        volatile unsigned TMR1GIE             : 1;
    };
} PIE1bits @ 0x08C;
#endif

// Register: PCON
volatile unsigned char           PCON                @ 0x08E;
// bit and bitfield definitions
volatile bit nBOR                @ ((unsigned)&PCON*8)+0;
volatile bit nPOR                @ ((unsigned)&PCON*8)+1;
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned nBOR                : 1;
        volatile unsigned nPOR                : 1;
    };
} PCONbits @ 0x08E;
#endif

// Register: T1GCON
volatile unsigned char           T1GCON              @ 0x08F;
// bit and bitfield definitions
volatile bit T1GVAL              @ ((unsigned)&T1GCON*8)+2;
volatile bit T1GGO_DONE          @ ((unsigned)&T1GCON*8)+3;
volatile bit T1GSPM              @ ((unsigned)&T1GCON*8)+4;
volatile bit T1GTM               @ ((unsigned)&T1GCON*8)+5;
volatile bit T1GPOL              @ ((unsigned)&T1GCON*8)+6;
volatile bit TMR1GE              @ ((unsigned)&T1GCON*8)+7;
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned T1GSS               : 2;
        volatile unsigned T1GVAL              : 1;
        volatile unsigned T1GGO_DONE          : 1;
        volatile unsigned T1GSPM              : 1;
        volatile unsigned T1GTM               : 1;
        volatile unsigned T1GPOL              : 1;
        volatile unsigned TMR1GE              : 1;
    };
} T1GCONbits @ 0x08F;
#endif

// Register: OSCCON
volatile unsigned char           OSCCON              @ 0x090;
// bit and bitfield definitions
volatile bit ICSS                @ ((unsigned)&OSCCON*8)+2;
volatile bit ICSL                @ ((unsigned)&OSCCON*8)+3;
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned                     : 2;
        volatile unsigned ICSS                : 1;
        volatile unsigned ICSL                : 1;
        volatile unsigned IRCF                : 2;
    };
} OSCCONbits @ 0x090;
#endif

// Register: OSCTUNE
volatile unsigned char           OSCTUNE             @ 0x091;
// bit and bitfield definitions
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned TUN                 : 6;
    };
} OSCTUNEbits @ 0x091;
#endif

// Register: PR2
volatile unsigned char           PR2                 @ 0x092;
// bit and bitfield definitions

// Register: SSPADD
volatile unsigned char           SSPADD              @ 0x093;
// bit and bitfield definitions

// Register: SSPMSK
volatile unsigned char           SSPMSK              @ 0x093;	// shared address with SSPADD
// bit and bitfield definitions
volatile bit MSK0                @ ((unsigned)&SSPMSK*8)+0;
volatile bit MSK1                @ ((unsigned)&SSPMSK*8)+1;
volatile bit MSK2                @ ((unsigned)&SSPMSK*8)+2;
volatile bit MSK3                @ ((unsigned)&SSPMSK*8)+3;
volatile bit MSK4                @ ((unsigned)&SSPMSK*8)+4;
volatile bit MSK5                @ ((unsigned)&SSPMSK*8)+5;
volatile bit MSK6                @ ((unsigned)&SSPMSK*8)+6;
volatile bit MSK7                @ ((unsigned)&SSPMSK*8)+7;
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned MSK0                : 1;
        volatile unsigned MSK1                : 1;
        volatile unsigned MSK2                : 1;
        volatile unsigned MSK3                : 1;
        volatile unsigned MSK4                : 1;
        volatile unsigned MSK5                : 1;
        volatile unsigned MSK6                : 1;
        volatile unsigned MSK7                : 1;
    };
} SSPMSKbits @ 0x093;
#endif

// Register: SSPSTAT
volatile unsigned char           SSPSTAT             @ 0x094;
// bit and bitfield definitions
//volatile bit BF                 @ ((unsigned)&SSPSTAT*8)+0;
//volatile bit UA                 @ ((unsigned)&SSPSTAT*8)+1;
//volatile bit R_nW               @ ((unsigned)&SSPSTAT*8)+2;
//volatile bit S                  @ ((unsigned)&SSPSTAT*8)+3;
//volatile bit P                  @ ((unsigned)&SSPSTAT*8)+4;
//volatile bit D_nA               @ ((unsigned)&SSPSTAT*8)+5;
//volatile bit CKE                @ ((unsigned)&SSPSTAT*8)+6;
//volatile bit SMP                @ ((unsigned)&SSPSTAT*8)+7;
////volatile bit BF                 @ ((unsigned)&SSPSTAT*8)+0;
////volatile bit UA                 @ ((unsigned)&SSPSTAT*8)+1;
////volatile bit R_nW               @ ((unsigned)&SSPSTAT*8)+2;
////volatile bit S                  @ ((unsigned)&SSPSTAT*8)+3;
////volatile bit P                  @ ((unsigned)&SSPSTAT*8)+4;
////volatile bit D_nA               @ ((unsigned)&SSPSTAT*8)+5;
////volatile bit CKE                @ ((unsigned)&SSPSTAT*8)+6;
////volatile bit SMP                @ ((unsigned)&SSPSTAT*8)+7;
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned BF                  : 1;
        volatile unsigned UA                  : 1;
        volatile unsigned R_nW                : 1;
        volatile unsigned S                   : 1;
        volatile unsigned P                   : 1;
        volatile unsigned D_nA                : 1;
        volatile unsigned CKE                 : 1;
        volatile unsigned SMP                 : 1;
    };
    struct {
        volatile unsigned : 1;
        volatile unsigned : 1;
        volatile unsigned : 1;
        volatile unsigned : 1;
        volatile unsigned : 1;
        volatile unsigned : 1;
        volatile unsigned : 1;
        volatile unsigned : 1;
    };
} SSPSTATbits @ 0x094;
#endif

// Register: WPUA
volatile unsigned char           WPUA                @ 0x095;
// bit and bitfield definitions
volatile bit WPUA0               @ ((unsigned)&WPUA*8)+0;
volatile bit WPUA1               @ ((unsigned)&WPUA*8)+1;
volatile bit WPUA2               @ ((unsigned)&WPUA*8)+2;
volatile bit WPUA3               @ ((unsigned)&WPUA*8)+3;
volatile bit WPUA4               @ ((unsigned)&WPUA*8)+4;
volatile bit WPUA5               @ ((unsigned)&WPUA*8)+5;
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned WPUA0               : 1;
        volatile unsigned WPUA1               : 1;
        volatile unsigned WPUA2               : 1;
        volatile unsigned WPUA3               : 1;
        volatile unsigned WPUA4               : 1;
        volatile unsigned WPUA5               : 1;
        volatile unsigned                     : 2;
    };
} WPUAbits @ 0x095;
#endif

// Register: IOCA
volatile unsigned char           IOCA                @ 0x096;
// bit and bitfield definitions
volatile bit IOCA0               @ ((unsigned)&IOCA*8)+0;
volatile bit IOCA1               @ ((unsigned)&IOCA*8)+1;
volatile bit IOCA2               @ ((unsigned)&IOCA*8)+2;
volatile bit IOCA3               @ ((unsigned)&IOCA*8)+3;
volatile bit IOCA4               @ ((unsigned)&IOCA*8)+4;
volatile bit IOCA5               @ ((unsigned)&IOCA*8)+5;
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned IOCA0               : 1;
        volatile unsigned IOCA1               : 1;
        volatile unsigned IOCA2               : 1;
        volatile unsigned IOCA3               : 1;
        volatile unsigned IOCA4               : 1;
        volatile unsigned IOCA5               : 1;
        volatile unsigned                     : 2;
    };
} IOCAbits @ 0x096;
#endif

// Register: TXSTA
volatile unsigned char           TXSTA               @ 0x098;
// bit and bitfield definitions
volatile bit TX9D                @ ((unsigned)&TXSTA*8)+0;
volatile bit TRMT                @ ((unsigned)&TXSTA*8)+1;
volatile bit BRGH                @ ((unsigned)&TXSTA*8)+2;
volatile bit SYNC                @ ((unsigned)&TXSTA*8)+4;
volatile bit TXEN                @ ((unsigned)&TXSTA*8)+5;
volatile bit TX9                 @ ((unsigned)&TXSTA*8)+6;
volatile bit CSRC                @ ((unsigned)&TXSTA*8)+7;
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned TX9D                : 1;
        volatile unsigned TRMT                : 1;
        volatile unsigned BRGH                : 1;
        volatile unsigned                     : 1;
        volatile unsigned SYNC                : 1;
        volatile unsigned TXEN                : 1;
        volatile unsigned TX9                 : 1;
        volatile unsigned CSRC                : 1;
    };
} TXSTAbits @ 0x098;
#endif

// Register: SPBRG
volatile unsigned char           SPBRG               @ 0x099;
// bit and bitfield definitions

// Register: FVRCON
volatile unsigned char           FVRCON              @ 0x09D;
// bit and bitfield definitions
volatile bit ADFVR0              @ ((unsigned)&FVRCON*8)+0;
volatile bit ADFVR1              @ ((unsigned)&FVRCON*8)+1;
volatile bit TSRNG               @ ((unsigned)&FVRCON*8)+4;
volatile bit TSEN                @ ((unsigned)&FVRCON*8)+5;
volatile bit FVREN               @ ((unsigned)&FVRCON*8)+6;
volatile bit FVRST               @ ((unsigned)&FVRCON*8)+7;
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned ADFVR0              : 1;
        volatile unsigned ADFVR1              : 1;
        volatile unsigned                     : 2;
        volatile unsigned TSRNG               : 1;
        volatile unsigned TSEN                : 1;
        volatile unsigned FVREN               : 1;
        volatile unsigned FVRST               : 1;
    };
} FVRCONbits @ 0x09D;
#endif

// Register: ADCON1
volatile unsigned char           ADCON1              @ 0x09F;
// bit and bitfield definitions
volatile bit ADCS0               @ ((unsigned)&ADCON1*8)+4;
volatile bit ADCS1               @ ((unsigned)&ADCON1*8)+5;
volatile bit ADCS2               @ ((unsigned)&ADCON1*8)+6;
volatile bit ADFM                @ ((unsigned)&ADCON1*8)+7;
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned ADREF               : 2;
        volatile unsigned                     : 2;
        volatile unsigned ADCS0               : 1;
        volatile unsigned ADCS1               : 1;
        volatile unsigned ADCS2               : 1;
        volatile unsigned ADFM                : 1;
    };
} ADCON1bits @ 0x09F;
#endif

//
// Special function register definitions: Bank 2
//

// Register: PMDATL
volatile unsigned char           PMDATL              @ 0x10C;
// bit and bitfield definitions

// Register: PMADRL
volatile unsigned char           PMADRL              @ 0x10D;
// bit and bitfield definitions

// Register: PMDATH
volatile unsigned char           PMDATH              @ 0x10E;
// bit and bitfield definitions
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned PMDATH              : 6;
    };
} PMDATHbits @ 0x10E;
#endif

// Register: PMADRH
volatile unsigned char           PMADRH              @ 0x10F;
// bit and bitfield definitions
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned PMADRH              : 5;
    };
} PMADRHbits @ 0x10F;
#endif

// Register: WPUB
volatile unsigned char           WPUB                @ 0x115;
// bit and bitfield definitions

// Register: IOCB
volatile unsigned char           IOCB                @ 0x116;
// bit and bitfield definitions

//
// Special function register definitions: Bank 3
//

// Register: ANSELA
volatile unsigned char           ANSELA              @ 0x185;
// bit and bitfield definitions
volatile bit ANSA0               @ ((unsigned)&ANSELA*8)+0;
volatile bit ANSA1               @ ((unsigned)&ANSELA*8)+1;
volatile bit ANSA2               @ ((unsigned)&ANSELA*8)+2;
volatile bit ANSA4               @ ((unsigned)&ANSELA*8)+4;
volatile bit ANSA5               @ ((unsigned)&ANSELA*8)+5;
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned ANSA0               : 1;
        volatile unsigned ANSA1               : 1;
        volatile unsigned ANSA2               : 1;
        volatile unsigned                     : 1;
        volatile unsigned ANSA4               : 1;
        volatile unsigned ANSA5               : 1;
    };
} ANSELAbits @ 0x185;
#endif

// Register: ANSELB
volatile unsigned char           ANSELB              @ 0x186;
// bit and bitfield definitions
volatile bit ANSB4               @ ((unsigned)&ANSELB*8)+4;
volatile bit ANSB5               @ ((unsigned)&ANSELB*8)+5;
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned                     : 4;
        volatile unsigned ANSB4               : 1;
        volatile unsigned ANSB5               : 1;
    };
} ANSELBbits @ 0x186;
#endif

// Register: ANSELC
volatile unsigned char           ANSELC              @ 0x187;
// bit and bitfield definitions
volatile bit ANSC0               @ ((unsigned)&ANSELC*8)+0;
volatile bit ANSC1               @ ((unsigned)&ANSELC*8)+1;
volatile bit ANSC2               @ ((unsigned)&ANSELC*8)+2;
volatile bit ANSC3               @ ((unsigned)&ANSELC*8)+3;
volatile bit ANSC6               @ ((unsigned)&ANSELC*8)+6;
volatile bit ANSC7               @ ((unsigned)&ANSELC*8)+7;
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned ANSC0               : 1;
        volatile unsigned ANSC1               : 1;
        volatile unsigned ANSC2               : 1;
        volatile unsigned ANSC3               : 1;
        volatile unsigned                     : 2;
        volatile unsigned ANSC6               : 1;
        volatile unsigned ANSC7               : 1;
    };
} ANSELCbits @ 0x187;
#endif

// Register: ICDIO
volatile unsigned char           ICDIO               @ 0x189;
// bit and bitfield definitions

// Register: PMCON1
volatile unsigned char           PMCON1              @ 0x18C;
// bit and bitfield definitions
volatile bit RD                  @ ((unsigned)&PMCON1*8)+0;
volatile bit WR                  @ ((unsigned)&PMCON1*8)+1;
volatile bit WREN                @ ((unsigned)&PMCON1*8)+2;
volatile bit WRERR               @ ((unsigned)&PMCON1*8)+3;
volatile bit FREE                @ ((unsigned)&PMCON1*8)+4;
volatile bit LWLO                @ ((unsigned)&PMCON1*8)+5;
volatile bit CFGS                @ ((unsigned)&PMCON1*8)+6;
volatile bit EEPGD               @ ((unsigned)&PMCON1*8)+7;
#ifndef _LIB_BUILD
union {
    struct {
        volatile unsigned RD                  : 1;
        volatile unsigned WR                  : 1;
        volatile unsigned WREN                : 1;
        volatile unsigned WRERR               : 1;
        volatile unsigned FREE                : 1;
        volatile unsigned LWLO                : 1;
        volatile unsigned CFGS                : 1;
        volatile unsigned EEPGD               : 1;
    };
} PMCON1bits @ 0x18C;
#endif

// Register: PMCON2
volatile unsigned char           PMCON2              @ 0x18D;
// bit and bitfield definitions

// Register: ICKBUG
volatile unsigned char           ICKBUG              @ 0x18E;
// bit and bitfield definitions

// Register: BIGBUG
volatile unsigned char           BIGBUG              @ 0x18F;
// bit and bitfield definitions

#endif
