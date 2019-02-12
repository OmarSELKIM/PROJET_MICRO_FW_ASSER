
#ifndef	_HTC_H_
#warning Header file pic16f81x.h included directly. Use #include <htc.h> instead.
#endif

/*	Header file for the Microchip
 *	PIC16F818 chip
 *	PIC16F819 chip
 *	Microcontrollers */ 

volatile       unsigned char INDF  	@ 0x00;
volatile       unsigned char TMR0  	@ 0x01;
volatile       unsigned char PCL  	@ 0x02;
volatile       unsigned char STATUS  	@ 0x03;
volatile	unsigned char	FSR  	@ 0x04;
volatile       unsigned char PORTA  	@ 0x05;
volatile       unsigned char PORTB  	@ 0x06;
volatile       unsigned char PCLATH  	@ 0x0A;
volatile       unsigned char INTCON  	@ 0x0B;
volatile       unsigned char PIR1  	@ 0x0C;
volatile       unsigned char PIR2  	@ 0x0D;
volatile       unsigned char TMR1L  	@ 0x0E;
volatile       unsigned char TMR1H  	@ 0x0F;
volatile       unsigned char T1CON  	@ 0x10;
volatile       unsigned char TMR2  	@ 0x11;
volatile       unsigned char T2CON  	@ 0x12;
volatile       unsigned char SSPBUF  	@ 0x13;
volatile       unsigned char SSPCON  	@ 0x14;
volatile       unsigned char CCPR1L  	@ 0x15;
volatile       unsigned char CCPR1H  	@ 0x16;
volatile       unsigned char CCP1CON  	@ 0x17;
volatile       unsigned char ADRESH  	@ 0x1E;
volatile       unsigned char ADCON0  	@ 0x1F;
volatile	unsigned char	OPTION  	@ 0x81;
volatile       unsigned char TRISA  	@ 0x85;
volatile       unsigned char TRISB  	@ 0x86;
volatile	unsigned char	PIE1  	@ 0x8C;
volatile	unsigned char	PIE2  	@ 0x8D;
volatile       unsigned char PCON  	@ 0x8E;
volatile       unsigned char OSCCON  	@ 0x8F;
volatile       unsigned char OSCTUNE  	@ 0x90;
volatile       unsigned char PR2  	@ 0x92;
volatile       unsigned char SSPADD  	@ 0x93;
volatile       unsigned char SSPSTAT  	@ 0x94;
volatile       unsigned char ADRESL  	@ 0x9E;
volatile       unsigned char ADCON1  	@ 0x9F;
volatile       unsigned char EEDATA  	@ 0x10C;
volatile       unsigned char EEADR  	@ 0x10D;
volatile       unsigned char EEDATH  	@ 0x10E;
volatile       unsigned char EEADRH  	@ 0x10F;
volatile       unsigned char EECON1  	@ 0x18C;
volatile       unsigned char EECON2  	@ 0x18D;

/* STATUS Bits */
volatile bit	CARRY	@ (unsigned)&STATUS*8+0;
volatile bit	DC	@ (unsigned)&STATUS*8+1;
volatile bit	ZERO	@ (unsigned)&STATUS*8+2;
volatile bit	PD	@ (unsigned)&STATUS*8+3;
volatile bit	TO	@ (unsigned)&STATUS*8+4;
volatile bit	RP0	@ (unsigned)&STATUS*8+5;
volatile bit	RP1	@ (unsigned)&STATUS*8+6;
volatile bit	IRP	@ (unsigned)&STATUS*8+7;

/* PORTA Bits */
volatile bit	RA0	@ (unsigned)&PORTA*8+0;
volatile bit	RA1	@ (unsigned)&PORTA*8+1;
volatile bit	RA2	@ (unsigned)&PORTA*8+2;
volatile bit	RA3	@ (unsigned)&PORTA*8+3;
volatile bit	RA4	@ (unsigned)&PORTA*8+4;
volatile bit	RA5	@ (unsigned)&PORTA*8+5;
volatile bit	RA6	@ (unsigned)&PORTA*8+6;
volatile bit	RA7	@ (unsigned)&PORTA*8+7;

/* PORTB Bits */
volatile bit	RB0	@ (unsigned)&PORTB*8+0;
volatile bit	RB1	@ (unsigned)&PORTB*8+1;
volatile bit	RB2	@ (unsigned)&PORTB*8+2;
volatile bit	RB3	@ (unsigned)&PORTB*8+3;
volatile bit	RB4	@ (unsigned)&PORTB*8+4;
volatile bit	RB5	@ (unsigned)&PORTB*8+5;
volatile bit	RB6	@ (unsigned)&PORTB*8+6;
volatile bit	RB7	@ (unsigned)&PORTB*8+7;

