
#ifndef	_HTC_H_
#warning Header file pic16f685.h included directly. Use #include <htc.h> instead.
#endif


 /* header file for the MICROCHIP PIC microcontrollers
	PIC16F631
	PIC16F677
	PIC16F685
	PIC16F687
	PIC16F689
	PIC16F690
 */

#ifndef	__PIC16F685_H
#define	__PIC16F685_H

// Special function register definitions

volatile       unsigned char	INDF		@ 0x000;
volatile       unsigned char	TMR0		@ 0x001;
volatile       unsigned char	PCL		@ 0x002;
volatile       unsigned char	STATUS		@ 0x003;
volatile	unsigned char	FSR		@ 0x004;
volatile       unsigned char	PORTA		@ 0x005;
volatile       unsigned char	PORTB		@ 0x006;
volatile       unsigned char	PORTC		@ 0x007;
volatile       unsigned char	PCLATH		@ 0x00A;
volatile       unsigned char	INTCON		@ 0x00B;
volatile       unsigned char	PIR1		@ 0x00C;
volatile       unsigned char	PIR2		@ 0x00D;
volatile       unsigned char	TMR1L		@ 0x00E;
volatile       unsigned char	TMR1H		@ 0x00F;
volatile	unsigned char	T1CON		@ 0x010;
#if defined(_16F685) || defined(_16F690)
volatile       unsigned char	TMR2		@ 0x011;
volatile	unsigned char	T2CON		@ 0x012;
#endif
#if defined(_16F677) || defined(_16F687) || defined(_16F689) || defined(_16F690)
volatile       unsigned char	SSPBUF		@ 0x013;
volatile       unsigned char	SSPCON		@ 0x014;
#endif
#if defined(_16F685) || defined(_16F690)
volatile       unsigned char	CCPR1L		@ 0x015;
volatile       unsigned char	CCPR1H		@ 0x016;
volatile       unsigned char	CCP1CON		@ 0x017;
#endif
#if defined(_16F687) || defined(_16F689) || defined(_16F690)
volatile       unsigned char	RCSTA		@ 0x018;
volatile       unsigned char	TXREG		@ 0x019;
volatile       unsigned char	RCREG		@ 0x01A;
#endif
#if defined(_16F685) || defined(_16F690)
volatile       unsigned char	PWM1CON		@ 0x01C;
volatile       unsigned char	ECCPAS		@ 0x01D;
#endif
#if defined(_16F677) || defined(_16F685) || defined(_16F687) || defined(_16F689) || defined(_16F690)
volatile       unsigned char	ADRESH		@ 0x01E;
volatile       unsigned char	ADCON0		@ 0x01F;
#endif
volatile	unsigned char	OPTION		@ 0x081;
volatile       unsigned char	TRISA		@ 0x085;
volatile       unsigned char	TRISB		@ 0x086;
volatile       unsigned char	TRISC		@ 0x087;
volatile	unsigned char	PIE1		@ 0x08C;
volatile	unsigned char	PIE2		@ 0x08D;
volatile       unsigned char	PCON		@ 0x08E;
volatile       unsigned char	OSCCON		@ 0x08F;
volatile	unsigned char	OSCTUNE		@ 0x090;
#if defined(_16F685) || defined(_16F690)
volatile	unsigned char	PR2		@ 0x092;
#endif
#if defined(_16F677) || defined(_16F687) || defined(_16F689) || defined(_16F690)
volatile	unsigned char	SSPADD		@ 0x093;
// Alternate definition
volatile	unsigned char	SSPMSK		@ 0x093;
volatile       unsigned char	SSPSTAT		@ 0x094;
#endif
volatile	unsigned char	WPUA		@ 0x095;
volatile	unsigned char	IOCA		@ 0x096;
volatile       unsigned char	WDTCON		@ 0x097;
#if defined(_16F687) || defined(_16F689) || defined(_16F690)
volatile       unsigned char	TXSTA		@ 0x098;
volatile	unsigned char	SPBRG		@ 0x099;
volatile	unsigned char	SPBRGH		@ 0x09A;
volatile       unsigned char	BAUDCTL		@ 0x09B;
#endif
#if defined(_16F677) || defined(_16F685) || defined(_16F687) || defined(_16F689) || defined(_16F690)
volatile       unsigned char	ADRESL		@ 0x09E;
volatile	unsigned char	ADCON1		@ 0x09F;
#endif
volatile       unsigned char	EEDAT		@ 0x10C;
/* Alternate definition */
volatile       unsigned char	EEDATA		@ 0x10C;
/* Alternate definition */
volatile       unsigned char	EEDATL		@ 0x10C;
volatile       unsigned char	EEADR		@ 0x10D;
/* Alternate definition */
volatile       unsigned char	EEADRL		@ 0x10D;
#if defined(_16F685) || defined(_16F689) || defined(_16F690)
volatile       unsigned char	EEDATH		@ 0x10E;
volatile       unsigned char	EEADRH		@ 0x10F;
#endif
volatile	unsigned char	WPUB		@ 0x115;
volatile	unsigned char	IOCB		@ 0x116;
volatile	unsigned char	VRCON		@ 0x118;
volatile       unsigned char	CM1CON0		@ 0x119;
volatile       unsigned char	CM2CON0		@ 0x11A;
volatile       unsigned char	CM2CON1		@ 0x11B;
volatile	unsigned char	ANSEL		@ 0x11E;
#if defined(_16F677) || defined(_16F685) || defined(_16F687) || defined(_16F689) || defined(_16F690)
volatile	unsigned char	ANSELH		@ 0x11F;
#endif
volatile       unsigned char	EECON1		@ 0x18C;
volatile       unsigned char	EECON2		@ 0x18D;
#if defined(_16F685) || defined(_16F690)
volatile unsigned char	PSTRCON		@ 0x19D;
#endif
volatile       unsigned char	SRCON		@ 0x19E;


