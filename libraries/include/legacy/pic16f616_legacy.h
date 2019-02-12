
#ifndef	_HTC_H_
#warning Header file pic16f616.h included directly. Use #include <htc.h> instead.
#endif

 /* header file for the MICROCHIP PIC microcontroller
	16F610
	16HV610
	16F616
	16HV616
 */

#ifndef	__PIC16F616_H
#define	__PIC16F616_H

// Special function register definitions

volatile       unsigned char	INDF		@ 0x000;
volatile       unsigned char	TMR0		@ 0x001;
volatile       unsigned char	PCL		@ 0x002;
volatile       unsigned char	STATUS		@ 0x003;
volatile	unsigned char	FSR		@ 0x004;
volatile       unsigned char	PORTA		@ 0x005;
volatile       unsigned char	PORTC		@ 0x007;
volatile       unsigned char	PCLATH		@ 0x00A;
volatile       unsigned char	INTCON		@ 0x00B;
volatile       unsigned char	PIR1		@ 0x00C;
volatile       unsigned char	TMR1L		@ 0x00E;
volatile       unsigned char	TMR1H		@ 0x00F;
volatile	unsigned char	T1CON		@ 0x010;
#if defined(_16F616) || defined(_16HV616)
volatile       unsigned char	TMR2		@ 0x011;
volatile	unsigned char	T2CON		@ 0x012;
volatile       unsigned char	CCPR1L		@ 0x013;
volatile       unsigned char	CCPR1H		@ 0x014;
volatile       unsigned char	CCP1CON		@ 0x015;
volatile       unsigned char	PWM1CON		@ 0x016;
volatile       unsigned char	ECCPAS		@ 0x017;
#endif
volatile	unsigned char	VRCON		@ 0x019;
volatile       unsigned char	CM1CON0		@ 0x01A;
volatile       unsigned char	CM2CON0		@ 0x01B;
volatile       unsigned char	CM2CON1		@ 0x01C;
#if defined(_16F616) || defined(_16HV616)
volatile       unsigned char	ADRESH		@ 0x01E;
volatile       unsigned char	ADCON0		@ 0x01F;
#endif
volatile	unsigned char	OPTION		@ 0x081;
volatile       unsigned char	TRISA		@ 0x085;
volatile       unsigned char	TRISC		@ 0x087;
volatile	unsigned char	PIE1		@ 0x08C;
volatile       unsigned char	PCON		@ 0x08E;
volatile	unsigned char	OSCTUNE		@ 0x090;
volatile	unsigned char	ANSEL		@ 0x091;
#if defined(_16F616) || defined(_16HV616)
volatile	unsigned char	PR2		@ 0x092;
#endif
volatile	unsigned char	WPUA		@ 0x095;
volatile	unsigned char	IOCA		@ 0x096;
volatile       unsigned char	SRCON0		@ 0x099;
volatile	unsigned char	SRCON1		@ 0x09A;
#if defined(_16F616) || defined(_16HV616)
volatile       unsigned char	ADRESL		@ 0x09E;
volatile	unsigned char	ADCON1		@ 0x09F;
#endif


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

/* Definitions for PORTC register */
volatile       bit	RC0		@ ((unsigned)&PORTC*8)+0;
volatile       bit	RC1		@ ((unsigned)&PORTC*8)+1;
volatile       bit	RC2		@ ((unsigned)&PORTC*8)+2;
volatile       bit	RC3		@ ((unsigned)&PORTC*8)+3;
volatile       bit	RC4		@ ((unsigned)&PORTC*8)+4;
volatile       bit	RC5		@ ((unsigned)&PORTC*8)+5;

/* Definitions for INTCON register */
volatile       bit	RAIF		@ ((unsigned)&INTCON*8)+0;
volatile       bit	INTF		@ ((unsigned)&INTCON*8)+1;
volatile       bit	T0IF		@ ((unsigned)&INTCON*8)+2;
volatile	bit	RAIE		@ ((unsigned)&INTCON*8)+3;
volatile	bit	INTE		@ ((unsigned)&INTCON*8)+4;
volatile	bit	T0IE		@ ((unsigned)&INTCON*8)+5;
volatile	bit	PEIE		@ ((unsigned)&INTCON*8)+6;
volatile bit	GIE		@ ((unsigned)&INTCON*8)+7;

