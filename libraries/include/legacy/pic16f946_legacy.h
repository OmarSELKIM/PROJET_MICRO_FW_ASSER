
#ifndef	_HTC_H_
#warning Header file pic16f946.h included directly. Use #include <htc.h> instead.
#endif

 /* header file for the MICROCHIP PIC microcontroller
 */

#ifndef	__PIC16F946_H
#define	__PIC16F946_H

// Special function register definitions

volatile       unsigned char	INDF		@ 0x000;
volatile       unsigned char	TMR0		@ 0x001;
volatile       unsigned char	PCL		@ 0x002;
volatile       unsigned char	STATUS		@ 0x003;
volatile	unsigned char	FSR		@ 0x004;
volatile       unsigned char	PORTA		@ 0x005;
volatile       unsigned char	PORTB		@ 0x006;
volatile       unsigned char	PORTC		@ 0x007;
volatile       unsigned char	PORTD		@ 0x008;
volatile       unsigned char	PORTE		@ 0x009;
volatile       unsigned char	PCLATH		@ 0x00A;
volatile       unsigned char	INTCON		@ 0x00B;
volatile       unsigned char	PIR1		@ 0x00C;
volatile       unsigned char	PIR2		@ 0x00D;
volatile       unsigned char	TMR1L		@ 0x00E;
volatile       unsigned char	TMR1H		@ 0x00F;
volatile	unsigned char	T1CON		@ 0x010;
volatile       unsigned char	TMR2		@ 0x011;
volatile	unsigned char	T2CON		@ 0x012;
volatile       unsigned char	SSPBUF		@ 0x013;
volatile       unsigned char	SSPCON		@ 0x014;
volatile       unsigned char	CCPR1L		@ 0x015;
volatile       unsigned char	CCPR1H		@ 0x016;
volatile       unsigned char	CCP1CON		@ 0x017;
volatile       unsigned char	RCSTA		@ 0x018;
volatile       unsigned char	TXREG		@ 0x019;
volatile       unsigned char	RCREG		@ 0x01A;
volatile       unsigned char	CCPR2L		@ 0x01B;
volatile       unsigned char	CCPR2H		@ 0x01C;
volatile       unsigned char	CCP2CON		@ 0x01D;
volatile       unsigned char	ADRESH		@ 0x01E;
volatile       unsigned char	ADCON0		@ 0x01F;
volatile	unsigned char	OPTION		@ 0x081;
volatile       unsigned char	TRISA		@ 0x085;
volatile       unsigned char	TRISB		@ 0x086;
volatile       unsigned char	TRISC		@ 0x087;
volatile       unsigned char	TRISD		@ 0x088;
volatile       unsigned char	TRISE		@ 0x089;
volatile	unsigned char	PIE1		@ 0x08C;
volatile	unsigned char	PIE2		@ 0x08D;
volatile       unsigned char	PCON		@ 0x08E;
volatile       unsigned char	OSCCON		@ 0x08F;
volatile	unsigned char	OSCTUNE		@ 0x090;
volatile	unsigned char	ANSEL		@ 0x091;
volatile	unsigned char	PR2		@ 0x092;
volatile	unsigned char	SSPADD		@ 0x093;
volatile       unsigned char	SSPSTAT		@ 0x094;
volatile	unsigned char	WPUB		@ 0x095;
volatile	unsigned char	IOCB		@ 0x096;
volatile	unsigned char	CMCON1		@ 0x097;
volatile       unsigned char	TXSTA		@ 0x098;
volatile	unsigned char	SPBRG		@ 0x099;
volatile       unsigned char	CMCON0		@ 0x09C;
volatile	unsigned char	VRCON		@ 0x09D;
volatile       unsigned char	ADRESL		@ 0x09E;
volatile	unsigned char	ADCON1		@ 0x09F;
volatile       unsigned char	WDTCON		@ 0x105;
volatile       unsigned char	LCDCON		@ 0x107;
volatile       unsigned char	LCDPS		@ 0x108;
volatile       unsigned char	LVDCON		@ 0x109;
volatile       unsigned char	EEDATL		@ 0x10C;
/* Alternate definition */
volatile       unsigned char	EEDATA		@ 0x10C;
volatile       unsigned char	EEADRL		@ 0x10D;
/* Alternate definition */
volatile       unsigned char	EEADR		@ 0x10D;
volatile       unsigned char	EEDATH		@ 0x10E;
volatile       unsigned char	EEADRH		@ 0x10F;
volatile	unsigned char	LCDDATA0	@ 0x110;
volatile	unsigned char	LCDDATA1	@ 0x111;
volatile	unsigned char	LCDDATA2	@ 0x112;
volatile	unsigned char	LCDDATA3	@ 0x113;
volatile	unsigned char	LCDDATA4	@ 0x114;
volatile	unsigned char	LCDDATA5	@ 0x115;
volatile	unsigned char	LCDDATA6	@ 0x116;
volatile	unsigned char	LCDDATA7	@ 0x117;
volatile	unsigned char	LCDDATA8	@ 0x118;
volatile	unsigned char	LCDDATA9	@ 0x119;
volatile	unsigned char	LCDDATA10	@ 0x11A;
volatile	unsigned char	LCDDATA11	@ 0x11B;
volatile	unsigned char	LCDSE0		@ 0x11C;
volatile	unsigned char	LCDSE1		@ 0x11D;
volatile	unsigned char	LCDSE2		@ 0x11E;
volatile       unsigned char	TRISF		@ 0x185;
volatile       unsigned char	TRISG		@ 0x187;
volatile       unsigned char	PORTF		@ 0x188;
volatile       unsigned char	PORTG		@ 0x189;
volatile       unsigned char	EECON1		@ 0x18C;
volatile       unsigned char	EECON2		@ 0x18D;
volatile	unsigned char	LCDDATA12	@ 0x190;
volatile	unsigned char	LCDDATA13	@ 0x191;
volatile	unsigned char	LCDDATA14	@ 0x192;
volatile	unsigned char	LCDDATA15	@ 0x193;
volatile	unsigned char	LCDDATA16	@ 0x194;
volatile	unsigned char	LCDDATA17	@ 0x195;
volatile	unsigned char	LCDDATA18	@ 0x196;
volatile	unsigned char	LCDDATA19	@ 0x197;
volatile	unsigned char	LCDDATA20	@ 0x198;
volatile	unsigned char	LCDDATA21	@ 0x199;
volatile	unsigned char	LCDDATA22	@ 0x19A;
volatile	unsigned char	LCDDATA23	@ 0x19B;
volatile	unsigned char	LCDSE3		@ 0x19C;
volatile	unsigned char	LCDSE4		@ 0x19D;
volatile	unsigned char	LCDSE5		@ 0x19E;


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