/* Definitions for STATUS register */
volatile       bit	CARRY		@ ((unsigned)&STATUS*8)+0;
volatile       bit	DC		@ ((unsigned)&STATUS*8)+1;
volatile       bit	ZERO		@ ((unsigned)&STATUS*8)+2;
volatile       bit	PD		@ ((unsigned)&STATUS*8)+3;
volatile       bit	TO		@ ((unsigned)&STATUS*8)+4;
volatile	bit	RP0		@ ((unsigned)&STATUS*8)+5;
volatile	bit	RP1		@ ((unsigned)&STATUS*8)+6;
volatile	bit	IRP		@ ((unsigned)&STATUS*8)+7;

/* Definitions for PORTA register */
volatile       bit	RA0		@ ((unsigned)&PORTA*8)+0;
volatile       bit	RA1		@ ((unsigned)&PORTA*8)+1;
volatile       bit	RA2		@ ((unsigned)&PORTA*8)+2;
volatile       bit	RA3		@ ((unsigned)&PORTA*8)+3;
volatile       bit	RA4		@ ((unsigned)&PORTA*8)+4;
volatile       bit	RA5		@ ((unsigned)&PORTA*8)+5;

/* Definitions for PORTB register */
volatile       bit	RB4		@ ((unsigned)&PORTB*8)+4;
volatile       bit	RB5		@ ((unsigned)&PORTB*8)+5;
volatile       bit	RB6		@ ((unsigned)&PORTB*8)+6;
volatile       bit	RB7		@ ((unsigned)&PORTB*8)+7;

/* Definitions for PORTC register */
volatile       bit	RC0		@ ((unsigned)&PORTC*8)+0;
volatile       bit	RC1		@ ((unsigned)&PORTC*8)+1;
volatile       bit	RC2		@ ((unsigned)&PORTC*8)+2;
volatile       bit	RC3		@ ((unsigned)&PORTC*8)+3;
volatile       bit	RC4		@ ((unsigned)&PORTC*8)+4;
volatile       bit	RC5		@ ((unsigned)&PORTC*8)+5;
volatile       bit	RC6		@ ((unsigned)&PORTC*8)+6;
volatile       bit	RC7		@ ((unsigned)&PORTC*8)+7;

