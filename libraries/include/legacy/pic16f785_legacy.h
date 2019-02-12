
#ifndef	_HTC_H_
#warning Header file pic16f785.h included directly. Use #include <htc.h> instead.
#endif


 /* header file for the MICROCHIP PIC microcontroller
	PIC16F785
	PIC16HV785
 */

#ifndef	__PIC16F785_H
#define	__PIC16F785_H

// Special function register definitions

volatile       unsigned char	INDF		@ 0x00;
volatile       unsigned char	TMR0		@ 0x01;
volatile       unsigned char	PCL		@ 0x02;
volatile       unsigned char	STATUS		@ 0x03;
volatile	unsigned char	FSR		@ 0x04;
volatile       unsigned char	PORTA		@ 0x05;
volatile       unsigned char	PORTB		@ 0x06;
volatile       unsigned char	PORTC		@ 0x07;
volatile       unsigned char	PCLATH		@ 0x0A;
volatile       unsigned char	INTCON		@ 0x0B;
volatile       unsigned char	PIR1		@ 0x0C;
volatile       unsigned char	TMR1L		@ 0x0E;
volatile       unsigned char	TMR1H		@ 0x0F;
volatile       unsigned char	T1CON		@ 0x10;
volatile       unsigned char	TMR2		@ 0x11;
volatile       unsigned char	T2CON		@ 0x12;
volatile       unsigned char	CCPR1L		@ 0x13;
volatile       unsigned char	CCPR1H		@ 0x14;
volatile       unsigned char	CCP1CON		@ 0x15;
volatile       unsigned char	WDTCON		@ 0x18;
volatile       unsigned char	ADRESH		@ 0x1E;
volatile       unsigned char	ADCON0		@ 0x1F;
volatile	unsigned char	OPTION		@ 0x81;
volatile       unsigned char	TRISA		@ 0x85;
volatile       unsigned char	TRISB		@ 0x86;
volatile       unsigned char	TRISC		@ 0x87;
volatile	unsigned char	PIE1		@ 0x8C;
volatile       unsigned char	PCON		@ 0x8E;
volatile       unsigned char	OSCCON		@ 0x8F;
volatile	unsigned char	OSCTUNE		@ 0x90;
volatile	unsigned char	ANSEL0		@ 0x91;
volatile	unsigned char	PR2		@ 0x92;
volatile	unsigned char	ANSEL1		@ 0x93;
volatile	unsigned char	WPUA		@ 0x95;
volatile	unsigned char	IOCA		@ 0x96;
volatile       unsigned char	REFCON		@ 0x98;
volatile	unsigned char	VRCON		@ 0x99;
volatile       unsigned char	EEDATA		@ 0x9A;
volatile       unsigned char	EEADR		@ 0x9B;
/* Alternate definition */
volatile       unsigned char	EEADRL		@ 0x9B;
volatile       unsigned char	EECON1		@ 0x9C;
volatile       unsigned char	EECON2		@ 0x9D;
volatile       unsigned char	ADRESL		@ 0x9E;
volatile	unsigned char	ADCON1		@ 0x9F;
volatile	unsigned char	PWMCON1		@ 0x110;
volatile	unsigned char	PWMCON0		@ 0x111;
volatile       unsigned char	PWMCLK		@ 0x112;
volatile	unsigned char	PWMPH1		@ 0x113;
volatile	unsigned char	PWMPH2		@ 0x114;
volatile       unsigned char	CM1CON0		@ 0x119;
volatile       unsigned char	CM2CON0		@ 0x11A;
volatile       unsigned char	CM2CON1		@ 0x11B;
volatile	unsigned char	OPA1CON		@ 0x11C;
volatile	unsigned char	OPA2CON		@ 0x11D;


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
volatile       bit	TMR2IF		@ ((unsigned)&PIR1*8)+1;
volatile       bit	OSFIF		@ ((unsigned)&PIR1*8)+2;
volatile       bit	C1IF		@ ((unsigned)&PIR1*8)+3;
volatile       bit	C2IF		@ ((unsigned)&PIR1*8)+4;
volatile       bit	CCP1IF		@ ((unsigned)&PIR1*8)+5;
volatile       bit	ADIF		@ ((unsigned)&PIR1*8)+6;
volatile       bit	EEIF		@ ((unsigned)&PIR1*8)+7;