/* Definitions for PORTC register */
volatile       bit	RC0		@ ((unsigned)&PORTC*8)+0;
volatile       bit	RC1		@ ((unsigned)&PORTC*8)+1;
volatile       bit	RC2		@ ((unsigned)&PORTC*8)+2;
volatile       bit	RC3		@ ((unsigned)&PORTC*8)+3;
volatile       bit	RC4		@ ((unsigned)&PORTC*8)+4;
volatile       bit	RC5		@ ((unsigned)&PORTC*8)+5;
volatile       bit	RC6		@ ((unsigned)&PORTC*8)+6;
volatile       bit	RC7		@ ((unsigned)&PORTC*8)+7;

/* Definitions for PORTD register */
volatile       bit	RD0		@ ((unsigned)&PORTD*8)+0;
volatile       bit	RD1		@ ((unsigned)&PORTD*8)+1;
volatile       bit	RD2		@ ((unsigned)&PORTD*8)+2;
volatile       bit	RD3		@ ((unsigned)&PORTD*8)+3;
volatile       bit	RD4		@ ((unsigned)&PORTD*8)+4;
volatile       bit	RD5		@ ((unsigned)&PORTD*8)+5;
volatile       bit	RD6		@ ((unsigned)&PORTD*8)+6;
volatile       bit	RD7		@ ((unsigned)&PORTD*8)+7;

/* Definitions for PORTE register */
volatile       bit	RE0		@ ((unsigned)&PORTE*8)+0;
volatile       bit	RE1		@ ((unsigned)&PORTE*8)+1;
volatile       bit	RE2		@ ((unsigned)&PORTE*8)+2;
volatile       bit	RE3		@ ((unsigned)&PORTE*8)+3;
volatile       bit	RE4		@ ((unsigned)&PORTE*8)+4;
volatile       bit	RE5		@ ((unsigned)&PORTE*8)+5;
volatile       bit	RE6		@ ((unsigned)&PORTE*8)+6;
volatile       bit	RE7		@ ((unsigned)&PORTE*8)+7;

/* Definitions for INTCON register */
volatile       bit	RBIF		@ ((unsigned)&INTCON*8)+0;
// Alternate definition for backward compatibility
volatile       bit	RABIF		@ ((unsigned)&INTCON*8)+0;
volatile       bit	INTF		@ ((unsigned)&INTCON*8)+1;
volatile       bit	T0IF		@ ((unsigned)&INTCON*8)+2;
volatile	bit	RBIE		@ ((unsigned)&INTCON*8)+3;
// Alternate definition for backward compatibility
volatile	bit	RABIE		@ ((unsigned)&INTCON*8)+3;
volatile	bit	INTE		@ ((unsigned)&INTCON*8)+4;
volatile	bit	T0IE		@ ((unsigned)&INTCON*8)+5;
volatile	bit	PEIE		@ ((unsigned)&INTCON*8)+6;
volatile bit	GIE		@ ((unsigned)&INTCON*8)+7;

/* Definitions for PIR1 register */
volatile       bit	TMR1IF		@ ((unsigned)&PIR1*8)+0;
volatile       bit	TMR2IF		@ ((unsigned)&PIR1*8)+1;
volatile       bit	CCP1IF		@ ((unsigned)&PIR1*8)+2;
volatile       bit	SSPIF		@ ((unsigned)&PIR1*8)+3;
volatile       bit	TXIF		@ ((unsigned)&PIR1*8)+4;
volatile       bit	RCIF		@ ((unsigned)&PIR1*8)+5;
volatile       bit	ADIF		@ ((unsigned)&PIR1*8)+6;
volatile       bit	EEIF		@ ((unsigned)&PIR1*8)+7;

/* Definitions for PIR2 register */
volatile       bit	CCP2IF		@ ((unsigned)&PIR2*8)+0;
volatile       bit	LVDIF		@ ((unsigned)&PIR2*8)+2;
volatile       bit	LCDIF		@ ((unsigned)&PIR2*8)+4;
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
volatile	bit	T1GE		@ ((unsigned)&T1CON*8)+6;
volatile	bit	T1GINV		@ ((unsigned)&T1CON*8)+7;

/* Definitions for T2CON register */
volatile	bit	T2CKPS0		@ ((unsigned)&T2CON*8)+0;
volatile	bit	T2CKPS1		@ ((unsigned)&T2CON*8)+1;
volatile	bit	TMR2ON		@ ((unsigned)&T2CON*8)+2;
volatile	bit	TOUTPS0		@ ((unsigned)&T2CON*8)+3;
volatile	bit	TOUTPS1		@ ((unsigned)&T2CON*8)+4;
volatile	bit	TOUTPS2		@ ((unsigned)&T2CON*8)+5;
volatile	bit	TOUTPS3		@ ((unsigned)&T2CON*8)+6;

/* Definitions for SSPCON register */
volatile	bit	SSPM0		@ ((unsigned)&SSPCON*8)+0;
volatile	bit	SSPM1		@ ((unsigned)&SSPCON*8)+1;
volatile	bit	SSPM2		@ ((unsigned)&SSPCON*8)+2;
volatile	bit	SSPM3		@ ((unsigned)&SSPCON*8)+3;
volatile	bit	CKP		@ ((unsigned)&SSPCON*8)+4;
volatile	bit	SSPEN		@ ((unsigned)&SSPCON*8)+5;
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

/* Definitions for CCP2CON register */
volatile	bit	CCP2M0		@ ((unsigned)&CCP2CON*8)+0;
volatile	bit	CCP2M1		@ ((unsigned)&CCP2CON*8)+1;
volatile	bit	CCP2M2		@ ((unsigned)&CCP2CON*8)+2;
volatile	bit	CCP2M3		@ ((unsigned)&CCP2CON*8)+3;
volatile       bit	CCP2Y		@ ((unsigned)&CCP2CON*8)+4;
volatile       bit	CCP2X		@ ((unsigned)&CCP2CON*8)+5;