/* Definitions for PIR1 register */
volatile       bit	TMR1IF		@ ((unsigned)&PIR1*8)+0;
#if defined(_16F616) || defined(_16HV616)
volatile       bit	TMR2IF		@ ((unsigned)&PIR1*8)+1;
#endif
volatile       bit	C1IF		@ ((unsigned)&PIR1*8)+3;
volatile       bit	C2IF		@ ((unsigned)&PIR1*8)+4;
#if defined(_16F616) || defined(_16HV616)
volatile       bit	CCP1IF		@ ((unsigned)&PIR1*8)+5;
volatile       bit	ADIF		@ ((unsigned)&PIR1*8)+6;
#endif

/* Definitions for T1CON register */
volatile	bit	TMR1ON		@ ((unsigned)&T1CON*8)+0;
volatile	bit	TMR1CS		@ ((unsigned)&T1CON*8)+1;
volatile	bit	T1SYNC		@ ((unsigned)&T1CON*8)+2;
volatile	bit	T1OSCEN		@ ((unsigned)&T1CON*8)+3;
volatile	bit	T1CKPS0		@ ((unsigned)&T1CON*8)+4;
volatile	bit	T1CKPS1		@ ((unsigned)&T1CON*8)+5;
volatile	bit	TMR1GE		@ ((unsigned)&T1CON*8)+6;
volatile	bit	T1GINV		@ ((unsigned)&T1CON*8)+7;

#if defined(_16F616) || defined(_16HV616)
/* Definitions for T2CON register */
volatile	bit	T2CKPS0		@ ((unsigned)&T2CON*8)+0;
volatile	bit	T2CKPS1		@ ((unsigned)&T2CON*8)+1;
volatile	bit	TMR2ON		@ ((unsigned)&T2CON*8)+2;
volatile	bit	TOUTPS0		@ ((unsigned)&T2CON*8)+3;
volatile	bit	TOUTPS1		@ ((unsigned)&T2CON*8)+4;
volatile	bit	TOUTPS2		@ ((unsigned)&T2CON*8)+5;
volatile	bit	TOUTPS3		@ ((unsigned)&T2CON*8)+6;

/* Definitions for CCP1CON register */
volatile	bit	CCP1M0		@ ((unsigned)&CCP1CON*8)+0;
volatile	bit	CCP1M1		@ ((unsigned)&CCP1CON*8)+1;
volatile	bit	CCP1M2		@ ((unsigned)&CCP1CON*8)+2;
volatile	bit	CCP1M3		@ ((unsigned)&CCP1CON*8)+3;
volatile	bit	DC1B0		@ ((unsigned)&CCP1CON*8)+4;
volatile	bit	DC1B1		@ ((unsigned)&CCP1CON*8)+5;
volatile	bit	P1M0		@ ((unsigned)&CCP1CON*8)+6;
volatile	bit	P1M1		@ ((unsigned)&CCP1CON*8)+7;

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
volatile	bit	C2HYS		@ ((unsigned)&CM2CON1*8)+2;
volatile	bit	C1HYS		@ ((unsigned)&CM2CON1*8)+3;
volatile	bit	T1ACS		@ ((unsigned)&CM2CON1*8)+4;
volatile       bit	MC2OUT		@ ((unsigned)&CM2CON1*8)+6;
volatile       bit	MC1OUT		@ ((unsigned)&CM2CON1*8)+7;

#if defined(_16F616) || defined(_16HV616)
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
volatile	bit	RAPU		@ ((unsigned)&OPTION*8)+7;

/* Definitions for TRISA register */
volatile	bit	TRISA0		@ ((unsigned)&TRISA*8)+0;
volatile	bit	TRISA1		@ ((unsigned)&TRISA*8)+1;
volatile	bit	TRISA2		@ ((unsigned)&TRISA*8)+2;
volatile	bit	TRISA3		@ ((unsigned)&TRISA*8)+3;
volatile	bit	TRISA4		@ ((unsigned)&TRISA*8)+4;
volatile	bit	TRISA5		@ ((unsigned)&TRISA*8)+5;