/* Definitions for INTCON register */
volatile       bit	RABIF		@ ((unsigned)&INTCON*8)+0;
// Alternate definition for backward compatibility
volatile       bit	RBIF		@ ((unsigned)&INTCON*8)+0;
volatile       bit	INTF		@ ((unsigned)&INTCON*8)+1;
volatile       bit	T0IF		@ ((unsigned)&INTCON*8)+2;
volatile	bit	RABIE		@ ((unsigned)&INTCON*8)+3;
// Alternate definition for backward compatibility
volatile	bit	RBIE		@ ((unsigned)&INTCON*8)+3;
volatile	bit	INTE		@ ((unsigned)&INTCON*8)+4;
volatile	bit	T0IE		@ ((unsigned)&INTCON*8)+5;
volatile	bit	PEIE		@ ((unsigned)&INTCON*8)+6;
volatile bit	GIE		@ ((unsigned)&INTCON*8)+7;

/* Definitions for PIR1 register */
volatile       bit	TMR1IF		@ ((unsigned)&PIR1*8)+0;
#if defined(_16F685) || defined(_16F690)
volatile       bit	TMR2IF		@ ((unsigned)&PIR1*8)+1;
volatile       bit	CCP1IF		@ ((unsigned)&PIR1*8)+2;
#endif
#if defined(_16F677) || defined(_16F687) || defined(_16F689) || defined(_16F690)
volatile       bit	SSPIF		@ ((unsigned)&PIR1*8)+3;
#endif
#if defined(_16F687) || defined(_16F689) || defined(_16F690)
volatile       bit	TXIF		@ ((unsigned)&PIR1*8)+4;
volatile       bit	RCIF		@ ((unsigned)&PIR1*8)+5;
#endif
#if defined(_16F677) || defined(_16F685) || defined(_16F687) || defined(_16F689) || defined(_16F690)
volatile       bit	ADIF		@ ((unsigned)&PIR1*8)+6;
#endif

/* Definitions for PIR2 register */
volatile       bit	EEIF		@ ((unsigned)&PIR2*8)+4;
volatile       bit	C1IF		@ ((unsigned)&PIR2*8)+5;
volatile       bit	C2IF		@ ((unsigned)&PIR2*8)+6;
volatile       bit	OSFIF		@ ((unsigned)&PIR2*8)+7;

/* Definitions for T1CON register */
volatile	bit	TMR1ON		@ ((unsigned)&T1CON*8)+0;
volatile	bit	TMR1CS		@ ((unsigned)&T1CON*8)+1;
volatile	bit	T1SYNC		@ ((unsigned)&T1CON*8)+2;
volatile	bit	T1OSCEN		@ ((unsigned)&T1CON*8)+3;
volatile	bit	T1CKPS0		@ ((unsigned)&T1CON*8)+4;
volatile	bit	T1CKPS1		@ ((unsigned)&T1CON*8)+5;
volatile	bit	TMR1GE		@ ((unsigned)&T1CON*8)+6;
volatile	bit	T1GINV		@ ((unsigned)&T1CON*8)+7;

#if defined(_16F685) || defined(_16F690)
/* Definitions for T2CON register */
volatile	bit	T2CKPS0		@ ((unsigned)&T2CON*8)+0;
volatile	bit	T2CKPS1		@ ((unsigned)&T2CON*8)+1;
volatile	bit	TMR2ON		@ ((unsigned)&T2CON*8)+2;
volatile	bit	TOUTPS0		@ ((unsigned)&T2CON*8)+3;
volatile	bit	TOUTPS1		@ ((unsigned)&T2CON*8)+4;
volatile	bit	TOUTPS2		@ ((unsigned)&T2CON*8)+5;
volatile	bit	TOUTPS3		@ ((unsigned)&T2CON*8)+6;
#endif

#if defined(_16F677) || defined(_16F687) || defined(_16F689) || defined(_16F690)
/* Definitions for SSPCON register */
volatile	bit	SSPM0		@ ((unsigned)&SSPCON*8)+0;
volatile	bit	SSPM1		@ ((unsigned)&SSPCON*8)+1;
volatile	bit	SSPM2		@ ((unsigned)&SSPCON*8)+2;
volatile	bit	SSPM3		@ ((unsigned)&SSPCON*8)+3;
volatile	bit	CKP		@ ((unsigned)&SSPCON*8)+4;
volatile	bit	SSPEN		@ ((unsigned)&SSPCON*8)+5;
volatile       bit	SSPOV		@ ((unsigned)&SSPCON*8)+6;
volatile       bit	WCOL		@ ((unsigned)&SSPCON*8)+7;
#endif