/* Definitions for T1CON register */
volatile	bit	TMR1ON		@ ((unsigned)&T1CON*8)+0;
volatile	bit	TMR1CS		@ ((unsigned)&T1CON*8)+1;
volatile	bit	T1SYNC		@ ((unsigned)&T1CON*8)+2;
volatile	bit	T1OSCEN		@ ((unsigned)&T1CON*8)+3;
volatile	bit	T1CKPS0		@ ((unsigned)&T1CON*8)+4;
volatile	bit	T1CKPS1		@ ((unsigned)&T1CON*8)+5;
volatile	bit	TMR1GE		@ ((unsigned)&T1CON*8)+6;
volatile	bit	T1GINV		@ ((unsigned)&T1CON*8)+7;

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

/* Definitions for WDTCON register */
volatile	bit	SWDTEN		@ ((unsigned)&WDTCON*8)+0;
volatile	bit	WDTPS0		@ ((unsigned)&WDTCON*8)+1;
volatile	bit	WDTPS1		@ ((unsigned)&WDTCON*8)+2;
volatile	bit	WDTPS2		@ ((unsigned)&WDTCON*8)+3;
volatile	bit	WDTPS3		@ ((unsigned)&WDTCON*8)+4;

/* Definitions for ADCON0 register */
volatile	bit	ADON		@ ((unsigned)&ADCON0*8)+0;
volatile       bit	GODONE		@ ((unsigned)&ADCON0*8)+1;
volatile	bit	CHS0		@ ((unsigned)&ADCON0*8)+2;
volatile	bit	CHS1		@ ((unsigned)&ADCON0*8)+3;
volatile	bit	CHS2		@ ((unsigned)&ADCON0*8)+4;
volatile	bit	CHS3		@ ((unsigned)&ADCON0*8)+5;
volatile	bit	VCFG		@ ((unsigned)&ADCON0*8)+6;
volatile	bit	ADFM		@ ((unsigned)&ADCON0*8)+7;

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
volatile	bit	TMR2IE		@ ((unsigned)&PIE1*8)+1;
volatile	bit	OSFIE		@ ((unsigned)&PIE1*8)+2;
volatile	bit	C1IE		@ ((unsigned)&PIE1*8)+3;
volatile	bit	C2IE		@ ((unsigned)&PIE1*8)+4;
volatile	bit	CCP1IE		@ ((unsigned)&PIE1*8)+5;
volatile	bit	ADIE		@ ((unsigned)&PIE1*8)+6;
volatile	bit	EEIE		@ ((unsigned)&PIE1*8)+7;

/* Definitions for PCON register */
volatile       bit	BOR		@ ((unsigned)&PCON*8)+0;
volatile       bit	POR		@ ((unsigned)&PCON*8)+1;
volatile	bit	SBOREN		@ ((unsigned)&PCON*8)+4;

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

/* Definitions for ANSEL0 register */
volatile	bit	ANS0		@ ((unsigned)&ANSEL0*8)+0;
volatile	bit	ANS1		@ ((unsigned)&ANSEL0*8)+1;
volatile	bit	ANS2		@ ((unsigned)&ANSEL0*8)+2;
volatile	bit	ANS3		@ ((unsigned)&ANSEL0*8)+3;
volatile	bit	ANS4		@ ((unsigned)&ANSEL0*8)+4;
volatile	bit	ANS5		@ ((unsigned)&ANSEL0*8)+5;
volatile	bit	ANS6		@ ((unsigned)&ANSEL0*8)+6;
volatile	bit	ANS7		@ ((unsigned)&ANSEL0*8)+7;

/* Definitions for ANSEL1 register */
volatile	bit	ANS8		@ ((unsigned)&ANSEL1*8)+0;
volatile	bit	ANS9		@ ((unsigned)&ANSEL1*8)+1;
volatile	bit	ANS10		@ ((unsigned)&ANSEL1*8)+2;
volatile	bit	ANS11		@ ((unsigned)&ANSEL1*8)+3;