/* Definitions for TRISC register */
volatile       bit	TRISC0		@ ((unsigned)&TRISC*8)+0;
volatile       bit	TRISC1		@ ((unsigned)&TRISC*8)+1;
volatile       bit	TRISC2		@ ((unsigned)&TRISC*8)+2;
volatile       bit	TRISC3		@ ((unsigned)&TRISC*8)+3;
volatile       bit	TRISC4		@ ((unsigned)&TRISC*8)+4;
volatile       bit	TRISC5		@ ((unsigned)&TRISC*8)+5;

/* Definitions for PIE1 register */
volatile	bit	TMR1IE		@ ((unsigned)&PIE1*8)+0;
#if defined(_16F616) || defined(_16HV616)
volatile	bit	TMR2IE		@ ((unsigned)&PIE1*8)+1;
#endif
volatile	bit	C1IE		@ ((unsigned)&PIE1*8)+3;
volatile	bit	C2IE		@ ((unsigned)&PIE1*8)+4;
#if defined(_16F616) || defined(_16HV616)
volatile	bit	CCP1IE		@ ((unsigned)&PIE1*8)+5;
volatile	bit	ADIE		@ ((unsigned)&PIE1*8)+6;
#endif

/* Definitions for PCON register */
volatile       bit	BOR		@ ((unsigned)&PCON*8)+0;
volatile       bit	POR		@ ((unsigned)&PCON*8)+1;

/* Definitions for OSCTUNE register */
volatile	bit	TUN0		@ ((unsigned)&OSCTUNE*8)+0;
volatile	bit	TUN1		@ ((unsigned)&OSCTUNE*8)+1;
volatile	bit	TUN2		@ ((unsigned)&OSCTUNE*8)+2;
volatile	bit	TUN3		@ ((unsigned)&OSCTUNE*8)+3;
volatile	bit	TUN4		@ ((unsigned)&OSCTUNE*8)+4;

/* Definitions for ANSEL register */
volatile	bit	ANS0		@ ((unsigned)&ANSEL*8)+0;
volatile	bit	ANS1		@ ((unsigned)&ANSEL*8)+1;
volatile	bit	ANS2		@ ((unsigned)&ANSEL*8)+2;
volatile	bit	ANS3		@ ((unsigned)&ANSEL*8)+3;
volatile	bit	ANS4		@ ((unsigned)&ANSEL*8)+4;
volatile	bit	ANS5		@ ((unsigned)&ANSEL*8)+5;
volatile	bit	ANS6		@ ((unsigned)&ANSEL*8)+6;
volatile	bit	ANS7		@ ((unsigned)&ANSEL*8)+7;

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

/* Definitions for SRCON0 register */
volatile	bit	SRCLKEN		@ ((unsigned)&SRCON0*8)+0;
volatile       bit	PULSR		@ ((unsigned)&SRCON0*8)+2;
volatile       bit	PULSS		@ ((unsigned)&SRCON0*8)+3;
volatile	bit	C2REN		@ ((unsigned)&SRCON0*8)+4;
volatile	bit	C1SEN		@ ((unsigned)&SRCON0*8)+5;
volatile	bit	SR0		@ ((unsigned)&SRCON0*8)+6;
volatile	bit	SR1		@ ((unsigned)&SRCON0*8)+7;

/* Definitions for SRCON1 register */
volatile	bit	SRCS2		@ ((unsigned)&SRCON1*8)+6;
volatile	bit	SRCS1		@ ((unsigned)&SRCON1*8)+7;

#if defined(_16F616) || defined(_16HV616)
/* Definitions for ADCON1 register */
volatile	bit	ADCS0		@ ((unsigned)&ADCON1*8)+4;
volatile	bit	ADCS1		@ ((unsigned)&ADCON1*8)+5;
volatile	bit	ADCS2		@ ((unsigned)&ADCON1*8)+6;
#endif

#define CONFIG_ADDR	0x2007

#endif