#if defined(_16F685) || defined(_16F690)
/* Definitions for CCP1CON register */
volatile	bit	CCP1M0		@ ((unsigned)&CCP1CON*8)+0;
volatile	bit	CCP1M1		@ ((unsigned)&CCP1CON*8)+1;
volatile	bit	CCP1M2		@ ((unsigned)&CCP1CON*8)+2;
volatile	bit	CCP1M3		@ ((unsigned)&CCP1CON*8)+3;
volatile	bit	DC1B0		@ ((unsigned)&CCP1CON*8)+4;
volatile	bit	DC1B1		@ ((unsigned)&CCP1CON*8)+5;
volatile	bit	P1M0		@ ((unsigned)&CCP1CON*8)+6;
volatile	bit	P1M1		@ ((unsigned)&CCP1CON*8)+7;
#endif

#if defined(_16F687) || defined(_16F689) || defined(_16F690)
/* Definitions for RCSTA register */
volatile       bit	RX9D		@ ((unsigned)&RCSTA*8)+0;
volatile       bit	OERR		@ ((unsigned)&RCSTA*8)+1;
volatile       bit	FERR		@ ((unsigned)&RCSTA*8)+2;
volatile	bit	ADDEN		@ ((unsigned)&RCSTA*8)+3;
volatile	bit	CREN		@ ((unsigned)&RCSTA*8)+4;
volatile	bit	SREN		@ ((unsigned)&RCSTA*8)+5;
volatile	bit	RX9		@ ((unsigned)&RCSTA*8)+6;
volatile	bit	SPEN		@ ((unsigned)&RCSTA*8)+7;
#endif

#if defined(_16F685) || defined(_16F690)
/* Definitions for PWM1CON register */
volatile       bit	PDC0		@ ((unsigned)&PWM1CON*8)+0;
volatile       bit	PDC1		@ ((unsigned)&PWM1CON*8)+1;
volatile       bit	PDC2		@ ((unsigned)&PWM1CON*8)+2;
volatile       bit	PDC3		@ ((unsigned)&PWM1CON*8)+3;
volatile       bit	PDC4		@ ((unsigned)&PWM1CON*8)+4;
volatile       bit	PDC5		@ ((unsigned)&PWM1CON*8)+5;
volatile       bit	PDC6		@ ((unsigned)&PWM1CON*8)+6;
volatile       bit	PRSEN		@ ((unsigned)&PWM1CON*8)+7;

/* Definitions for ECCPAS register */
volatile	bit	PSSBD0		@ ((unsigned)&ECCPAS*8)+0;
volatile	bit	PSSBD1		@ ((unsigned)&ECCPAS*8)+1;
volatile	bit	PSSAC0		@ ((unsigned)&ECCPAS*8)+2;
volatile	bit	PSSAC1		@ ((unsigned)&ECCPAS*8)+3;
volatile	bit	ECCPAS0		@ ((unsigned)&ECCPAS*8)+4;
volatile	bit	ECCPAS1		@ ((unsigned)&ECCPAS*8)+5;
volatile	bit	ECCPAS2		@ ((unsigned)&ECCPAS*8)+6;
volatile       bit	ECCPASE		@ ((unsigned)&ECCPAS*8)+7;
#endif

#if defined(_16F677) || defined(_16F685) || defined(_16F687) || defined(_16F689) || defined(_16F690)
/* Definitions for ADCON0 register */
volatile	bit	ADON		@ ((unsigned)&ADCON0*8)+0;
volatile       bit	GODONE		@ ((unsigned)&ADCON0*8)+1;
volatile	bit	CHS0		@ ((unsigned)&ADCON0*8)+2;
volatile	bit	CHS1		@ ((unsigned)&ADCON0*8)+3;
volatile	bit	CHS2		@ ((unsigned)&ADCON0*8)+4;
volatile	bit	CHS3		@ ((unsigned)&ADCON0*8)+5;
volatile	bit	VCFG		@ ((unsigned)&ADCON0*8)+6;
volatile	bit	ADFM		@ ((unsigned)&ADCON0*8)+7;
#endif