/* Definitions for ADCON0 register */
volatile	bit	ADON		@ ((unsigned)&ADCON0*8)+0;
volatile       bit	GODONE		@ ((unsigned)&ADCON0*8)+1;
volatile	bit	CHS0		@ ((unsigned)&ADCON0*8)+2;
volatile	bit	CHS1		@ ((unsigned)&ADCON0*8)+3;
volatile	bit	CHS2		@ ((unsigned)&ADCON0*8)+4;
volatile	bit	VCFG0		@ ((unsigned)&ADCON0*8)+5;
volatile	bit	VCFG1		@ ((unsigned)&ADCON0*8)+6;
volatile	bit	ADFM		@ ((unsigned)&ADCON0*8)+7;

/* Definitions for OPTION register */
volatile	bit	PS0		@ ((unsigned)&OPTION*8)+0;
volatile	bit	PS1		@ ((unsigned)&OPTION*8)+1;
volatile	bit	PS2		@ ((unsigned)&OPTION*8)+2;
volatile	bit	PSA		@ ((unsigned)&OPTION*8)+3;
volatile	bit	T0SE		@ ((unsigned)&OPTION*8)+4;
volatile	bit	T0CS		@ ((unsigned)&OPTION*8)+5;
volatile	bit	INTEDG		@ ((unsigned)&OPTION*8)+6;
volatile	bit	RBPU		@ ((unsigned)&OPTION*8)+7;
// Alternate definition for backward compatibility
volatile	bit	RABPU		@ ((unsigned)&OPTION*8)+7;

/* Definitions for TRISA register */
volatile	bit	TRISA0		@ ((unsigned)&TRISA*8)+0;
volatile	bit	TRISA1		@ ((unsigned)&TRISA*8)+1;
volatile	bit	TRISA2		@ ((unsigned)&TRISA*8)+2;
volatile	bit	TRISA3		@ ((unsigned)&TRISA*8)+3;
volatile	bit	TRISA4		@ ((unsigned)&TRISA*8)+4;
volatile	bit	TRISA5		@ ((unsigned)&TRISA*8)+5;
volatile	bit	TRISA6		@ ((unsigned)&TRISA*8)+6;
volatile	bit	TRISA7		@ ((unsigned)&TRISA*8)+7;

/* Definitions for TRISB register */
volatile       bit	TRISB0		@ ((unsigned)&TRISB*8)+0;
volatile       bit	TRISB1		@ ((unsigned)&TRISB*8)+1;
volatile       bit	TRISB2		@ ((unsigned)&TRISB*8)+2;
volatile       bit	TRISB3		@ ((unsigned)&TRISB*8)+3;
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

/* Definitions for TRISD register */
volatile       bit	TRISD0		@ ((unsigned)&TRISD*8)+0;
volatile       bit	TRISD1		@ ((unsigned)&TRISD*8)+1;
volatile       bit	TRISD2		@ ((unsigned)&TRISD*8)+2;
volatile       bit	TRISD3		@ ((unsigned)&TRISD*8)+3;
volatile       bit	TRISD4		@ ((unsigned)&TRISD*8)+4;
volatile       bit	TRISD5		@ ((unsigned)&TRISD*8)+5;
volatile       bit	TRISD6		@ ((unsigned)&TRISD*8)+6;
volatile       bit	TRISD7		@ ((unsigned)&TRISD*8)+7;

/* Definitions for TRISE register */
volatile       bit	TRISE0		@ ((unsigned)&TRISE*8)+0;
volatile       bit	TRISE1		@ ((unsigned)&TRISE*8)+1;
volatile       bit	TRISE2		@ ((unsigned)&TRISE*8)+2;
volatile       bit	TRISE3		@ ((unsigned)&TRISE*8)+3;
volatile       bit	TRISE4		@ ((unsigned)&TRISE*8)+4;
volatile       bit	TRISE5		@ ((unsigned)&TRISE*8)+5;
volatile       bit	TRISE6		@ ((unsigned)&TRISE*8)+6;
volatile       bit	TRISE7		@ ((unsigned)&TRISE*8)+7;

/* Definitions for PIE1 register */
volatile	bit	TMR1IE		@ ((unsigned)&PIE1*8)+0;
volatile	bit	TMR2IE		@ ((unsigned)&PIE1*8)+1;
volatile	bit	CCP1IE		@ ((unsigned)&PIE1*8)+2;
volatile	bit	SSPIE		@ ((unsigned)&PIE1*8)+3;
volatile	bit	TXIE		@ ((unsigned)&PIE1*8)+4;
volatile	bit	RCIE		@ ((unsigned)&PIE1*8)+5;
volatile	bit	ADIE		@ ((unsigned)&PIE1*8)+6;
volatile	bit	EEIE		@ ((unsigned)&PIE1*8)+7;

/* Definitions for PIE2 register */
volatile	bit	CCP2IE		@ ((unsigned)&PIE2*8)+0;
volatile	bit	LVDIE		@ ((unsigned)&PIE2*8)+2;
volatile	bit	LCDIE		@ ((unsigned)&PIE2*8)+4;
volatile	bit	C1IE		@ ((unsigned)&PIE2*8)+5;
volatile	bit	C2IE		@ ((unsigned)&PIE2*8)+6;
volatile	bit	OSFIE		@ ((unsigned)&PIE2*8)+7;

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

/* Definitions for ANSEL register */
volatile	bit	ANS0		@ ((unsigned)&ANSEL*8)+0;
volatile	bit	ANS1		@ ((unsigned)&ANSEL*8)+1;
volatile	bit	ANS2		@ ((unsigned)&ANSEL*8)+2;
volatile	bit	ANS3		@ ((unsigned)&ANSEL*8)+3;
volatile	bit	ANS4		@ ((unsigned)&ANSEL*8)+4;
volatile	bit	ANS5		@ ((unsigned)&ANSEL*8)+5;
volatile	bit	ANS6		@ ((unsigned)&ANSEL*8)+6;
volatile	bit	ANS7		@ ((unsigned)&ANSEL*8)+7;

