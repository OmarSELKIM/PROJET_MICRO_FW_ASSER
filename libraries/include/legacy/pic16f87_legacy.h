
#ifndef	_HTC_H_
#warning Header file pic16f87.h included directly. Use #include <htc.h> instead.
#endif

 /* header file for the MICROCHIP PIC microcontrollers
	PIC16F87
	PIC16F88
 */

#ifndef	__PIC16F87_H
#define	__PIC16F87_H

// Special function register definitions

volatile       unsigned char	INDF		@ 0x00;
volatile       unsigned char	TMR0		@ 0x01;
volatile       unsigned char	PCL		@ 0x02;
volatile       unsigned char	STATUS		@ 0x03;
volatile	unsigned char	FSR		@ 0x04;
volatile       unsigned char	PORTA		@ 0x05;
volatile       unsigned char	PORTB		@ 0x06;
volatile       unsigned char	PCLATH		@ 0x0A;
volatile       unsigned char	INTCON		@ 0x0B;
volatile       unsigned char	PIR1		@ 0x0C;
volatile       unsigned char	PIR2		@ 0x0D;
volatile       unsigned char	TMR1L		@ 0x0E;
volatile       unsigned char	TMR1H		@ 0x0F;
volatile       unsigned char	T1CON		@ 0x10;
volatile       unsigned char	TMR2		@ 0x11;
volatile       unsigned char	T2CON		@ 0x12;
volatile       unsigned char	SSPBUF		@ 0x13;
volatile       unsigned char	SSPCON		@ 0x14;
volatile       unsigned char	CCPR1L		@ 0x15;
volatile       unsigned char	CCPR1H		@ 0x16;
volatile       unsigned char	CCP1CON		@ 0x17;
volatile       unsigned char	RCSTA		@ 0x18;
volatile       unsigned char	TXREG		@ 0x19;
volatile       unsigned char	RCREG		@ 0x1A;
#if defined(_16F88)
volatile       unsigned char	ADRESH		@ 0x1E;
volatile       unsigned char	ADCON0		@ 0x1F;
#endif
volatile	unsigned char	OPTION		@ 0x81;
volatile       unsigned char	TRISA		@ 0x85;
volatile       unsigned char	TRISB		@ 0x86;
volatile	unsigned char	PIE1		@ 0x8C;
volatile	unsigned char	PIE2		@ 0x8D;
volatile       unsigned char	PCON		@ 0x8E;
volatile       unsigned char	OSCCON		@ 0x8F;
volatile       unsigned char	OSCTUNE		@ 0x90;
volatile       unsigned char	PR2			@ 0x92;
volatile       unsigned char	SSPADD		@ 0x93;
volatile       unsigned char	SSPSTAT		@ 0x94;
volatile       unsigned char	TXSTA		@ 0x98;
volatile	unsigned char	SPBRG		@ 0x99;
#if defined(_16F88)
volatile	unsigned char	ANSEL		@ 0x9B;
#endif
volatile       unsigned char	CMCON		@ 0x9C;
volatile       unsigned char	CVRCON		@ 0x9D;
#if defined(_16F88)
volatile       unsigned char	ADRESL		@ 0x9E;
volatile       unsigned char	ADCON1		@ 0x9F;
#endif
volatile       unsigned char	WDTCON		@ 0x105;
volatile       unsigned char	EEDATA		@ 0x10C;
// Alternate definition
volatile       unsigned char	EEDAT		@ 0x10C;
volatile       unsigned char	EEADR		@ 0x10D;
// Alternate definition
volatile       unsigned char	EEADRL		@ 0x10D;
volatile       unsigned char	EEDATH		@ 0x10E;
volatile       unsigned char	EEADRH		@ 0x10F;
volatile       unsigned char	EECON1		@ 0x18C;
volatile       unsigned char	EECON2		@ 0x18D;


/* Definitions for STATUS register */
volatile       bit	CARRY		@ ((unsigned)&STATUS*8)+0;
volatile       bit	DC		@ ((unsigned)&STATUS*8)+1;
volatile       bit	ZERO		@ ((unsigned)&STATUS*8)+2;
volatile       bit	PD		@ ((unsigned)&STATUS*8)+3;
volatile       bit	TO		@ ((unsigned)&STATUS*8)+4;
volatile       bit	RP0		@ ((unsigned)&STATUS*8)+5;
volatile       bit	RP1		@ ((unsigned)&STATUS*8)+6;
volatile       bit	IRP		@ ((unsigned)&STATUS*8)+7;