/* Definitions for OPTION register */
volatile	bit	PS0		@ ((unsigned)&OPTION*8)+0;
volatile	bit	PS1		@ ((unsigned)&OPTION*8)+1;
volatile	bit	PS2		@ ((unsigned)&OPTION*8)+2;
volatile	bit	PSA		@ ((unsigned)&OPTION*8)+3;
volatile	bit	T0SE		@ ((unsigned)&OPTION*8)+4;
volatile	bit	T0CS		@ ((unsigned)&OPTION*8)+5;
volatile	bit	INTEDG		@ ((unsigned)&OPTION*8)+6;
volatile	bit	RABPU		@ ((unsigned)&OPTION*8)+7;
// Alternate definition for backward compatibility
volatile	bit	RBPU		@ ((unsigned)&OPTION*8)+7;

/* Definitions for TRISA register */
volatile	bit	TRISA0		@ ((unsigned)&TRISA*8)+0;
volatile	bit	TRISA1		@ ((unsigned)&TRISA*8)+1;
volatile	bit	TRISA2		@ ((unsigned)&TRISA*8)+2;
volatile	bit	TRISA3		@ ((unsigned)&TRISA*8)+3;
volatile	bit	TRISA4		@ ((unsigned)&TRISA*8)+4;
volatile	bit	TRISA5		@ ((unsigned)&TRISA*8)+5;

/* Definitions for TRISB register */
volatile       bit	TRISB4		@ ((unsigned)&TRISB*8)+4;
volatile       bit	TRISB5		@ ((unsigned)&TRISB*8)+5;
volatile       bit	TRISB6		@ ((unsigned)&TRISB*8)+6;
volatile       bit	TRISB7		@ ((unsigned)&TRISB*8)+7;

/* Definitions for TRISC register */
volatile       bit	TRISC0		@ ((unsigned)&TRISC*8)+0;
volatile       bit	TRISC1		@ ((unsigned)&TRISC*8)+1;
volatile       bit	TRISC2		@ ((unsigned)&TRISC*8)+2;
volatile       bit	TRISC3		@ ((unsigned)&TRISC*8)+3;
volatile       bit	TRISC4		@ ((unsigned)&TRISC*8)+4;
volatile       bit	TRISC5		@ ((unsigned)&TRISC*8)+5;
volatile       bit	TRISC6		@ ((unsigned)&TRISC*8)+6;
volatile       bit	TRISC7		@ ((unsigned)&TRISC*8)+7;

/* Definitions for PIE1 register */
volatile	bit	TMR1IE		@ ((unsigned)&PIE1*8)+0;
#if defined(_16F685) || defined(_16F690)
volatile	bit	TMR2IE		@ ((unsigned)&PIE1*8)+1;
volatile	bit	CCP1IE		@ ((unsigned)&PIE1*8)+2;
#endif
#if defined(_16F677) || defined(_16F687) || defined(_16F689) || defined(_16F690)
volatile	bit	SSPIE		@ ((unsigned)&PIE1*8)+3;
#endif
#if defined(_16F687) || defined(_16F689) || defined(_16F690)
volatile	bit	TXIE		@ ((unsigned)&PIE1*8)+4;
volatile	bit	RCIE		@ ((unsigned)&PIE1*8)+5;
#endif
#if defined(_16F677) || defined(_16F685) || defined(_16F687) || defined(_16F689) || defined(_16F690)
volatile	bit	ADIE		@ ((unsigned)&PIE1*8)+6;
#endif

/* Definitions for PIE2 register */
volatile	bit	EEIE		@ ((unsigned)&PIE2*8)+4;
volatile	bit	C1IE		@ ((unsigned)&PIE2*8)+5;
volatile	bit	C2IE		@ ((unsigned)&PIE2*8)+6;
volatile	bit	OSFIE		@ ((unsigned)&PIE2*8)+7;

/* Definitions for PCON register */
volatile       bit	BOR		@ ((unsigned)&PCON*8)+0;
volatile       bit	POR		@ ((unsigned)&PCON*8)+1;
volatile	bit	SBOREN		@ ((unsigned)&PCON*8)+4;
volatile	bit	ULPWUE		@ ((unsigned)&PCON*8)+5;