/* Definitions for SSPSTAT register */
volatile       bit	BF		@ ((unsigned)&SSPSTAT*8)+0;
volatile       bit	UA		@ ((unsigned)&SSPSTAT*8)+1;
volatile       bit	RW		@ ((unsigned)&SSPSTAT*8)+2;
volatile       bit	START		@ ((unsigned)&SSPSTAT*8)+3;
volatile       bit	STOP		@ ((unsigned)&SSPSTAT*8)+4;
volatile       bit	DA		@ ((unsigned)&SSPSTAT*8)+5;
volatile	bit	CKE		@ ((unsigned)&SSPSTAT*8)+6;
volatile	bit	SMP		@ ((unsigned)&SSPSTAT*8)+7;

/* Definitions for WPUB register */
volatile	bit	WPUB0		@ ((unsigned)&WPUB*8)+0;
volatile	bit	WPUB1		@ ((unsigned)&WPUB*8)+1;
volatile	bit	WPUB2		@ ((unsigned)&WPUB*8)+2;
volatile	bit	WPUB3		@ ((unsigned)&WPUB*8)+3;
volatile	bit	WPUB4		@ ((unsigned)&WPUB*8)+4;
volatile	bit	WPUB5		@ ((unsigned)&WPUB*8)+5;
volatile	bit	WPUB6		@ ((unsigned)&WPUB*8)+6;
volatile	bit	WPUB7		@ ((unsigned)&WPUB*8)+7;

/* Definitions for IOCB register */
volatile	bit	IOCB4		@ ((unsigned)&IOCB*8)+4;
volatile	bit	IOCB5		@ ((unsigned)&IOCB*8)+5;
volatile	bit	IOCB6		@ ((unsigned)&IOCB*8)+6;
volatile	bit	IOCB7		@ ((unsigned)&IOCB*8)+7;

/* Definitions for CMCON1 register */
volatile	bit	C2SYNC		@ ((unsigned)&CMCON1*8)+0;
volatile	bit	T1GSS		@ ((unsigned)&CMCON1*8)+1;

/* Definitions for TXSTA register */
volatile       bit	TX9D		@ ((unsigned)&TXSTA*8)+0;
volatile       bit	TRMT		@ ((unsigned)&TXSTA*8)+1;
volatile	bit	BRGH		@ ((unsigned)&TXSTA*8)+2;
volatile	bit	SYNC		@ ((unsigned)&TXSTA*8)+4;
volatile	bit	TXEN		@ ((unsigned)&TXSTA*8)+5;
volatile	bit	TX9		@ ((unsigned)&TXSTA*8)+6;
volatile	bit	CSRC		@ ((unsigned)&TXSTA*8)+7;

/* Definitions for SPBRG register */
volatile	bit	SPBRG0		@ ((unsigned)&SPBRG*8)+0;
volatile	bit	SPBRG1		@ ((unsigned)&SPBRG*8)+1;
volatile	bit	SPBRG2		@ ((unsigned)&SPBRG*8)+2;
volatile	bit	SPBRG3		@ ((unsigned)&SPBRG*8)+3;
volatile	bit	SPBRG4		@ ((unsigned)&SPBRG*8)+4;
volatile	bit	SPBRG5		@ ((unsigned)&SPBRG*8)+5;
volatile	bit	SPBRG6		@ ((unsigned)&SPBRG*8)+6;
volatile	bit	SPBRG7		@ ((unsigned)&SPBRG*8)+7;

/* Definitions for CMCON0 register */
volatile	bit	CM0		@ ((unsigned)&CMCON0*8)+0;
volatile	bit	CM1		@ ((unsigned)&CMCON0*8)+1;
volatile	bit	CM2		@ ((unsigned)&CMCON0*8)+2;
volatile	bit	CIS		@ ((unsigned)&CMCON0*8)+3;
volatile	bit	C1INV		@ ((unsigned)&CMCON0*8)+4;
volatile	bit	C2INV		@ ((unsigned)&CMCON0*8)+5;
volatile       bit	C1OUT		@ ((unsigned)&CMCON0*8)+6;
volatile       bit	C2OUT		@ ((unsigned)&CMCON0*8)+7;

/* Definitions for VRCON register */
volatile	bit	VR0		@ ((unsigned)&VRCON*8)+0;
volatile	bit	VR1		@ ((unsigned)&VRCON*8)+1;
volatile	bit	VR2		@ ((unsigned)&VRCON*8)+2;
volatile	bit	VR3		@ ((unsigned)&VRCON*8)+3;
volatile	bit	VRR		@ ((unsigned)&VRCON*8)+5;
volatile	bit	VREN		@ ((unsigned)&VRCON*8)+7;

/* Definitions for ADCON1 register */
volatile	bit	ADCS0		@ ((unsigned)&ADCON1*8)+4;
volatile	bit	ADCS1		@ ((unsigned)&ADCON1*8)+5;
volatile	bit	ADCS2		@ ((unsigned)&ADCON1*8)+6;

/* Definitions for WDTCON register */
volatile	bit	SWDTEN		@ ((unsigned)&WDTCON*8)+0;
volatile	bit	WDTPS0		@ ((unsigned)&WDTCON*8)+1;
volatile	bit	WDTPS1		@ ((unsigned)&WDTCON*8)+2;
volatile	bit	WDTPS2		@ ((unsigned)&WDTCON*8)+3;
volatile	bit	WDTPS3		@ ((unsigned)&WDTCON*8)+4;

/* Definitions for LCDCON register */
volatile	bit	LMUX0		@ ((unsigned)&LCDCON*8)+0;
volatile	bit	LMUX1		@ ((unsigned)&LCDCON*8)+1;
volatile	bit	CS0		@ ((unsigned)&LCDCON*8)+2;
volatile	bit	CS1		@ ((unsigned)&LCDCON*8)+3;
volatile	bit	VLCDEN		@ ((unsigned)&LCDCON*8)+4;
volatile       bit	WERR		@ ((unsigned)&LCDCON*8)+5;
volatile	bit	SLPEN		@ ((unsigned)&LCDCON*8)+6;
volatile	bit	LCDEN		@ ((unsigned)&LCDCON*8)+7;