/* Definitions for WPUA register */
volatile	bit	WPUA0		@ ((unsigned)&WPUA*8)+0;
volatile	bit	WPUA1		@ ((unsigned)&WPUA*8)+1;
volatile	bit	WPUA2		@ ((unsigned)&WPUA*8)+2;
volatile	bit	WPUA3		@ ((unsigned)&WPUA*8)+3;
volatile	bit	WPUA4		@ ((unsigned)&WPUA*8)+4;
volatile	bit	WPUA5		@ ((unsigned)&WPUA*8)+5;

/* Definitions for IOCA register */
volatile	bit	IOCA0		@ ((unsigned)&IOCA*8)+0;
volatile	bit	IOCA1		@ ((unsigned)&IOCA*8)+1;
volatile	bit	IOCA2		@ ((unsigned)&IOCA*8)+2;
volatile	bit	IOCA3		@ ((unsigned)&IOCA*8)+3;
volatile	bit	IOCA4		@ ((unsigned)&IOCA*8)+4;
volatile	bit	IOCA5		@ ((unsigned)&IOCA*8)+5;

/* Definitions for REFCON register */
volatile	bit	CVROE		@ ((unsigned)&REFCON*8)+1;
volatile	bit	VROE		@ ((unsigned)&REFCON*8)+2;
volatile	bit	VREN		@ ((unsigned)&REFCON*8)+3;
volatile	bit	VRBB		@ ((unsigned)&REFCON*8)+4;
volatile       bit	BGST		@ ((unsigned)&REFCON*8)+5;

/* Definitions for VRCON register */
volatile	bit	VR0		@ ((unsigned)&VRCON*8)+0;
volatile	bit	VR1		@ ((unsigned)&VRCON*8)+1;
volatile	bit	VR2		@ ((unsigned)&VRCON*8)+2;
volatile	bit	VR3		@ ((unsigned)&VRCON*8)+3;
volatile	bit	VRR		@ ((unsigned)&VRCON*8)+5;
volatile	bit	C2VREN		@ ((unsigned)&VRCON*8)+6;
volatile	bit	C1VREN		@ ((unsigned)&VRCON*8)+7;

/* Definitions for EECON1 register */
volatile       bit	RD		@ ((unsigned)&EECON1*8)+0;
volatile       bit	WR		@ ((unsigned)&EECON1*8)+1;
volatile       bit	WREN		@ ((unsigned)&EECON1*8)+2;
volatile       bit	WRERR		@ ((unsigned)&EECON1*8)+3;

/* Definitions for ADCON1 register */
volatile	bit	ADCS0		@ ((unsigned)&ADCON1*8)+4;
volatile	bit	ADCS1		@ ((unsigned)&ADCON1*8)+5;
volatile	bit	ADCS2		@ ((unsigned)&ADCON1*8)+6;

/* Definitions for PWMCON1 register */
volatile	bit	CMDLY0		@ ((unsigned)&PWMCON1*8)+0;
volatile	bit	CMDLY1		@ ((unsigned)&PWMCON1*8)+1;
volatile	bit	CMDLY2		@ ((unsigned)&PWMCON1*8)+2;
volatile	bit	CMDLY3		@ ((unsigned)&PWMCON1*8)+3;
volatile	bit	CMDLY4		@ ((unsigned)&PWMCON1*8)+4;
volatile	bit	COMOD0		@ ((unsigned)&PWMCON1*8)+5;
volatile	bit	COMOD1		@ ((unsigned)&PWMCON1*8)+6;
volatile	bit	OVRLP		@ ((unsigned)&PWMCON1*8)+7;

/* Definitions for PWMCON0 register */
volatile	bit	PH1EN		@ ((unsigned)&PWMCON0*8)+0;
volatile	bit	PH2EN		@ ((unsigned)&PWMCON0*8)+1;
volatile	bit	SYNC0		@ ((unsigned)&PWMCON0*8)+2;
volatile	bit	SYNC1		@ ((unsigned)&PWMCON0*8)+3;
volatile	bit	BLANK1		@ ((unsigned)&PWMCON0*8)+4;
volatile	bit	BLANK2		@ ((unsigned)&PWMCON0*8)+5;
volatile	bit	PASEN		@ ((unsigned)&PWMCON0*8)+6;
volatile       bit	PRSEN		@ ((unsigned)&PWMCON0*8)+7;