/* Definitions for PORTA register */
volatile       bit	RA0		@ ((unsigned)&PORTA*8)+0;
volatile       bit	RA1		@ ((unsigned)&PORTA*8)+1;
volatile       bit	RA2		@ ((unsigned)&PORTA*8)+2;
volatile       bit	RA3		@ ((unsigned)&PORTA*8)+3;
volatile       bit	RA4		@ ((unsigned)&PORTA*8)+4;
volatile       bit	RA5		@ ((unsigned)&PORTA*8)+5;
volatile       bit	RA6		@ ((unsigned)&PORTA*8)+6;
volatile       bit	RA7		@ ((unsigned)&PORTA*8)+7;

/* Definitions for PORTB register */
volatile       bit	RB0		@ ((unsigned)&PORTB*8)+0;
volatile       bit	RB1		@ ((unsigned)&PORTB*8)+1;
volatile       bit	RB2		@ ((unsigned)&PORTB*8)+2;
volatile       bit	RB3		@ ((unsigned)&PORTB*8)+3;
volatile       bit	RB4		@ ((unsigned)&PORTB*8)+4;
volatile       bit	RB5		@ ((unsigned)&PORTB*8)+5;
volatile       bit	RB6		@ ((unsigned)&PORTB*8)+6;
volatile       bit	RB7		@ ((unsigned)&PORTB*8)+7;

/* Definitions for INTCON register */
volatile       bit	RBIF		@ ((unsigned)&INTCON*8)+0;
volatile       bit	INT0IF		@ ((unsigned)&INTCON*8)+1;
volatile       bit	TMR0IF		@ ((unsigned)&INTCON*8)+2;
volatile       bit	RBIE		@ ((unsigned)&INTCON*8)+3;
volatile	bit	INT0IE		@ ((unsigned)&INTCON*8)+4;
volatile       bit	TMR0IE		@ ((unsigned)&INTCON*8)+5;
volatile       bit	PEIE		@ ((unsigned)&INTCON*8)+6;
volatile 	   bit	GIE			@ ((unsigned)&INTCON*8)+7;

/* Definitions for PIR1 register */
volatile       bit	TMR1IF		@ ((unsigned)&PIR1*8)+0;
volatile       bit	TMR2IF		@ ((unsigned)&PIR1*8)+1;
volatile       bit	CCP1IF		@ ((unsigned)&PIR1*8)+2;
volatile       bit	SSPIF		@ ((unsigned)&PIR1*8)+3;
volatile       bit	TXIF		@ ((unsigned)&PIR1*8)+4;
volatile       bit	RCIF		@ ((unsigned)&PIR1*8)+5;
volatile       bit	ADIF		@ ((unsigned)&PIR1*8)+6;

/* Definitions for PIR2 register */
volatile       bit	EEIF		@ ((unsigned)&PIR2*8)+4;
volatile       bit	CMIF		@ ((unsigned)&PIR2*8)+6;
volatile       bit	OSFIF		@ ((unsigned)&PIR2*8)+7;

/* Definitions for T1CON register */
volatile       bit	TMR1ON		@ ((unsigned)&T1CON*8)+0;
volatile       bit	TMR1CS		@ ((unsigned)&T1CON*8)+1;
volatile       bit	T1SYNC		@ ((unsigned)&T1CON*8)+2;
volatile       bit	T1OSCEN		@ ((unsigned)&T1CON*8)+3;
volatile       bit	T1CKPS0		@ ((unsigned)&T1CON*8)+4;
volatile       bit	T1CKPS1		@ ((unsigned)&T1CON*8)+5;
volatile	bit	T1RUN		@ ((unsigned)&T1CON*8)+6;