/* INTCON Bits */
volatile bit	RBIF	@ (unsigned)&INTCON*8+0;
volatile bit	INTF	@ (unsigned)&INTCON*8+1;
volatile bit	TMR0IF	@ (unsigned)&INTCON*8+2;
volatile bit	RBIE	@ (unsigned)&INTCON*8+3;
volatile bit	INTE	@ (unsigned)&INTCON*8+4;
volatile bit	TMR0IE	@ (unsigned)&INTCON*8+5;
volatile bit	PEIE	@ (unsigned)&INTCON*8+6;
volatile bit	GIE	@ (unsigned)&INTCON*8+7;

/* PIR1 Bits */
volatile bit	TMR1IF	@ (unsigned)&PIR1*8+0;
volatile bit	TMR2IF	@ (unsigned)&PIR1*8+1;
volatile bit	CCP1IF	@ (unsigned)&PIR1*8+2;
volatile bit	SSPIF	@ (unsigned)&PIR1*8+3;
volatile bit	ADIF	@ (unsigned)&PIR1*8+6;

/* PIR2 Bits */
volatile bit	EEIF	@ (unsigned)&PIR2*8+4;

/* T1CON Bits */
volatile bit	TMR1ON	@ (unsigned)&T1CON*8+0;
volatile bit	TMR1CS	@ (unsigned)&T1CON*8+1;
volatile bit	T1SYNC	@ (unsigned)&T1CON*8+2;
volatile bit	T1OSCEN	@ (unsigned)&T1CON*8+3;
volatile bit	T1CKPS0	@ (unsigned)&T1CON*8+4;
volatile bit	T1CKPS1	@ (unsigned)&T1CON*8+5;

/* T2CON Bits */
volatile bit	T2CKPS0	@ (unsigned)&T2CON*8+0;
volatile bit	T2CKPS1	@ (unsigned)&T2CON*8+1;
volatile bit	TMR2ON	@ (unsigned)&T2CON*8+2;
volatile bit	TOUTPS0	@ (unsigned)&T2CON*8+3;
volatile bit	TOUTPS1	@ (unsigned)&T2CON*8+4;
volatile bit	TOUTPS2	@ (unsigned)&T2CON*8+5;
volatile bit	TOUTPS3	@ (unsigned)&T2CON*8+6;

/* SSPCON Bits */
volatile bit	SSPM0	@ (unsigned)&SSPCON*8+0;
volatile bit	SSPM1	@ (unsigned)&SSPCON*8+1;
volatile bit	SSPM2	@ (unsigned)&SSPCON*8+2;
volatile bit	SSPM3	@ (unsigned)&SSPCON*8+3;
volatile bit	CKP	@ (unsigned)&SSPCON*8+4;
volatile bit	SSPEN	@ (unsigned)&SSPCON*8+5;
volatile bit	SSPOV	@ (unsigned)&SSPCON*8+6;
volatile bit	WCOL	@ (unsigned)&SSPCON*8+7;

/* CCP1CON Bits */
volatile	bit	CCP1M0	@ (unsigned)&CCP1CON*8+0;
volatile	bit	CCP1M1	@ (unsigned)&CCP1CON*8+1;
volatile	bit	CCP1M2	@ (unsigned)&CCP1CON*8+2;
volatile	bit	CCP1M3	@ (unsigned)&CCP1CON*8+3;
volatile bit	CCP1Y	@ (unsigned)&CCP1CON*8+4;
volatile bit	CCP1X	@ (unsigned)&CCP1CON*8+5;

/* ADCON0 Bits */
volatile bit	ADON	@ (unsigned)&ADCON0*8+0;
volatile bit	GODONE	@ (unsigned)&ADCON0*8+2;
volatile bit	CHS0	@ (unsigned)&ADCON0*8+3;
volatile bit	CHS1	@ (unsigned)&ADCON0*8+4;
volatile bit	CHS2	@ (unsigned)&ADCON0*8+5;
volatile bit	ADCS0	@ (unsigned)&ADCON0*8+6;
volatile bit	ADCS1	@ (unsigned)&ADCON0*8+7;

/* OPTION Bits */
volatile	bit	PS0	@ (unsigned)&OPTION*8+0;
volatile	bit	PS1	@ (unsigned)&OPTION*8+1;
volatile	bit	PS2	@ (unsigned)&OPTION*8+2;
volatile	bit	PSA	@ (unsigned)&OPTION*8+3;
volatile	bit	T0SE	@ (unsigned)&OPTION*8+4;
volatile	bit	T0CS	@ (unsigned)&OPTION*8+5;
volatile	bit	INTEDG	@ (unsigned)&OPTION*8+6;
volatile	bit	RBPU	@ (unsigned)&OPTION*8+7;