/* Definitions for OSCCON register */
volatile	bit	SCS		@ ((unsigned)&OSCCON*8)+0;
volatile       bit	LTS		@ ((unsigned)&OSCCON*8)+1;
volatile       bit	HTS		@ ((unsigned)&OSCCON*8)+2;
volatile       bit	OSTS		@ ((unsigned)&OSCCON*8)+3;
volatile	bit	IRCF0		@ ((unsigned)&OSCCON*8)+4;
volatile	bit	IRCF1		@ ((unsigned)&OSCCON*8)+5;
volatile	bit	IRCF2		@ ((unsigned)&OSCCON*8)+6;

/* Definitions for OSCTUNE register */
volatile	bit	TUN0		@ ((unsigned)&OSCTUNE*8)+0;
volatile	bit	TUN1		@ ((unsigned)&OSCTUNE*8)+1;
volatile	bit	TUN2		@ ((unsigned)&OSCTUNE*8)+2;
volatile	bit	TUN3		@ ((unsigned)&OSCTUNE*8)+3;
volatile	bit	TUN4		@ ((unsigned)&OSCTUNE*8)+4;

#if defined(_16F677) || defined(_16F687) || defined(_16F689) || defined(_16F690)
/* Definitions for SSPSTAT register */
volatile       bit	BF		@ ((unsigned)&SSPSTAT*8)+0;
volatile       bit	UA		@ ((unsigned)&SSPSTAT*8)+1;
volatile       bit	RW		@ ((unsigned)&SSPSTAT*8)+2;
volatile       bit	START		@ ((unsigned)&SSPSTAT*8)+3;
volatile       bit	STOP		@ ((unsigned)&SSPSTAT*8)+4;
volatile       bit	DA		@ ((unsigned)&SSPSTAT*8)+5;
volatile	bit	CKE		@ ((unsigned)&SSPSTAT*8)+6;
volatile	bit	SMP		@ ((unsigned)&SSPSTAT*8)+7;
#endif

/* Definitions for WPUA register */
volatile	bit	WPUA0		@ ((unsigned)&WPUA*8)+0;
volatile	bit	WPUA1		@ ((unsigned)&WPUA*8)+1;
volatile	bit	WPUA2		@ ((unsigned)&WPUA*8)+2;
volatile	bit	WPUA4		@ ((unsigned)&WPUA*8)+4;
volatile	bit	WPUA5		@ ((unsigned)&WPUA*8)+5;

/* Definitions for IOCA register */
volatile	bit	IOCA0		@ ((unsigned)&IOCA*8)+0;
volatile	bit	IOCA1		@ ((unsigned)&IOCA*8)+1;
volatile	bit	IOCA2		@ ((unsigned)&IOCA*8)+2;
volatile	bit	IOCA3		@ ((unsigned)&IOCA*8)+3;
volatile	bit	IOCA4		@ ((unsigned)&IOCA*8)+4;
volatile	bit	IOCA5		@ ((unsigned)&IOCA*8)+5;

/* Definitions for WDTCON register */
volatile	bit	SWDTEN		@ ((unsigned)&WDTCON*8)+0;
volatile	bit	WDTPS0		@ ((unsigned)&WDTCON*8)+1;
volatile	bit	WDTPS1		@ ((unsigned)&WDTCON*8)+2;
volatile	bit	WDTPS2		@ ((unsigned)&WDTCON*8)+3;
volatile	bit	WDTPS3		@ ((unsigned)&WDTCON*8)+4;

#if defined(_16F687) || defined(_16F689) || defined(_16F690)
/* Definitions for TXSTA register */
volatile       bit	TX9D		@ ((unsigned)&TXSTA*8)+0;
volatile       bit	TRMT		@ ((unsigned)&TXSTA*8)+1;
volatile	bit	BRGH		@ ((unsigned)&TXSTA*8)+2;
volatile	bit	SENDB		@ ((unsigned)&TXSTA*8)+3;
volatile	bit	SYNC		@ ((unsigned)&TXSTA*8)+4;
volatile	bit	TXEN		@ ((unsigned)&TXSTA*8)+5;
volatile	bit	TX9		@ ((unsigned)&TXSTA*8)+6;
volatile	bit	CSRC		@ ((unsigned)&TXSTA*8)+7;