/* Definitions for T2CON register */
volatile       bit	T2CKPS0		@ ((unsigned)&T2CON*8)+0;
volatile       bit	T2CKPS1		@ ((unsigned)&T2CON*8)+1;
volatile       bit	TMR2ON		@ ((unsigned)&T2CON*8)+2;
volatile       bit	TOUTPS0		@ ((unsigned)&T2CON*8)+3;
volatile       bit	TOUTPS1		@ ((unsigned)&T2CON*8)+4;
volatile       bit	TOUTPS2		@ ((unsigned)&T2CON*8)+5;
volatile       bit	TOUTPS3		@ ((unsigned)&T2CON*8)+6;

/* Definitions for SSPCON register */
volatile       bit	SSPM0		@ ((unsigned)&SSPCON*8)+0;
volatile       bit	SSPM1		@ ((unsigned)&SSPCON*8)+1;
volatile       bit	SSPM2		@ ((unsigned)&SSPCON*8)+2;
volatile       bit	SSPM3		@ ((unsigned)&SSPCON*8)+3;
volatile       bit	CKP		@ ((unsigned)&SSPCON*8)+4;
volatile       bit	SSPEN		@ ((unsigned)&SSPCON*8)+5;
volatile       bit	SSPOV		@ ((unsigned)&SSPCON*8)+6;
volatile       bit	WCOL		@ ((unsigned)&SSPCON*8)+7;

/* Definitions for CCP1CON register */
volatile	bit	CCP1M0		@ ((unsigned)&CCP1CON*8)+0;
volatile	bit	CCP1M1		@ ((unsigned)&CCP1CON*8)+1;
volatile	bit	CCP1M2		@ ((unsigned)&CCP1CON*8)+2;
volatile	bit	CCP1M3		@ ((unsigned)&CCP1CON*8)+3;
volatile       bit	CCP1Y		@ ((unsigned)&CCP1CON*8)+4;
volatile       bit	CCP1X		@ ((unsigned)&CCP1CON*8)+5;

/* Definitions for RCSTA register */
volatile       bit	RX9D		@ ((unsigned)&RCSTA*8)+0;
volatile       bit	OERR		@ ((unsigned)&RCSTA*8)+1;
volatile       bit	FERR		@ ((unsigned)&RCSTA*8)+2;
volatile	bit	ADDEN		@ ((unsigned)&RCSTA*8)+3;
volatile	bit	CREN		@ ((unsigned)&RCSTA*8)+4;
volatile	bit	SREN		@ ((unsigned)&RCSTA*8)+5;
volatile	bit	RX9		@ ((unsigned)&RCSTA*8)+6;
volatile	bit	SPEN		@ ((unsigned)&RCSTA*8)+7;

#if defined(_16F88)
/* Definitions for ADCON0 register */
volatile       bit	ADON		@ ((unsigned)&ADCON0*8)+0;
volatile       bit	GODONE		@ ((unsigned)&ADCON0*8)+2;
volatile       bit	CHS0		@ ((unsigned)&ADCON0*8)+3;
volatile       bit	CHS1		@ ((unsigned)&ADCON0*8)+4;
volatile       bit	CHS2		@ ((unsigned)&ADCON0*8)+5;
volatile       bit	ADCS0		@ ((unsigned)&ADCON0*8)+6;
volatile       bit	ADCS1		@ ((unsigned)&ADCON0*8)+7;
/* Alternate definitions for ADCON0 register */
volatile       bit	ADGO		@ ((unsigned)&ADCON0*8)+2;
#endif

/* Definitions for OPTION register */
volatile	bit	PS0		@ ((unsigned)&OPTION*8)+0;
volatile	bit	PS1		@ ((unsigned)&OPTION*8)+1;
volatile	bit	PS2		@ ((unsigned)&OPTION*8)+2;
volatile	bit	PSA		@ ((unsigned)&OPTION*8)+3;
volatile	bit	T0SE		@ ((unsigned)&OPTION*8)+4;
volatile	bit	T0CS		@ ((unsigned)&OPTION*8)+5;
volatile	bit	INTEDG		@ ((unsigned)&OPTION*8)+6;
volatile	bit	RBPU		@ ((unsigned)&OPTION*8)+7;