/* TRISA Bits */
volatile bit	TRISA0	@ (unsigned)&TRISA*8+0;
volatile bit	TRISA1	@ (unsigned)&TRISA*8+1;
volatile bit	TRISA2	@ (unsigned)&TRISA*8+2;
volatile bit	TRISA3	@ (unsigned)&TRISA*8+3;
volatile bit	TRISA4	@ (unsigned)&TRISA*8+4;
volatile bit	TRISA5	@ (unsigned)&TRISA*8+5;
volatile bit	TRISA6	@ (unsigned)&TRISA*8+6;
volatile bit	TRISA7	@ (unsigned)&TRISA*8+7;

/* TRISB Bits */
volatile bit	TRISB0	@ (unsigned)&TRISB*8+0;
volatile bit	TRISB1	@ (unsigned)&TRISB*8+1;
volatile bit	TRISB2	@ (unsigned)&TRISB*8+2;
volatile bit	TRISB3	@ (unsigned)&TRISB*8+3;
volatile bit	TRISB4	@ (unsigned)&TRISB*8+4;
volatile bit	TRISB5	@ (unsigned)&TRISB*8+5;
volatile bit	TRISB6	@ (unsigned)&TRISB*8+6;
volatile bit	TRISB7	@ (unsigned)&TRISB*8+7;

/* PIE1 Bits */
volatile	bit	TMR1IE	@ (unsigned)&PIE1*8+0;
volatile	bit	TMR2IE	@ (unsigned)&PIE1*8+1;
volatile	bit	CCP1IE	@ (unsigned)&PIE1*8+2;
volatile	bit	SSPIE	@ (unsigned)&PIE1*8+3;
volatile	bit	ADIE	@ (unsigned)&PIE1*8+6;

/* PIE2 Bits */
volatile	bit	EEIE	@ (unsigned)&PIE2*8+4;

/* PCON Bits */
volatile bit	BOR	@ (unsigned)&PCON*8+0;
volatile bit	POR	@ (unsigned)&PCON*8+1;

/* OSCCON Bits */
volatile bit	FLTS	@ (unsigned)&OSCCON*8+2;
//alternate definition
volatile bit	IOFS	@ (unsigned)&OSCCON*8+2;
volatile bit	IRCF0	@ (unsigned)&OSCCON*8+4;
volatile bit	IRCF1	@ (unsigned)&OSCCON*8+5;
volatile bit	IRCF2	@ (unsigned)&OSCCON*8+6;

/* OSCTUNE Bits */
volatile	bit	TUN0	@ (unsigned)&OSCTUNE*8+0;
volatile	bit	TUN1	@ (unsigned)&OSCTUNE*8+1;
volatile	bit	TUN2	@ (unsigned)&OSCTUNE*8+2;
volatile	bit	TUN3	@ (unsigned)&OSCTUNE*8+3;
volatile	bit	TUN4	@ (unsigned)&OSCTUNE*8+4;
volatile	bit	TUN5	@ (unsigned)&OSCTUNE*8+5;

/* SSPSTAT Bits */
volatile bit	BF	@ (unsigned)&SSPSTAT*8+0;
volatile bit	UA	@ (unsigned)&SSPSTAT*8+1;
volatile bit	RW	@ (unsigned)&SSPSTAT*8+2;
volatile bit	START	@ (unsigned)&SSPSTAT*8+3;
volatile bit	STOP	@ (unsigned)&SSPSTAT*8+4;
volatile bit	DA	@ (unsigned)&SSPSTAT*8+5;
volatile	bit	CKE	@ (unsigned)&SSPSTAT*8+6;
volatile	bit	SMP	@ (unsigned)&SSPSTAT*8+7;

/* ADCON1 Bits */
volatile	bit	PCFG0	@ (unsigned)&ADCON1*8+0;
volatile	bit	PCFG1	@ (unsigned)&ADCON1*8+1;
volatile	bit	PCFG2	@ (unsigned)&ADCON1*8+2;
volatile	bit	PCFG3	@ (unsigned)&ADCON1*8+3;
volatile	bit	ADCS2	@ (unsigned)&ADCON1*8+6;
volatile	bit	ADFM	@ (unsigned)&ADCON1*8+7;

/* EECON1 Bits */
volatile bit	RD	@ (unsigned)&EECON1*8+0;
volatile bit	WR	@ (unsigned)&EECON1*8+1;
volatile bit	WREN	@ (unsigned)&EECON1*8+2;
volatile bit	WRERR	@ (unsigned)&EECON1*8+3;
volatile bit	FREE	@ (unsigned)&EECON1*8+4;
volatile bit	EEPGD	@ (unsigned)&EECON1*8+7;


#define CONFIG_ADDR    	0x2007 