/* Definitions for SPBRG register */
volatile	bit	BRG0		@ ((unsigned)&SPBRG*8)+0;
volatile	bit	BRG1		@ ((unsigned)&SPBRG*8)+1;
volatile	bit	BRG2		@ ((unsigned)&SPBRG*8)+2;
volatile	bit	BRG3		@ ((unsigned)&SPBRG*8)+3;
volatile	bit	BRG4		@ ((unsigned)&SPBRG*8)+4;
volatile	bit	BRG5		@ ((unsigned)&SPBRG*8)+5;
volatile	bit	BRG6		@ ((unsigned)&SPBRG*8)+6;
volatile	bit	BRG7		@ ((unsigned)&SPBRG*8)+7;

/* Definitions for SPBRGH register */
volatile	bit	BRG8		@ ((unsigned)&SPBRGH*8)+0;
volatile	bit	BRG9		@ ((unsigned)&SPBRGH*8)+1;
volatile	bit	BRG10		@ ((unsigned)&SPBRGH*8)+2;
volatile	bit	BRG11		@ ((unsigned)&SPBRGH*8)+3;
volatile	bit	BRG12		@ ((unsigned)&SPBRGH*8)+4;
volatile	bit	BRG13		@ ((unsigned)&SPBRGH*8)+5;
volatile	bit	BRG14		@ ((unsigned)&SPBRGH*8)+6;
volatile	bit	BRG15		@ ((unsigned)&SPBRGH*8)+7;

/* Definitions for BAUDCTL register */
volatile       bit	ABDEN		@ ((unsigned)&BAUDCTL*8)+0;
volatile       bit	WUE		@ ((unsigned)&BAUDCTL*8)+1;
volatile	bit	BRG16		@ ((unsigned)&BAUDCTL*8)+3;
volatile       bit	SCKP		@ ((unsigned)&BAUDCTL*8)+4;
volatile       bit	RCIDL		@ ((unsigned)&BAUDCTL*8)+6;
volatile       bit	ABDOVF		@ ((unsigned)&BAUDCTL*8)+7;
#endif

#if defined(_16F677) || defined(_16F685) || defined(_16F687) || defined(_16F689) || defined(_16F690)
/* Definitions for ADCON1 register */
volatile	bit	ADCS0		@ ((unsigned)&ADCON1*8)+4;
volatile	bit	ADCS1		@ ((unsigned)&ADCON1*8)+5;
volatile	bit	ADCS2		@ ((unsigned)&ADCON1*8)+6;
#endif

/* Definitions for WPUB register */
volatile	bit	WPUB4		@ ((unsigned)&WPUB*8)+4;
volatile	bit	WPUB5		@ ((unsigned)&WPUB*8)+5;
volatile	bit	WPUB6		@ ((unsigned)&WPUB*8)+6;
volatile	bit	WPUB7		@ ((unsigned)&WPUB*8)+7;

/* Definitions for IOCB register */
volatile	bit	IOCB4		@ ((unsigned)&IOCB*8)+4;
volatile	bit	IOCB5		@ ((unsigned)&IOCB*8)+5;
volatile	bit	IOCB6		@ ((unsigned)&IOCB*8)+6;
volatile	bit	IOCB7		@ ((unsigned)&IOCB*8)+7;

/* Definitions for VRCON register */
volatile	bit	VR0		@ ((unsigned)&VRCON*8)+0;
volatile	bit	VR1		@ ((unsigned)&VRCON*8)+1;
volatile	bit	VR2		@ ((unsigned)&VRCON*8)+2;
volatile	bit	VR3		@ ((unsigned)&VRCON*8)+3;
volatile	bit	VP6EN		@ ((unsigned)&VRCON*8)+4;
volatile	bit	VRR		@ ((unsigned)&VRCON*8)+5;
volatile	bit	C2VREN		@ ((unsigned)&VRCON*8)+6;
volatile	bit	C1VREN		@ ((unsigned)&VRCON*8)+7;