/* Definitions for LCDPS register */
volatile	bit	LP0		@ ((unsigned)&LCDPS*8)+0;
volatile	bit	LP1		@ ((unsigned)&LCDPS*8)+1;
volatile	bit	LP2		@ ((unsigned)&LCDPS*8)+2;
volatile	bit	LP3		@ ((unsigned)&LCDPS*8)+3;
volatile       bit	WA		@ ((unsigned)&LCDPS*8)+4;
volatile       bit	LCDA		@ ((unsigned)&LCDPS*8)+5;
volatile	bit	BIASMD		@ ((unsigned)&LCDPS*8)+6;
volatile	bit	WFT		@ ((unsigned)&LCDPS*8)+7;

/* Definitions for LVDCON register */
volatile	bit	LVDL0		@ ((unsigned)&LVDCON*8)+0;
volatile	bit	LVDL1		@ ((unsigned)&LVDCON*8)+1;
volatile	bit	LVDL2		@ ((unsigned)&LVDCON*8)+2;
volatile	bit	LVDEN		@ ((unsigned)&LVDCON*8)+4;
volatile       bit	IRVST		@ ((unsigned)&LVDCON*8)+5;

/* Definitions for LCDDATA0 register */
volatile	bit	SEG0COM0	@ ((unsigned)&LCDDATA0*8)+0;
volatile	bit	SEG1COM0	@ ((unsigned)&LCDDATA0*8)+1;
volatile	bit	SEG2COM0	@ ((unsigned)&LCDDATA0*8)+2;
volatile	bit	SEG3COM0	@ ((unsigned)&LCDDATA0*8)+3;
volatile	bit	SEG4COM0	@ ((unsigned)&LCDDATA0*8)+4;
volatile	bit	SEG5COM0	@ ((unsigned)&LCDDATA0*8)+5;
volatile	bit	SEG6COM0	@ ((unsigned)&LCDDATA0*8)+6;
volatile	bit	SEG7COM0	@ ((unsigned)&LCDDATA0*8)+7;

/* Definitions for LCDDATA1 register */
volatile	bit	SEG8COM0	@ ((unsigned)&LCDDATA1*8)+0;
volatile	bit	SEG9COM0	@ ((unsigned)&LCDDATA1*8)+1;
volatile	bit	SEG10COM0	@ ((unsigned)&LCDDATA1*8)+2;
volatile	bit	SEG11COM0	@ ((unsigned)&LCDDATA1*8)+3;
volatile	bit	SEG12COM0	@ ((unsigned)&LCDDATA1*8)+4;
volatile	bit	SEG13COM0	@ ((unsigned)&LCDDATA1*8)+5;
volatile	bit	SEG14COM0	@ ((unsigned)&LCDDATA1*8)+6;
volatile	bit	SEG15COM0	@ ((unsigned)&LCDDATA1*8)+7;

/* Definitions for LCDDATA2 register */
volatile	bit	SEG16COM0	@ ((unsigned)&LCDDATA2*8)+0;
volatile	bit	SEG17COM0	@ ((unsigned)&LCDDATA2*8)+1;
volatile	bit	SEG18COM0	@ ((unsigned)&LCDDATA2*8)+2;
volatile	bit	SEG19COM0	@ ((unsigned)&LCDDATA2*8)+3;
volatile	bit	SEG20COM0	@ ((unsigned)&LCDDATA2*8)+4;
volatile	bit	SEG21COM0	@ ((unsigned)&LCDDATA2*8)+5;
volatile	bit	SEG22COM0	@ ((unsigned)&LCDDATA2*8)+6;
volatile	bit	SEG23COM0	@ ((unsigned)&LCDDATA2*8)+7;

/* Definitions for LCDDATA3 register */
volatile	bit	SEG0COM1	@ ((unsigned)&LCDDATA3*8)+0;
volatile	bit	SEG1COM1	@ ((unsigned)&LCDDATA3*8)+1;
volatile	bit	SEG2COM1	@ ((unsigned)&LCDDATA3*8)+2;
volatile	bit	SEG3COM1	@ ((unsigned)&LCDDATA3*8)+3;
volatile	bit	SEG4COM1	@ ((unsigned)&LCDDATA3*8)+4;
volatile	bit	SEG5COM1	@ ((unsigned)&LCDDATA3*8)+5;
volatile	bit	SEG6COM1	@ ((unsigned)&LCDDATA3*8)+6;
volatile	bit	SEG7COM1	@ ((unsigned)&LCDDATA3*8)+7;

/* Definitions for LCDDATA4 register */
volatile	bit	SEG8COM1	@ ((unsigned)&LCDDATA4*8)+0;
volatile	bit	SEG9COM1	@ ((unsigned)&LCDDATA4*8)+1;
volatile	bit	SEG10COM1	@ ((unsigned)&LCDDATA4*8)+2;
volatile	bit	SEG11COM1	@ ((unsigned)&LCDDATA4*8)+3;
volatile	bit	SEG12COM1	@ ((unsigned)&LCDDATA4*8)+4;
volatile	bit	SEG13COM1	@ ((unsigned)&LCDDATA4*8)+5;
volatile	bit	SEG14COM1	@ ((unsigned)&LCDDATA4*8)+6;
volatile	bit	SEG15COM1	@ ((unsigned)&LCDDATA4*8)+7;

/* Definitions for LCDDATA5 register */
volatile	bit	SEG16COM1	@ ((unsigned)&LCDDATA5*8)+0;
volatile	bit	SEG17COM1	@ ((unsigned)&LCDDATA5*8)+1;
volatile	bit	SEG18COM1	@ ((unsigned)&LCDDATA5*8)+2;
volatile	bit	SEG19COM1	@ ((unsigned)&LCDDATA5*8)+3;
volatile	bit	SEG20COM1	@ ((unsigned)&LCDDATA5*8)+4;
volatile	bit	SEG21COM1	@ ((unsigned)&LCDDATA5*8)+5;
volatile	bit	SEG22COM1	@ ((unsigned)&LCDDATA5*8)+6;
volatile	bit	SEG23COM1	@ ((unsigned)&LCDDATA5*8)+7;

/* Definitions for LCDDATA6 register */
volatile	bit	SEG0COM2	@ ((unsigned)&LCDDATA6*8)+0;
volatile	bit	SEG1COM2	@ ((unsigned)&LCDDATA6*8)+1;
volatile	bit	SEG2COM2	@ ((unsigned)&LCDDATA6*8)+2;
volatile	bit	SEG3COM2	@ ((unsigned)&LCDDATA6*8)+3;
volatile	bit	SEG4COM2	@ ((unsigned)&LCDDATA6*8)+4;
volatile	bit	SEG5COM2	@ ((unsigned)&LCDDATA6*8)+5;
volatile	bit	SEG6COM2	@ ((unsigned)&LCDDATA6*8)+6;
volatile	bit	SEG7COM2	@ ((unsigned)&LCDDATA6*8)+7;