/* Definitions for TRISA register */
volatile       bit	TRISA0		@ ((unsigned)&TRISA*8)+0;
volatile       bit	TRISA1		@ ((unsigned)&TRISA*8)+1;
volatile       bit	TRISA2		@ ((unsigned)&TRISA*8)+2;
volatile       bit	TRISA3		@ ((unsigned)&TRISA*8)+3;
volatile       bit	TRISA4		@ ((unsigned)&TRISA*8)+4;
volatile       bit	TRISA5		@ ((unsigned)&TRISA*8)+5;
volatile       bit	TRISA6		@ ((unsigned)&TRISA*8)+6;
volatile       bit	TRISA7		@ ((unsigned)&TRISA*8)+7;

/* Definitions for TRISB register */
volatile       bit	TRISB0		@ ((unsigned)&TRISB*8)+0;
volatile       bit	TRISB1		@ ((unsigned)&TRISB*8)+1;
volatile       bit	TRISB2		@ ((unsigned)&TRISB*8)+2;
volatile       bit	TRISB3		@ ((unsigned)&TRISB*8)+3;
volatile       bit	TRISB4		@ ((unsigned)&TRISB*8)+4;
volatile       bit	TRISB5		@ ((unsigned)&TRISB*8)+5;
volatile       bit	TRISB6		@ ((unsigned)&TRISB*8)+6;
volatile       bit	TRISB7		@ ((unsigned)&TRISB*8)+7;

/* Definitions for PIE1 register */
volatile	bit	TMR1IE		@ ((unsigned)&PIE1*8)+0;
volatile	bit	TMR2IE		@ ((unsigned)&PIE1*8)+1;
volatile	bit	CCP1IE		@ ((unsigned)&PIE1*8)+2;
volatile	bit	SSPIE		@ ((unsigned)&PIE1*8)+3;
volatile	bit	TXIE		@ ((unsigned)&PIE1*8)+4;
volatile	bit	RCIE		@ ((unsigned)&PIE1*8)+5;
volatile	bit	ADIE		@ ((unsigned)&PIE1*8)+6;

/* Definitions for PIE2 register */
volatile	bit	EEIE		@ ((unsigned)&PIE2*8)+4;
volatile	bit	CMIE		@ ((unsigned)&PIE2*8)+6;
volatile	bit	OSFIE		@ ((unsigned)&PIE2*8)+7;

/* Definitions for PCON register */
volatile       bit	BOR		@ ((unsigned)&PCON*8)+0;
volatile       bit	POR		@ ((unsigned)&PCON*8)+1;

/* Definitions for OSCCON register */
volatile	bit	SCS0		@ ((unsigned)&OSCCON*8)+0;
volatile	bit	SCS1		@ ((unsigned)&OSCCON*8)+1;
volatile       bit	IOFS		@ ((unsigned)&OSCCON*8)+2;
volatile       bit	OSTS		@ ((unsigned)&OSCCON*8)+3;
volatile       bit	IRCF0		@ ((unsigned)&OSCCON*8)+4;
volatile       bit	IRCF1		@ ((unsigned)&OSCCON*8)+5;
volatile       bit	IRCF2		@ ((unsigned)&OSCCON*8)+6;

/* Definitions for OSCTUNE register */
volatile	bit	TUN0		@ ((unsigned)&OSCTUNE*8)+0;
volatile	bit	TUN1		@ ((unsigned)&OSCTUNE*8)+1;
volatile	bit	TUN2		@ ((unsigned)&OSCTUNE*8)+2;
volatile	bit	TUN3		@ ((unsigned)&OSCTUNE*8)+3;
volatile	bit	TUN4		@ ((unsigned)&OSCTUNE*8)+4;
volatile	bit	TUN5		@ ((unsigned)&OSCTUNE*8)+5;

/* Definitions for SSPSTAT register */
volatile       bit	BF		@ ((unsigned)&SSPSTAT*8)+0;
volatile       bit	UA		@ ((unsigned)&SSPSTAT*8)+1;
volatile       bit	RW		@ ((unsigned)&SSPSTAT*8)+2;
volatile       bit	START		@ ((unsigned)&SSPSTAT*8)+3;
volatile       bit	STOP		@ ((unsigned)&SSPSTAT*8)+4;
volatile       bit	DA		@ ((unsigned)&SSPSTAT*8)+5;
volatile	bit	CKE		@ ((unsigned)&SSPSTAT*8)+6;
volatile	bit	SMP		@ ((unsigned)&SSPSTAT*8)+7;