/* Definitions for CM1CON0 register */
volatile	bit	C1CH0		@ ((unsigned)&CM1CON0*8)+0;
volatile	bit	C1CH1		@ ((unsigned)&CM1CON0*8)+1;
volatile	bit	C1R		@ ((unsigned)&CM1CON0*8)+2;
volatile	bit	C1POL		@ ((unsigned)&CM1CON0*8)+4;
volatile	bit	C1OE		@ ((unsigned)&CM1CON0*8)+5;
volatile       bit	C1OUT		@ ((unsigned)&CM1CON0*8)+6;
volatile	bit	C1ON		@ ((unsigned)&CM1CON0*8)+7;

/* Definitions for CM2CON0 register */
volatile	bit	C2CH0		@ ((unsigned)&CM2CON0*8)+0;
volatile	bit	C2CH1		@ ((unsigned)&CM2CON0*8)+1;
volatile	bit	C2R		@ ((unsigned)&CM2CON0*8)+2;
volatile	bit	C2POL		@ ((unsigned)&CM2CON0*8)+4;
volatile	bit	C2OE		@ ((unsigned)&CM2CON0*8)+5;
volatile       bit	C2OUT		@ ((unsigned)&CM2CON0*8)+6;
volatile	bit	C2ON		@ ((unsigned)&CM2CON0*8)+7;

/* Definitions for CM2CON1 register */
volatile	bit	C2SYNC		@ ((unsigned)&CM2CON1*8)+0;
volatile	bit	T1GSS		@ ((unsigned)&CM2CON1*8)+1;
volatile       bit	MC2OUT		@ ((unsigned)&CM2CON1*8)+6;
volatile       bit	MC1OUT		@ ((unsigned)&CM2CON1*8)+7;

/* Definitions for ANSEL register */
volatile	bit	ANS0		@ ((unsigned)&ANSEL*8)+0;
volatile	bit	ANS1		@ ((unsigned)&ANSEL*8)+1;
volatile	bit	ANS2		@ ((unsigned)&ANSEL*8)+2;
volatile	bit	ANS3		@ ((unsigned)&ANSEL*8)+3;
volatile	bit	ANS4		@ ((unsigned)&ANSEL*8)+4;
volatile	bit	ANS5		@ ((unsigned)&ANSEL*8)+5;
volatile	bit	ANS6		@ ((unsigned)&ANSEL*8)+6;
volatile	bit	ANS7		@ ((unsigned)&ANSEL*8)+7;

#if defined(_16F677) || defined(_16F685) || defined(_16F687) || defined(_16F689) || defined(_16F690)
/* Definitions for ANSELH register */
volatile	bit	ANS8		@ ((unsigned)&ANSELH*8)+0;
volatile	bit	ANS9		@ ((unsigned)&ANSELH*8)+1;
volatile	bit	ANS10		@ ((unsigned)&ANSELH*8)+2;
volatile	bit	ANS11		@ ((unsigned)&ANSELH*8)+3;
#endif

/* Definitions for EECON1 register */
volatile       bit	RD		@ ((unsigned)&EECON1*8)+0;
volatile       bit	WR		@ ((unsigned)&EECON1*8)+1;
volatile       bit	WREN		@ ((unsigned)&EECON1*8)+2;
volatile       bit	WRERR		@ ((unsigned)&EECON1*8)+3;
#if defined(_16F685) || defined(_16F690)
volatile       bit	EEPGD		@ ((unsigned)&EECON1*8)+7;

/* Definitions for PSTRCON register */
volatile bit	STRA		@ ((unsigned)&PSTRCON*8)+0;
volatile bit	STRB		@ ((unsigned)&PSTRCON*8)+1;
volatile bit	STRC		@ ((unsigned)&PSTRCON*8)+2;
volatile bit	STRD		@ ((unsigned)&PSTRCON*8)+3;
volatile bit	STRSYNC		@ ((unsigned)&PSTRCON*8)+4;
#endif

/* Definitions for SRCON register */
volatile       bit	PULSR		@ ((unsigned)&SRCON*8)+2;
volatile       bit	PULSS		@ ((unsigned)&SRCON*8)+3;
volatile	bit	C2REN		@ ((unsigned)&SRCON*8)+4;
volatile	bit	C1SEN		@ ((unsigned)&SRCON*8)+5;
volatile	bit	SR0		@ ((unsigned)&SRCON*8)+6;
volatile	bit	SR1		@ ((unsigned)&SRCON*8)+7;

#define CONFIG_ADDR	0x2007

#endif