/* Definitions for LCDDATA7 register */
volatile	bit	SEG8COM2	@ ((unsigned)&LCDDATA7*8)+0;
volatile	bit	SEG9COM2	@ ((unsigned)&LCDDATA7*8)+1;
volatile	bit	SEG10COM2	@ ((unsigned)&LCDDATA7*8)+2;
volatile	bit	SEG11COM2	@ ((unsigned)&LCDDATA7*8)+3;
volatile	bit	SEG12COM2	@ ((unsigned)&LCDDATA7*8)+4;
volatile	bit	SEG13COM2	@ ((unsigned)&LCDDATA7*8)+5;
volatile	bit	SEG14COM2	@ ((unsigned)&LCDDATA7*8)+6;
volatile	bit	SEG15COM2	@ ((unsigned)&LCDDATA7*8)+7;

/* Definitions for LCDDATA8 register */
volatile	bit	SEG16COM2	@ ((unsigned)&LCDDATA8*8)+0;
volatile	bit	SEG17COM2	@ ((unsigned)&LCDDATA8*8)+1;
volatile	bit	SEG18COM2	@ ((unsigned)&LCDDATA8*8)+2;
volatile	bit	SEG19COM2	@ ((unsigned)&LCDDATA8*8)+3;
volatile	bit	SEG20COM2	@ ((unsigned)&LCDDATA8*8)+4;
volatile	bit	SEG21COM2	@ ((unsigned)&LCDDATA8*8)+5;
volatile	bit	SEG22COM2	@ ((unsigned)&LCDDATA8*8)+6;
volatile	bit	SEG23COM2	@ ((unsigned)&LCDDATA8*8)+7;

/* Definitions for LCDDATA9 register */
volatile	bit	SEG0COM3	@ ((unsigned)&LCDDATA9*8)+0;
volatile	bit	SEG1COM3	@ ((unsigned)&LCDDATA9*8)+1;
volatile	bit	SEG2COM3	@ ((unsigned)&LCDDATA9*8)+2;
volatile	bit	SEG3COM3	@ ((unsigned)&LCDDATA9*8)+3;
volatile	bit	SEG4COM3	@ ((unsigned)&LCDDATA9*8)+4;
volatile	bit	SEG5COM3	@ ((unsigned)&LCDDATA9*8)+5;
volatile	bit	SEG6COM3	@ ((unsigned)&LCDDATA9*8)+6;
volatile	bit	SEG7COM3	@ ((unsigned)&LCDDATA9*8)+7;

/* Definitions for LCDDATA10 register */
volatile	bit	SEG8COM3	@ ((unsigned)&LCDDATA10*8)+0;
volatile	bit	SEG9COM3	@ ((unsigned)&LCDDATA10*8)+1;
volatile	bit	SEG10COM3	@ ((unsigned)&LCDDATA10*8)+2;
volatile	bit	SEG11COM3	@ ((unsigned)&LCDDATA10*8)+3;
volatile	bit	SEG12COM3	@ ((unsigned)&LCDDATA10*8)+4;
volatile	bit	SEG13COM3	@ ((unsigned)&LCDDATA10*8)+5;
volatile	bit	SEG14COM3	@ ((unsigned)&LCDDATA10*8)+6;
volatile	bit	SEG15COM3	@ ((unsigned)&LCDDATA10*8)+7;

/* Definitions for LCDDATA11 register */
volatile	bit	SEG16COM3	@ ((unsigned)&LCDDATA11*8)+0;
volatile	bit	SEG17COM3	@ ((unsigned)&LCDDATA11*8)+1;
volatile	bit	SEG18COM3	@ ((unsigned)&LCDDATA11*8)+2;
volatile	bit	SEG19COM3	@ ((unsigned)&LCDDATA11*8)+3;
volatile	bit	SEG20COM3	@ ((unsigned)&LCDDATA11*8)+4;
volatile	bit	SEG21COM3	@ ((unsigned)&LCDDATA11*8)+5;
volatile	bit	SEG22COM3	@ ((unsigned)&LCDDATA11*8)+6;
volatile	bit	SEG23COM3	@ ((unsigned)&LCDDATA11*8)+7;

/* Definitions for LCDSE0 register */
volatile	bit	SE0		@ ((unsigned)&LCDSE0*8)+0;
volatile	bit	SE1		@ ((unsigned)&LCDSE0*8)+1;
volatile	bit	SE2		@ ((unsigned)&LCDSE0*8)+2;
volatile	bit	SE3		@ ((unsigned)&LCDSE0*8)+3;
volatile	bit	SE4		@ ((unsigned)&LCDSE0*8)+4;
volatile	bit	SE5		@ ((unsigned)&LCDSE0*8)+5;
volatile	bit	SE6		@ ((unsigned)&LCDSE0*8)+6;
volatile	bit	SE7		@ ((unsigned)&LCDSE0*8)+7;

/* Definitions for LCDSE1 register */
volatile	bit	SE8		@ ((unsigned)&LCDSE1*8)+0;
volatile	bit	SE9		@ ((unsigned)&LCDSE1*8)+1;
volatile	bit	SE10		@ ((unsigned)&LCDSE1*8)+2;
volatile	bit	SE11		@ ((unsigned)&LCDSE1*8)+3;
volatile	bit	SE12		@ ((unsigned)&LCDSE1*8)+4;
volatile	bit	SE13		@ ((unsigned)&LCDSE1*8)+5;
volatile	bit	SE14		@ ((unsigned)&LCDSE1*8)+6;
volatile	bit	SE15		@ ((unsigned)&LCDSE1*8)+7;