/* Definitions for TXSTA register */
volatile       bit	TX9D		@ ((unsigned)&TXSTA*8)+0;
volatile       bit	TRMT		@ ((unsigned)&TXSTA*8)+1;
volatile	bit	BRGH		@ ((unsigned)&TXSTA*8)+2;
volatile	bit	SYNC		@ ((unsigned)&TXSTA*8)+4;
volatile	bit	TXEN		@ ((unsigned)&TXSTA*8)+5;
volatile	bit	TX9		@ ((unsigned)&TXSTA*8)+6;
volatile	bit	CSRC		@ ((unsigned)&TXSTA*8)+7;

#if defined(_16F88)
/* Definitions for ANSEL register */
volatile	bit	ANS0		@ ((unsigned)&ANSEL*8)+0;
volatile	bit	ANS1		@ ((unsigned)&ANSEL*8)+1;
volatile	bit	ANS2		@ ((unsigned)&ANSEL*8)+2;
volatile	bit	ANS3		@ ((unsigned)&ANSEL*8)+3;
volatile	bit	ANS4		@ ((unsigned)&ANSEL*8)+4;
volatile	bit	ANS5		@ ((unsigned)&ANSEL*8)+5;
volatile	bit	ANS6		@ ((unsigned)&ANSEL*8)+6;
#endif

/* Definitions for CMCON register */
volatile	bit	CM0		@ ((unsigned)&CMCON*8)+0;
volatile	bit	CM1		@ ((unsigned)&CMCON*8)+1;
volatile	bit	CM2		@ ((unsigned)&CMCON*8)+2;
volatile	bit	CIS		@ ((unsigned)&CMCON*8)+3;
volatile	bit	C1INV		@ ((unsigned)&CMCON*8)+4;
volatile	bit	C2INV		@ ((unsigned)&CMCON*8)+5;
volatile       bit	C1OUT		@ ((unsigned)&CMCON*8)+6;
volatile       bit	C2OUT		@ ((unsigned)&CMCON*8)+7;

/* Definitions for CVRCON register */
volatile	bit	CVR0		@ ((unsigned)&CVRCON*8)+0;
volatile	bit	CVR1		@ ((unsigned)&CVRCON*8)+1;
volatile	bit	CVR2		@ ((unsigned)&CVRCON*8)+2;
volatile	bit	CVR3		@ ((unsigned)&CVRCON*8)+3;
volatile	bit	CVRR		@ ((unsigned)&CVRCON*8)+5;
volatile	bit	CVROE		@ ((unsigned)&CVRCON*8)+6;
volatile	bit	CVREN		@ ((unsigned)&CVRCON*8)+7;

#if defined(_16F88)
/* Definitions for ADCON1 register */
volatile	bit	VCFG0		@ ((unsigned)&ADCON1*8)+4;
volatile	bit	VCFG1		@ ((unsigned)&ADCON1*8)+5;
volatile	bit	ADCS2		@ ((unsigned)&ADCON1*8)+6;
volatile	bit	ADFM		@ ((unsigned)&ADCON1*8)+7;
#endif

/* Definitions for WDTCON register */
volatile	bit	SWDTEN		@ ((unsigned)&WDTCON*8)+0;
volatile	bit	WDTPS0		@ ((unsigned)&WDTCON*8)+1;
volatile	bit	WDTPS1		@ ((unsigned)&WDTCON*8)+2;
volatile	bit	WDTPS2		@ ((unsigned)&WDTCON*8)+3;
volatile	bit	WDTPS3		@ ((unsigned)&WDTCON*8)+4;

/* Definitions for EECON1 register */
volatile       bit	RD		@ ((unsigned)&EECON1*8)+0;
volatile       bit	WR		@ ((unsigned)&EECON1*8)+1;
volatile       bit	WREN		@ ((unsigned)&EECON1*8)+2;
volatile       bit	WRERR		@ ((unsigned)&EECON1*8)+3;
volatile       bit	FREE		@ ((unsigned)&EECON1*8)+4;
volatile       bit	EEPGD		@ ((unsigned)&EECON1*8)+7;

					
#define CONFIG_ADDR	0x2007

#define CONFIG_ADDR2	0x2008

#endif