/* Definitions for PWMCLK register */
volatile	bit	PER0		@ ((unsigned)&PWMCLK*8)+0;
volatile	bit	PER1		@ ((unsigned)&PWMCLK*8)+1;
volatile	bit	PER2		@ ((unsigned)&PWMCLK*8)+2;
volatile	bit	PER3		@ ((unsigned)&PWMCLK*8)+3;
volatile	bit	PER4		@ ((unsigned)&PWMCLK*8)+4;
volatile	bit	PWMP0		@ ((unsigned)&PWMCLK*8)+5;
volatile	bit	PWMP1		@ ((unsigned)&PWMCLK*8)+6;
volatile       bit	PWMASE		@ ((unsigned)&PWMCLK*8)+7;

/* Definitions for PWMPH1 register */
volatile	bit	PH01		@ ((unsigned)&PWMPH1*8)+0;
volatile	bit	PH11		@ ((unsigned)&PWMPH1*8)+1;
volatile	bit	PH21		@ ((unsigned)&PWMPH1*8)+2;
volatile	bit	PH31		@ ((unsigned)&PWMPH1*8)+3;
volatile	bit	PH41		@ ((unsigned)&PWMPH1*8)+4;
volatile	bit	C1EN1		@ ((unsigned)&PWMPH1*8)+5;
volatile	bit	C2EN1		@ ((unsigned)&PWMPH1*8)+6;
volatile	bit	POL1		@ ((unsigned)&PWMPH1*8)+7;

/* Definitions for PWMPH2 register */
volatile	bit	PH02		@ ((unsigned)&PWMPH2*8)+0;
volatile	bit	PH12		@ ((unsigned)&PWMPH2*8)+1;
volatile	bit	PH22		@ ((unsigned)&PWMPH2*8)+2;
volatile	bit	PH32		@ ((unsigned)&PWMPH2*8)+3;
volatile	bit	PH42		@ ((unsigned)&PWMPH2*8)+4;
volatile	bit	C1EN2		@ ((unsigned)&PWMPH2*8)+5;
volatile	bit	C2EN2		@ ((unsigned)&PWMPH2*8)+6;
volatile	bit	POL2		@ ((unsigned)&PWMPH2*8)+7;

/* Definitions for CM1CON0 register */
volatile	bit	C1CH0		@ ((unsigned)&CM1CON0*8)+0;
volatile	bit	C1CH1		@ ((unsigned)&CM1CON0*8)+1;
volatile	bit	C1R		@ ((unsigned)&CM1CON0*8)+2;
volatile	bit	C1SP		@ ((unsigned)&CM1CON0*8)+3;
volatile	bit	C1POL		@ ((unsigned)&CM1CON0*8)+4;
volatile	bit	C1OE		@ ((unsigned)&CM1CON0*8)+5;
volatile       bit	C1OUT		@ ((unsigned)&CM1CON0*8)+6;
volatile	bit	C1ON		@ ((unsigned)&CM1CON0*8)+7;

/* Definitions for CM2CON0 register */
volatile	bit	C2CH0		@ ((unsigned)&CM2CON0*8)+0;
volatile	bit	C2CH1		@ ((unsigned)&CM2CON0*8)+1;
volatile	bit	C2R		@ ((unsigned)&CM2CON0*8)+2;
volatile	bit	C2SP		@ ((unsigned)&CM2CON0*8)+3;
volatile	bit	C2POL		@ ((unsigned)&CM2CON0*8)+4;
volatile	bit	C2OE		@ ((unsigned)&CM2CON0*8)+5;
volatile       bit	C2OUT		@ ((unsigned)&CM2CON0*8)+6;
volatile	bit	C2ON		@ ((unsigned)&CM2CON0*8)+7;

/* Definitions for CM2CON1 register */
volatile	bit	C2SYNC		@ ((unsigned)&CM2CON1*8)+0;
volatile	bit	T1GSS		@ ((unsigned)&CM2CON1*8)+1;
volatile       bit	MC2OUT		@ ((unsigned)&CM2CON1*8)+6;
volatile       bit	MC1OUT		@ ((unsigned)&CM2CON1*8)+7;

/* Definitions for OPA1CON register */
volatile	bit	OPA1ON		@ ((unsigned)&OPA1CON*8)+7;

/* Definitions for OPA2CON register */
volatile	bit	OPA2ON		@ ((unsigned)&OPA2CON*8)+7;

#define CONFIG_ADDR	0x2007

#endif