/* Definitions for LCDSE2 register */
volatile	bit	SE16		@ ((unsigned)&LCDSE2*8)+0;
volatile	bit	SE17		@ ((unsigned)&LCDSE2*8)+1;
volatile	bit	SE18		@ ((unsigned)&LCDSE2*8)+2;
volatile	bit	SE19		@ ((unsigned)&LCDSE2*8)+3;
volatile	bit	SE20		@ ((unsigned)&LCDSE2*8)+4;
volatile	bit	SE21		@ ((unsigned)&LCDSE2*8)+5;
volatile	bit	SE22		@ ((unsigned)&LCDSE2*8)+6;
volatile	bit	SE23		@ ((unsigned)&LCDSE2*8)+7;

/* Definitions for TRISF register */
volatile       bit	TRISF0		@ ((unsigned)&TRISF*8)+0;
volatile       bit	TRISF1		@ ((unsigned)&TRISF*8)+1;
volatile       bit	TRISF2		@ ((unsigned)&TRISF*8)+2;
volatile       bit	TRISF3		@ ((unsigned)&TRISF*8)+3;
volatile       bit	TRISF4		@ ((unsigned)&TRISF*8)+4;
volatile       bit	TRISF5		@ ((unsigned)&TRISF*8)+5;
volatile       bit	TRISF6		@ ((unsigned)&TRISF*8)+6;
volatile       bit	TRISF7		@ ((unsigned)&TRISF*8)+7;

/* Definitions for TRISG register */
volatile       bit	TRISG0		@ ((unsigned)&TRISG*8)+0;
volatile       bit	TRISG1		@ ((unsigned)&TRISG*8)+1;
volatile       bit	TRISG2		@ ((unsigned)&TRISG*8)+2;
volatile       bit	TRISG3		@ ((unsigned)&TRISG*8)+3;
volatile       bit	TRISG4		@ ((unsigned)&TRISG*8)+4;
volatile       bit	TRISG5		@ ((unsigned)&TRISG*8)+5;

/* Definitions for PORTF register */
volatile       bit	RF0		@ ((unsigned)&PORTF*8)+0;
volatile       bit	RF1		@ ((unsigned)&PORTF*8)+1;
volatile       bit	RF2		@ ((unsigned)&PORTF*8)+2;
volatile       bit	RF3		@ ((unsigned)&PORTF*8)+3;
volatile       bit	RF4		@ ((unsigned)&PORTF*8)+4;
volatile       bit	RF5		@ ((unsigned)&PORTF*8)+5;
volatile       bit	RF6		@ ((unsigned)&PORTF*8)+6;
volatile       bit	RF7		@ ((unsigned)&PORTF*8)+7;

/* Definitions for PORTG register */
volatile       bit	RG0		@ ((unsigned)&PORTG*8)+0;
volatile       bit	RG1		@ ((unsigned)&PORTG*8)+1;
volatile       bit	RG2		@ ((unsigned)&PORTG*8)+2;
volatile       bit	RG3		@ ((unsigned)&PORTG*8)+3;
volatile       bit	RG4		@ ((unsigned)&PORTG*8)+4;
volatile       bit	RG5		@ ((unsigned)&PORTG*8)+5;

/* Definitions for EECON1 register */
volatile       bit	RD		@ ((unsigned)&EECON1*8)+0;
volatile       bit	WR		@ ((unsigned)&EECON1*8)+1;
volatile       bit	WREN		@ ((unsigned)&EECON1*8)+2;
volatile       bit	WRERR		@ ((unsigned)&EECON1*8)+3;
volatile       bit	EEPGD		@ ((unsigned)&EECON1*8)+7;

/* Definitions for LCDDATA12 register */
volatile	bit	SEG24COM0	@ ((unsigned)&LCDDATA12*8)+0;
volatile	bit	SEG25COM0	@ ((unsigned)&LCDDATA12*8)+1;
volatile	bit	SEG26COM0	@ ((unsigned)&LCDDATA12*8)+2;
volatile	bit	SEG27COM0	@ ((unsigned)&LCDDATA12*8)+3;
volatile	bit	SEG28COM0	@ ((unsigned)&LCDDATA12*8)+4;
volatile	bit	SEG29COM0	@ ((unsigned)&LCDDATA12*8)+5;
volatile	bit	SEG30COM0	@ ((unsigned)&LCDDATA12*8)+6;
volatile	bit	SEG31COM0	@ ((unsigned)&LCDDATA12*8)+7;

/* Definitions for LCDDATA13 register */
volatile	bit	SEG32COM0	@ ((unsigned)&LCDDATA13*8)+0;
volatile	bit	SEG33COM0	@ ((unsigned)&LCDDATA13*8)+1;
volatile	bit	SEG34COM0	@ ((unsigned)&LCDDATA13*8)+2;
volatile	bit	SEG35COM0	@ ((unsigned)&LCDDATA13*8)+3;
volatile	bit	SEG36COM0	@ ((unsigned)&LCDDATA13*8)+4;
volatile	bit	SEG37COM0	@ ((unsigned)&LCDDATA13*8)+5;
volatile	bit	SEG38COM0	@ ((unsigned)&LCDDATA13*8)+6;
volatile	bit	SEG39COM0	@ ((unsigned)&LCDDATA13*8)+7;

/* Definitions for LCDDATA14 register */
volatile	bit	SEG40COM0	@ ((unsigned)&LCDDATA14*8)+0;
volatile	bit	SEG41COM0	@ ((unsigned)&LCDDATA14*8)+1;

/* Definitions for LCDDATA15 register */
volatile	bit	SEG24COM1	@ ((unsigned)&LCDDATA15*8)+0;
volatile	bit	SEG25COM1	@ ((unsigned)&LCDDATA15*8)+1;
volatile	bit	SEG26COM1	@ ((unsigned)&LCDDATA15*8)+2;
volatile	bit	SEG27COM1	@ ((unsigned)&LCDDATA15*8)+3;
volatile	bit	SEG28COM1	@ ((unsigned)&LCDDATA15*8)+4;
volatile	bit	SEG29COM1	@ ((unsigned)&LCDDATA15*8)+5;
volatile	bit	SEG30COM1	@ ((unsigned)&LCDDATA15*8)+6;
volatile	bit	SEG31COM1	@ ((unsigned)&LCDDATA15*8)+7;

/* Definitions for LCDDATA16 register */
volatile	bit	SEG32COM1	@ ((unsigned)&LCDDATA16*8)+0;
volatile	bit	SEG33COM1	@ ((unsigned)&LCDDATA16*8)+1;
volatile	bit	SEG34COM1	@ ((unsigned)&LCDDATA16*8)+2;
volatile	bit	SEG35COM1	@ ((unsigned)&LCDDATA16*8)+3;
volatile	bit	SEG36COM1	@ ((unsigned)&LCDDATA16*8)+4;
volatile	bit	SEG37COM1	@ ((unsigned)&LCDDATA16*8)+5;
volatile	bit	SEG38COM1	@ ((unsigned)&LCDDATA16*8)+6;
volatile	bit	SEG39COM1	@ ((unsigned)&LCDDATA16*8)+7;

/* Definitions for LCDDATA17 register */
volatile	bit	SEG40COM1	@ ((unsigned)&LCDDATA17*8)+0;
volatile	bit	SEG41COM1	@ ((unsigned)&LCDDATA17*8)+1;

/* Definitions for LCDDATA18 register */
volatile	bit	SEG24COM2	@ ((unsigned)&LCDDATA18*8)+0;
volatile	bit	SEG25COM2	@ ((unsigned)&LCDDATA18*8)+1;
volatile	bit	SEG26COM2	@ ((unsigned)&LCDDATA18*8)+2;
volatile	bit	SEG27COM2	@ ((unsigned)&LCDDATA18*8)+3;
volatile	bit	SEG28COM2	@ ((unsigned)&LCDDATA18*8)+4;
volatile	bit	SEG29COM2	@ ((unsigned)&LCDDATA18*8)+5;
volatile	bit	SEG30COM2	@ ((unsigned)&LCDDATA18*8)+6;
volatile	bit	SEG31COM2	@ ((unsigned)&LCDDATA18*8)+7;

/* Definitions for LCDDATA19 register */
volatile	bit	SEG32COM2	@ ((unsigned)&LCDDATA19*8)+0;
volatile	bit	SEG33COM2	@ ((unsigned)&LCDDATA19*8)+1;
volatile	bit	SEG34COM2	@ ((unsigned)&LCDDATA19*8)+2;
volatile	bit	SEG35COM2	@ ((unsigned)&LCDDATA19*8)+3;
volatile	bit	SEG36COM2	@ ((unsigned)&LCDDATA19*8)+4;
volatile	bit	SEG37COM2	@ ((unsigned)&LCDDATA19*8)+5;
volatile	bit	SEG38COM2	@ ((unsigned)&LCDDATA19*8)+6;
volatile	bit	SEG39COM2	@ ((unsigned)&LCDDATA19*8)+7;

/* Definitions for LCDDATA20 register */
volatile	bit	SEG40COM2	@ ((unsigned)&LCDDATA20*8)+0;
volatile	bit	SEG41COM2	@ ((unsigned)&LCDDATA20*8)+1;

/* Definitions for LCDDATA21 register */
volatile	bit	SEG24COM3	@ ((unsigned)&LCDDATA21*8)+0;
volatile	bit	SEG25COM3	@ ((unsigned)&LCDDATA21*8)+1;
volatile	bit	SEG26COM3	@ ((unsigned)&LCDDATA21*8)+2;
volatile	bit	SEG27COM3	@ ((unsigned)&LCDDATA21*8)+3;
volatile	bit	SEG28COM3	@ ((unsigned)&LCDDATA21*8)+4;
volatile	bit	SEG29COM3	@ ((unsigned)&LCDDATA21*8)+5;
volatile	bit	SEG30COM3	@ ((unsigned)&LCDDATA21*8)+6;
volatile	bit	SEG31COM3	@ ((unsigned)&LCDDATA21*8)+7;

/* Definitions for LCDDATA22 register */
volatile	bit	SEG32COM3	@ ((unsigned)&LCDDATA22*8)+0;
volatile	bit	SEG33COM3	@ ((unsigned)&LCDDATA22*8)+1;
volatile	bit	SEG34COM3	@ ((unsigned)&LCDDATA22*8)+2;
volatile	bit	SEG35COM3	@ ((unsigned)&LCDDATA22*8)+3;
volatile	bit	SEG36COM3	@ ((unsigned)&LCDDATA22*8)+4;
volatile	bit	SEG37COM3	@ ((unsigned)&LCDDATA22*8)+5;
volatile	bit	SEG38COM3	@ ((unsigned)&LCDDATA22*8)+6;
volatile	bit	SEG39COM3	@ ((unsigned)&LCDDATA22*8)+7;

/* Definitions for LCDDATA23 register */
volatile	bit	SEG40COM3	@ ((unsigned)&LCDDATA23*8)+0;
volatile	bit	SEG41COM3	@ ((unsigned)&LCDDATA23*8)+1;

/* Definitions for LCDSE3 register */
volatile	bit	SE24		@ ((unsigned)&LCDSE3*8)+0;
volatile	bit	SE25		@ ((unsigned)&LCDSE3*8)+1;
volatile	bit	SE26		@ ((unsigned)&LCDSE3*8)+2;
volatile	bit	SE27		@ ((unsigned)&LCDSE3*8)+3;
volatile	bit	SE28		@ ((unsigned)&LCDSE3*8)+4;
volatile	bit	SE29		@ ((unsigned)&LCDSE3*8)+5;
volatile	bit	SE30		@ ((unsigned)&LCDSE3*8)+6;
volatile	bit	SE31		@ ((unsigned)&LCDSE3*8)+7;

/* Definitions for LCDSE4 register */
volatile	bit	SE32		@ ((unsigned)&LCDSE4*8)+0;
volatile	bit	SE33		@ ((unsigned)&LCDSE4*8)+1;
volatile	bit	SE34		@ ((unsigned)&LCDSE4*8)+2;
volatile	bit	SE35		@ ((unsigned)&LCDSE4*8)+3;
volatile	bit	SE36		@ ((unsigned)&LCDSE4*8)+4;
volatile	bit	SE37		@ ((unsigned)&LCDSE4*8)+5;
volatile	bit	SE38		@ ((unsigned)&LCDSE4*8)+6;
volatile	bit	SE39		@ ((unsigned)&LCDSE4*8)+7;

/* Definitions for LCDSE5 register */
volatile	bit	SE40		@ ((unsigned)&LCDSE5*8)+0;
volatile	bit	SE41		@ ((unsigned)&LCDSE5*8)+1;

#define CONFIG_ADDR	0x2007

#endif
