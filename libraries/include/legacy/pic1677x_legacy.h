
#ifndef	_HTC_H_
#warning Header file pic1677x.h included directly. Use #include <htc.h> instead.
#endif

/*
 *	Header file for the Microchip 
 *	PIC 16C770 chip
 *	PIC 16C771 chip
 *	PIC 16C717 chip
 *	PIC 16C773 chip
 *	PIC 16C774 chip
 *	PIC 16C745 chip
 *	PIC 16C765 chip
 *	Midrange Microcontrollers
 */

volatile unsigned char	INDF	@ 0x00;
volatile unsigned char	TMR0	@ 0x01;
volatile unsigned char	PCL	@ 0x02;
volatile unsigned char	STATUS	@ 0x03;
volatile	unsigned char	FSR	@ 0x04;
volatile unsigned char	PORTA	@ 0x05;
volatile unsigned char	PORTB	@ 0x06;
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
volatile unsigned char	PORTC	@ 0x07;
#endif
#if defined(_16C774) || defined(_16C765)
volatile unsigned char	PORTD	@ 0x08;
volatile unsigned char	PORTE	@ 0x09;
#endif
volatile	unsigned char	PCLATH	@ 0x0A;
volatile unsigned char	INTCON	@ 0x0B;
volatile unsigned char	PIR1	@ 0x0C;
volatile unsigned char	PIR2	@ 0x0D;
volatile unsigned char	TMR1L	@ 0x0E;
volatile unsigned char	TMR1H	@ 0x0F;
volatile unsigned char	T1CON	@ 0x10;
volatile unsigned char	TMR2	@ 0x11;
volatile unsigned char	T2CON	@ 0x12;
#if !defined(_16C745) && !defined(_16C765)
volatile unsigned char	SSPBUF	@ 0x13;
volatile unsigned char	SSPCON	@ 0x14;
#endif
volatile unsigned char	CCPR1L	@ 0x15;
volatile unsigned char	CCPR1H	@ 0x16;
volatile unsigned char	CCP1CON	@ 0x17;
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
volatile unsigned char	RCSTA	@ 0x18;
volatile unsigned char	TXREG	@ 0x19;
volatile unsigned char	RCREG	@ 0x1A;
volatile unsigned char	CCPR2L	@ 0x1B;
volatile unsigned char	CCPR2H	@ 0x1C;
volatile unsigned char	CCP2CON	@ 0x1D;
#endif
volatile unsigned char	ADRESH	@ 0x1E;
volatile unsigned char	ADCON0	@ 0x1F;

volatile	unsigned char	     	OPTION	@ 0x81;
volatile	unsigned char	     	TRISA	@ 0x85;
volatile	unsigned char	     	TRISB	@ 0x86;
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
volatile	unsigned char	     	TRISC	@ 0x87;
#endif
#if defined(_16C774) || defined(_16C765)
volatile	unsigned char	     	TRISD	@ 0x88;
volatile	unsigned char	     	TRISE	@ 0x89;
#endif
volatile unsigned char      	PIE1	@ 0x8C;
volatile unsigned char      	PIE2	@ 0x8D;
volatile unsigned char      	PCON	@ 0x8E;
#if !defined(_16C745) && !defined(_16C765)
volatile unsigned char      	SSPCON2	@ 0x91;
#endif
volatile unsigned char      	PR2	@ 0x92;
#if !defined(_16C745) && !defined(_16C765)
volatile unsigned char      	SSPADD	@ 0x93;
volatile unsigned char      	SSPSTAT	@ 0x94;
#if defined(_16C770) || defined(_16C771) || defined(_16C717)
volatile unsigned char      	WPUB	@ 0x95;
volatile unsigned char      	IOCB	@ 0x96;
volatile unsigned char      	P1DEL	@ 0x97;
#endif
#endif
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
volatile unsigned char      	TXSTA	@ 0x98;
volatile unsigned char      	SPBRG	@ 0x99;
#endif
#if !defined(_16C745) && !defined(_16C765)
volatile unsigned char      	REFCON	@ 0x9B;
volatile unsigned char      	LVDCON	@ 0x9C;
#if defined(_16C770) || defined(_16C771) || defined(_16C717)
volatile unsigned char      	ANSEL	@ 0x9D;
#endif
volatile unsigned char      	ADRESL	@ 0x9E;
#endif
volatile unsigned char      	ADCON1	@ 0x9F;

#if defined(_16C770) || defined(_16C771) || defined(_16C717)
volatile	unsigned char	     	PMDATL	@ 0x10C;
volatile	unsigned char	     	PMADRL	@ 0x10D;
volatile	unsigned char	     	PMDATH	@ 0x10E;
volatile	unsigned char	     	PMADRH	@ 0x10F;
#endif
#if defined(_16C770)
volatile unsigned char	PMCON1	@ 0x18C;
volatile bit RD			@ ((unsigned)&PMCON1*8)+0;
#endif

#if defined(_16C745) || defined(_16C765)
/* USB Registers */
volatile unsigned char      	UIR	@ 0x190;
volatile unsigned char      	UIE	@ 0x191;
volatile unsigned char      	UEIR	@ 0x192;
volatile unsigned char      	UEIE	@ 0x193;
volatile unsigned char      	USTAT	@ 0x194;
volatile unsigned char      	UCTRL	@ 0x195;
volatile unsigned char      	UADDR	@ 0x196;
volatile unsigned char      	USWSTAT	@ 0x197;
volatile unsigned char      	UEP0	@ 0x198;
volatile unsigned char      	UEP1	@ 0x199;
volatile unsigned char      	UEP2	@ 0x19A;

volatile unsigned char      	BD0OST @ 0x1A0;
volatile unsigned char      	BD1OST @ 0x1A8;
volatile unsigned char      	BD2OST @ 0x1B0;

volatile unsigned char      	BD0IST @ 0x1A4;
volatile unsigned char      	BD1IST @ 0x1AC;
volatile unsigned char      	BD2IST @ 0x1B4;

volatile unsigned char      	BD0OBC	@ 0x1A1;
volatile unsigned char      	BD1OBC	@ 0x1A9;
volatile unsigned char      	BD2OBC	@ 0x1B1;

volatile unsigned char      	BD0IBC	@ 0x1A5;
volatile unsigned char      	BD1IBC	@ 0x1AD;
volatile unsigned char      	BD2IBC	@ 0x1B5;

volatile unsigned char *      	BD0OAL	@ 0x1A2;
volatile unsigned char *     	BD1OAL	@ 0x1AA;
volatile unsigned char *    	BD2OAL	@ 0x1B2;

volatile unsigned char *   	BD0IAL	@ 0x1A6;
volatile unsigned char *  	BD1IAL	@ 0x1AE;
volatile unsigned char * 	BD2IAL	@ 0x1B6;

/* USB Dual Port Memory buffer */
extern volatile unsigned char       USBMEM[40]	@ 0x1B8;

#endif


/* 	TMR0 bits	*/
volatile	bit	TMR07	@ (unsigned)&TMR0*8+7;
volatile	bit	TMR06   @ (unsigned)&TMR0*8+6;
volatile	bit	TMR05   @ (unsigned)&TMR0*8+5;
volatile	bit	TMR04	@ (unsigned)&TMR0*8+4;
volatile	bit	TMR03	@ (unsigned)&TMR0*8+3;
volatile	bit	TMR02   @ (unsigned)&TMR0*8+2;
volatile	bit	TMR01   @ (unsigned)&TMR0*8+1;
volatile	bit	TMR00   @ (unsigned)&TMR0*8+0;

/*	PCL bits	*/
volatile	bit	PCL7	@ (unsigned)&PCL*8+7;
volatile	bit	PCL6   	@ (unsigned)&PCL*8+6;
volatile	bit	PCL5   	@ (unsigned)&PCL*8+5;
volatile	bit	PCL4	@ (unsigned)&PCL*8+4;
volatile	bit	PCL3	@ (unsigned)&PCL*8+3;
volatile	bit	PCL2	@ (unsigned)&PCL*8+2;
volatile	bit	PCL1   	@ (unsigned)&PCL*8+1;
volatile	bit	PCL0  	@ (unsigned)&PCL*8+0;

/*	STATUS bits	*/
volatile bit	IRP     @ (unsigned)&STATUS*8+7;
volatile bit	RP1     @ (unsigned)&STATUS*8+6;
volatile bit	RP0     @ (unsigned)&STATUS*8+5;
volatile bit	TO	@ (unsigned)&STATUS*8+4;
volatile bit	PD	@ (unsigned)&STATUS*8+3;
volatile bit	ZERO    @ (unsigned)&STATUS*8+2;
volatile bit	DC      @ (unsigned)&STATUS*8+1;
volatile bit	CARRY   @ (unsigned)&STATUS*8+0;

/*      PORTA bits      */
#if defined(_16C770) || defined(_16C771) || defined(_16C717)
volatile bit	RA7     @ (unsigned)&PORTA*8+7;
volatile bit	RA6     @ (unsigned)&PORTA*8+6;
#endif
#if defined(_16C770) || defined(_16C771) || defined(_16C717) || defined(_16C774) || defined(_16C745) || defined(_16C765)
volatile bit	RA5     @ (unsigned)&PORTA*8+5;
#endif
volatile bit	RA4     @ (unsigned)&PORTA*8+4;
volatile bit	RA3     @ (unsigned)&PORTA*8+3;
volatile bit	RA2     @ (unsigned)&PORTA*8+2;
volatile bit	RA1     @ (unsigned)&PORTA*8+1;
volatile bit	RA0     @ (unsigned)&PORTA*8+0;

/*      PORTB bits      */
volatile bit	RB7     @ (unsigned)&PORTB*8+7;
volatile bit	RB6     @ (unsigned)&PORTB*8+6;
volatile bit	RB5     @ (unsigned)&PORTB*8+5;
volatile bit	RB4     @ (unsigned)&PORTB*8+4;
volatile bit	RB3     @ (unsigned)&PORTB*8+3;
volatile bit	RB2     @ (unsigned)&PORTB*8+2;
volatile bit	RB1     @ (unsigned)&PORTB*8+1;
volatile bit	RB0     @ (unsigned)&PORTB*8+0;

/*      PORTC bits      */
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
volatile bit	RC7     @ (unsigned)&PORTC*8+7;
volatile bit	RC6     @ (unsigned)&PORTC*8+6;
#if !defined(_16C745) && !defined(_16C765)
volatile bit	RC5     @ (unsigned)&PORTC*8+5;
volatile bit	RC4     @ (unsigned)&PORTC*8+4;
volatile bit	RC3     @ (unsigned)&PORTC*8+3;
#endif
volatile bit	RC2     @ (unsigned)&PORTC*8+2;
volatile bit	RC1     @ (unsigned)&PORTC*8+1;
volatile bit	RC0     @ (unsigned)&PORTC*8+0;
#endif

#if defined(_16C774) || defined(_16C765)
/*      PORTD bits      */
volatile bit	RD7     @ (unsigned)&PORTD*8+7;
volatile bit	RD6     @ (unsigned)&PORTD*8+6;
volatile bit	RD5     @ (unsigned)&PORTD*8+5;
volatile bit	RD4     @ (unsigned)&PORTD*8+4;
volatile bit	RD3     @ (unsigned)&PORTD*8+3;
volatile bit	RD2     @ (unsigned)&PORTD*8+2;
volatile bit	RD1     @ (unsigned)&PORTD*8+1;
volatile bit	RD0     @ (unsigned)&PORTD*8+0;

/*      PORTE bits      */
volatile bit      RE2     @ (unsigned)&PORTE*8+2;
volatile bit      RE1     @ (unsigned)&PORTE*8+1;
volatile bit      RE0     @ (unsigned)&PORTE*8+0;
#endif

/*	INTCON bits	*/
volatile bit	GIE	@ (unsigned)&INTCON*8+7;
volatile bit	PEIE	@ (unsigned)&INTCON*8+6;
volatile bit	T0IE	@ (unsigned)&INTCON*8+5;
volatile bit	INTE	@ (unsigned)&INTCON*8+4;
volatile bit	RBIE	@ (unsigned)&INTCON*8+3;
volatile bit	T0IF	@ (unsigned)&INTCON*8+2;
volatile bit	INTF	@ (unsigned)&INTCON*8+1;
volatile bit	RBIF	@ (unsigned)&INTCON*8+0;

/*	PIR1 bits	*/
#if defined(_16C774) || defined(_16C765)
volatile bit	PSPIF	@ (unsigned)&PIR1*8+7;
#endif
volatile bit	ADIF	@ (unsigned)&PIR1*8+6;
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
volatile bit	RCIF	@ (unsigned)&PIR1*8+5;
volatile bit	TXIF	@ (unsigned)&PIR1*8+4;
#endif
#if defined(_16C745) || defined(_16C765)
volatile bit	USBIF	@ (unsigned)&PIR1*8+3;
#endif
#if !defined(_16C745) && !defined(_16C765)
volatile bit	SSPIF	@ (unsigned)&PIR1*8+3;
#endif
volatile bit	CCP1IF	@ (unsigned)&PIR1*8+2;
volatile bit	TMR2IF	@ (unsigned)&PIR1*8+1;
volatile bit	TMR1IF	@ (unsigned)&PIR1*8+0;

/*	PIR2 bits	*/
#if !defined(_16C745) && !defined(_16C765)
volatile bit	LVDIF	@ (unsigned)&PIR2*8+7;
volatile bit	BCLIF	@ (unsigned)&PIR2*8+3;
#endif
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
volatile bit	CCP2IF	@ (unsigned)&PIR2*8+0;
#endif

/*	TMR1L bits	*/
volatile	bit	TMR1L7		@ (unsigned)&TMR1L*8+7;
volatile	bit	TMR1L6  	@ (unsigned)&TMR1L*8+6;
volatile	bit	TMR1L5  	@ (unsigned)&TMR1L*8+5;
volatile	bit	TMR1L4		@ (unsigned)&TMR1L*8+4;
volatile	bit	TMR1L3		@ (unsigned)&TMR1L*8+3;
volatile	bit	TMR1L2  	@ (unsigned)&TMR1L*8+2;
volatile	bit	TMR1L1  	@ (unsigned)&TMR1L*8+1;
volatile	bit	TMR1L0  	@ (unsigned)&TMR1L*8+0;

/*	TMR1H bits	*/
volatile	bit	TMR1H7		@ (unsigned)&TMR1H*8+7;
volatile	bit	TMR1H6  	@ (unsigned)&TMR1H*8+6;
volatile	bit	TMR1H5  	@ (unsigned)&TMR1H*8+5;
volatile	bit	TMR1H4		@ (unsigned)&TMR1H*8+4;
volatile	bit	TMR1H3		@ (unsigned)&TMR1H*8+3;
volatile	bit	TMR1H2  	@ (unsigned)&TMR1H*8+2;
volatile	bit	TMR1H1  	@ (unsigned)&TMR1H*8+1;
volatile	bit	TMR1H0  	@ (unsigned)&TMR1H*8+0;

/* 	TMR2 bits	*/
volatile	bit	TMR27	@ (unsigned)&TMR2*8+7;
volatile	bit	TMR26   @ (unsigned)&TMR2*8+6;
volatile	bit	TMR25   @ (unsigned)&TMR2*8+5;
volatile	bit	TMR24	@ (unsigned)&TMR2*8+4;
volatile	bit	TMR23	@ (unsigned)&TMR2*8+3;
volatile	bit	TMR22   @ (unsigned)&TMR2*8+2;
volatile	bit	TMR21   @ (unsigned)&TMR2*8+1;
volatile	bit	TMR20   @ (unsigned)&TMR2*8+0;

/*	T1CON bits	*/
volatile bit	T1CKPS1	@ (unsigned)&T1CON*8+5;
volatile bit	T1CKPS0	@ (unsigned)&T1CON*8+4;
volatile bit	T1OSCEN	@ (unsigned)&T1CON*8+3;
volatile bit	T1SYNC 	@ (unsigned)&T1CON*8+2;
volatile bit	TMR1CS 	@ (unsigned)&T1CON*8+1;
volatile bit	TMR1ON 	@ (unsigned)&T1CON*8+0;

/*	T2CON bits	*/
volatile bit	TOUTPS3	@ (unsigned)&T2CON*8+6;
volatile bit	TOUTPS2	@ (unsigned)&T2CON*8+5;
volatile bit	TOUTPS1	@ (unsigned)&T2CON*8+4;
volatile bit	TOUTPS0	@ (unsigned)&T2CON*8+3;
volatile bit	TMR2ON 	@ (unsigned)&T2CON*8+2;
volatile bit	T2CKPS1	@ (unsigned)&T2CON*8+1;
volatile bit	T2CKPS0	@ (unsigned)&T2CON*8+0;

#if !defined(_16C745) && !defined(_16C765)
/*	SSPBUF bits	*/
volatile bit	SSPBUF7 @ (unsigned)&SSPBUF*8+7;
volatile bit	SSPBUF6 @ (unsigned)&SSPBUF*8+6;
volatile bit	SSPBUF5 @ (unsigned)&SSPBUF*8+5;
volatile bit	SSPBUF4 @ (unsigned)&SSPBUF*8+4;
volatile bit	SSPBUF3 @ (unsigned)&SSPBUF*8+3;
volatile bit	SSPBUF2 @ (unsigned)&SSPBUF*8+2;
volatile bit	SSPBUF1 @ (unsigned)&SSPBUF*8+1;
volatile bit	SSPBUF0 @ (unsigned)&SSPBUF*8+0;

/*	SSPCON bits	*/
volatile bit	WCOL	@ (unsigned)&SSPCON*8+7;
volatile bit	SSPOV	@ (unsigned)&SSPCON*8+6;
volatile bit	SSPEN	@ (unsigned)&SSPCON*8+5;
volatile bit	CKP	@ (unsigned)&SSPCON*8+4;
volatile bit	SSPM3	@ (unsigned)&SSPCON*8+3;
volatile bit	SSPM2	@ (unsigned)&SSPCON*8+2;
volatile bit	SSPM1	@ (unsigned)&SSPCON*8+1;
volatile bit	SSPM0	@ (unsigned)&SSPCON*8+0;
#endif

/* 	CCPR1L bits	*/
volatile	bit	CCPR1L7 @ (unsigned)&CCPR1L*8+7;
volatile	bit	CCPR1L6 @ (unsigned)&CCPR1L*8+6;
volatile	bit	CCPR1L5 @ (unsigned)&CCPR1L*8+5;
volatile	bit	CCPR1L4 @ (unsigned)&CCPR1L*8+4;
volatile	bit	CCPR1L3 @ (unsigned)&CCPR1L*8+3;
volatile	bit	CCPR1L2 @ (unsigned)&CCPR1L*8+2;
volatile	bit	CCPR1L1 @ (unsigned)&CCPR1L*8+1;
volatile	bit	CCPR1L0 @ (unsigned)&CCPR1L*8+0;

/* 	CCPR1H bits	*/
volatile	bit	CCPR1H7 @ (unsigned)&CCPR1H*8+7;
volatile	bit	CCPR1H6 @ (unsigned)&CCPR1H*8+6;
volatile	bit	CCPR1H5 @ (unsigned)&CCPR1H*8+5;
volatile	bit	CCPR1H4 @ (unsigned)&CCPR1H*8+4;
volatile	bit	CCPR1H3 @ (unsigned)&CCPR1H*8+3;
volatile	bit	CCPR1H2 @ (unsigned)&CCPR1H*8+2;
volatile	bit	CCPR1H1 @ (unsigned)&CCPR1H*8+1;
volatile	bit	CCPR1H0 @ (unsigned)&CCPR1H*8+0;

/*	CCP1CON bits	*/
#if defined(_16C770) || defined(_16C771) || defined(_16C717) || defined(_16C745) || defined(_16C765)
#if !defined(_16C745) && !defined(_16C765)
volatile bit	PWM1M1	@ (unsigned)&CCP1CON*8+7;
volatile bit	PWM1M0	@ (unsigned)&CCP1CON*8+6;
#endif
volatile bit	DC1B1	@ (unsigned)&CCP1CON*8+5;
volatile bit	DC1B0	@ (unsigned)&CCP1CON*8+4;
#endif
#if defined(_16C773) || defined(_16C774)
volatile bit	CCP1X	@ (unsigned)&CCP1CON*8+5;
volatile bit	CCP1Y	@ (unsigned)&CCP1CON*8+4;
#endif
volatile bit	CCP1M3	@ (unsigned)&CCP1CON*8+3;
volatile bit	CCP1M2	@ (unsigned)&CCP1CON*8+2;
volatile bit	CCP1M1	@ (unsigned)&CCP1CON*8+1;
volatile bit	CCP1M0	@ (unsigned)&CCP1CON*8+0;

#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
/*	RCSTA bits	*/
volatile bit	SPEN	@ (unsigned)&RCSTA*8+7;
volatile bit	RX9 	@ (unsigned)&RCSTA*8+6;
volatile bit	SREN	@ (unsigned)&RCSTA*8+5;
volatile bit	CREN	@ (unsigned)&RCSTA*8+4;
#if !defined(_16C745) && !defined(_16C765)
volatile bit	ADDEN	@ (unsigned)&RCSTA*8+3;
#endif
volatile bit	FERR	@ (unsigned)&RCSTA*8+2;
volatile bit	OERR	@ (unsigned)&RCSTA*8+1;
volatile bit	RX9D	@ (unsigned)&RCSTA*8+0;

/*	CCP2CON bits	*/
#if !defined(_16C745) && !defined(_16C765)
volatile bit	CCP2X	@ (unsigned)&CCP2CON*8+5;
volatile bit	CCP2Y	@ (unsigned)&CCP2CON*8+4;
#endif
#if defined(_16C745) || defined(_16C765)
volatile bit	DC2B1	@ (unsigned)&CCP2CON*8+5;
volatile bit	DC2B0	@ (unsigned)&CCP2CON*8+4;
#endif
volatile bit	CCP2M3	@ (unsigned)&CCP2CON*8+3;
volatile bit	CCP2M2	@ (unsigned)&CCP2CON*8+2;
volatile bit	CCP2M1	@ (unsigned)&CCP2CON*8+1;
volatile bit	CCP2M0	@ (unsigned)&CCP2CON*8+0;
#endif

/*	 ADCON0 bits	*/
volatile bit	ADCS1	@ (unsigned)&ADCON0*8+7;
volatile bit	ADCS0 	@ (unsigned)&ADCON0*8+6;
volatile bit	CHS2	@ (unsigned)&ADCON0*8+5;
volatile bit	CHS1	@ (unsigned)&ADCON0*8+4;
volatile bit	CHS0	@ (unsigned)&ADCON0*8+3;
volatile bit	ADGO	@ (unsigned)&ADCON0*8+2;
// Alternate definition for compatibility with other devices
volatile bit	GODONE	@ (unsigned)&ADCON0*8+2;
#if !defined(_16C745) && !defined(_16C765)
volatile bit	CHS3	@ (unsigned)&ADCON0*8+1;
#endif
volatile bit	ADON	@ (unsigned)&ADCON0*8+0;

/* 	ADRESH bits	*/
volatile	bit		ADRESH7 @ (unsigned)&ADRESH*8+7;
volatile	bit		ADRESH6 @ (unsigned)&ADRESH*8+6;
volatile	bit		ADRESH5 @ (unsigned)&ADRESH*8+5;
volatile	bit		ADRESH4 @ (unsigned)&ADRESH*8+4;
volatile	bit		ADRESH3 @ (unsigned)&ADRESH*8+3;
volatile	bit		ADRESH2 @ (unsigned)&ADRESH*8+2;
volatile	bit		ADRESH1 @ (unsigned)&ADRESH*8+1;
volatile	bit		ADRESH0 @ (unsigned)&ADRESH*8+0;

/* 	OPTION bits	*/
volatile bit      	RBPU	@ (unsigned)&OPTION*8+7;
volatile bit      	INTEDG	@ (unsigned)&OPTION*8+6;
volatile bit      	T0CS	@ (unsigned)&OPTION*8+5;
volatile bit      	T0SE	@ (unsigned)&OPTION*8+4;
volatile bit      	PSA	@ (unsigned)&OPTION*8+3;
volatile bit      	PS2	@ (unsigned)&OPTION*8+2;
volatile bit      	PS1	@ (unsigned)&OPTION*8+1;
volatile bit       	PS0	@ (unsigned)&OPTION*8+0;

/*      TRISA bits      */
#if defined(_16C770) || defined(_16C771) || defined(_16C717)
volatile bit      	TRISA7  @ (unsigned)&TRISA*8+7;
volatile bit      	TRISA6  @ (unsigned)&TRISA*8+6;
#endif
#if defined(_16C770) || defined(_16C771) || defined(_16C717) || defined(_16C774) || defined(_16C745) || defined(_16C765)
volatile bit      	TRISA5  @ (unsigned)&TRISA*8+5;
#endif
volatile bit      	TRISA4  @ (unsigned)&TRISA*8+4;
volatile bit      	TRISA3  @ (unsigned)&TRISA*8+3;
volatile bit      	TRISA2  @ (unsigned)&TRISA*8+2;
volatile bit      	TRISA1  @ (unsigned)&TRISA*8+1;
volatile bit      	TRISA0  @ (unsigned)&TRISA*8+0;

/*      TRISB bits      */
volatile bit      	TRISB7  @ (unsigned)&TRISB*8+7;
volatile bit      	TRISB6  @ (unsigned)&TRISB*8+6;
volatile bit      	TRISB5  @ (unsigned)&TRISB*8+5;
volatile bit      	TRISB4  @ (unsigned)&TRISB*8+4;
volatile bit      	TRISB3  @ (unsigned)&TRISB*8+3;
volatile bit      	TRISB2  @ (unsigned)&TRISB*8+2;
volatile bit      	TRISB1  @ (unsigned)&TRISB*8+1;
volatile bit      	TRISB0  @ (unsigned)&TRISB*8+0;

/*      TRISC bits      */
#if defined(_16C773) || defined(_16C774)
volatile bit      	TRISC7  @ (unsigned)&TRISC*8+7;
volatile bit      	TRISC6  @ (unsigned)&TRISC*8+6;
#if !defined(_16C745) && !defined(_16C765)
volatile bit      	TRISC5  @ (unsigned)&TRISC*8+5; 
volatile bit      	TRISC4  @ (unsigned)&TRISC*8+4;
volatile bit      	TRISC3  @ (unsigned)&TRISC*8+3;
#endif
volatile bit      	TRISC2  @ (unsigned)&TRISC*8+2;
volatile bit      	TRISC1  @ (unsigned)&TRISC*8+1;
volatile bit      	TRISC0  @ (unsigned)&TRISC*8+0;
#endif

#if defined(_16C774) || defined(_16C765)
/*      TRISD bits      */
volatile bit      	TRISD7  @ (unsigned)&TRISD*8+7;
volatile bit      	TRISD6  @ (unsigned)&TRISD*8+6;
volatile bit      	TRISD5  @ (unsigned)&TRISD*8+5;
volatile bit      	TRISD4  @ (unsigned)&TRISD*8+4;
volatile bit      	TRISD3  @ (unsigned)&TRISD*8+3;
volatile bit      	TRISD2  @ (unsigned)&TRISD*8+2;
volatile bit      	TRISD1  @ (unsigned)&TRISD*8+1;
volatile bit      	TRISD0  @ (unsigned)&TRISD*8+0;

/*      TRISE bits      */
volatile bit      	IBF     @ (unsigned)&TRISE*8+7;
volatile bit      	OBF     @ (unsigned)&TRISE*8+6;
volatile bit      	IBOV    @ (unsigned)&TRISE*8+5;
volatile bit      	PSPMODE @ (unsigned)&TRISE*8+4;
volatile bit      	TRISE2	@ (unsigned)&TRISE*8+2;
volatile bit      	TRISE1	@ (unsigned)&TRISE*8+1;
volatile bit      	TRISE0	@ (unsigned)&TRISE*8+0;
#endif

/*	PIE1 bits	*/
#if defined(_16C774) || defined(_16C765)
volatile bit      	PSPIE	@ (unsigned)&PIE1*8+7;
#endif
volatile bit      	ADIE	@ (unsigned)&PIE1*8+6;
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
volatile bit      	RCIE	@ (unsigned)&PIE1*8+5;
volatile bit      	TXIE	@ (unsigned)&PIE1*8+4;
#endif
#if defined(_16C745) || defined(_16C765)
volatile bit      	USBIE	@ (unsigned)&PIE1*8+3;
#endif
#if !defined(_16C745) && !defined(_16C765)
volatile bit      	SSPIE	@ (unsigned)&PIE1*8+3;
#endif
volatile bit      	CCP1IE	@ (unsigned)&PIE1*8+2;
volatile bit      	TMR2IE	@ (unsigned)&PIE1*8+1;
volatile bit      	TMR1IE	@ (unsigned)&PIE1*8+0;

/*	PIE2 bits	*/
#if !defined(_16C774) && !defined(_16C765)
volatile bit      	LVDIE	@ (unsigned)&PIE2*8+7;
volatile bit      	BCLIE	@ (unsigned)&PIE2*8+3;
#endif
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
volatile bit      	CCP2IE	@ (unsigned)&PIE2*8+0;
#endif

/*	PCON bits	*/
#if defined(_16C770) || defined(_16C771) || defined(_16C717)
volatile bit      	OSCF	@ (unsigned)&PCON*8+3;	
#endif
volatile bit      	POR	@ (unsigned)&PCON*8+1;	
volatile bit      	BOR	@ (unsigned)&PCON*8+0;	

/*		SSPCON2 BITS	*/
#if !defined(_16C745) && !defined(_16C765)
volatile bit      	GCEN	@ (unsigned)&SSPCON2*8+7;
volatile bit      	ACKSTAT	@ (unsigned)&SSPCON2*8+6;
volatile bit      	ACKDT	@ (unsigned)&SSPCON2*8+5;
volatile bit      	ACKEN	@ (unsigned)&SSPCON2*8+4;
volatile bit      	RCEN	@ (unsigned)&SSPCON2*8+3;
volatile bit      	PEN	@ (unsigned)&SSPCON2*8+2;
volatile bit      	RSEN	@ (unsigned)&SSPCON2*8+1;
volatile bit      	SEN	@ (unsigned)&SSPCON2*8+0;

/*      SSPSTAT bits    */
volatile bit      	SMP	@ (unsigned)&SSPSTAT*8+7;
volatile bit      	CKE	@ (unsigned)&SSPSTAT*8+6;
volatile bit      	DA	@ (unsigned)&SSPSTAT*8+5;
volatile bit      	STOP	@ (unsigned)&SSPSTAT*8+4;
volatile bit      	START	@ (unsigned)&SSPSTAT*8+3;
volatile bit      	RW	@ (unsigned)&SSPSTAT*8+2;
volatile bit      	UA	@ (unsigned)&SSPSTAT*8+1;
volatile bit      	BF	@ (unsigned)&SSPSTAT*8+0;
#ifdef __STAT_BACKWARD_COMPATIBILITY
#define STAT_SMP	SMP
#define STAT_CKE	CKE
#define STAT_DA	DA
#define STAT_P	STOP
#define STAT_S	START
#define STAT_RW	RW
#define STAT_UA	UA
#define STAT_BF	BF
#endif
#endif

/*	PR2 bits	*/
volatile	bit	     	PR27	@ (unsigned)&PR2*8+7;
volatile	bit	     	PR26	@ (unsigned)&PR2*8+6;
volatile	bit	     	PR25	@ (unsigned)&PR2*8+5;
volatile	bit	     	PR24	@ (unsigned)&PR2*8+4;
volatile	bit	     	PR23	@ (unsigned)&PR2*8+3;
volatile	bit	     	PR22	@ (unsigned)&PR2*8+2;
volatile	bit	     	PR21	@ (unsigned)&PR2*8+1;
volatile	bit	     	PR20	@ (unsigned)&PR2*8+0;

/*	SSPADD bits	*/
#if !defined(_16C745) && !defined(_16C765)
volatile	bit	     	SSPADD7 @ (unsigned)&SSPADD*8+7;
volatile	bit	     	SSPADD6 @ (unsigned)&SSPADD*8+6;
volatile	bit	     	SSPADD5 @ (unsigned)&SSPADD*8+5;
volatile	bit	     	SSPADD4 @ (unsigned)&SSPADD*8+4;
volatile	bit	     	SSPADD3 @ (unsigned)&SSPADD*8+3;
volatile	bit	     	SSPADD2 @ (unsigned)&SSPADD*8+2;
volatile	bit	     	SSPADD1 @ (unsigned)&SSPADD*8+1;
volatile	bit	     	SSPADD0 @ (unsigned)&SSPADD*8+0;
#endif

#if defined(_16C770) || defined(_16C771) || defined(_16C717)
/*	WPUB bits 	*/
volatile bit      	WPUB7 	@ (unsigned)&WPUB*8+7;
volatile bit      	WPUB6 	@ (unsigned)&WPUB*8+6;
volatile bit      	WPUB5 	@ (unsigned)&WPUB*8+5;
volatile bit      	WPUB4 	@ (unsigned)&WPUB*8+4;
volatile bit      	WPUB3 	@ (unsigned)&WPUB*8+3;
volatile bit      	WPUB2 	@ (unsigned)&WPUB*8+2;
volatile bit      	WPUB1 	@ (unsigned)&WPUB*8+1;
volatile bit      	WPUB0 	@ (unsigned)&WPUB*8+0;

/*	IOCB bits	*/
volatile bit      	IOCB7	@ (unsigned)&IOCB*8+7;
volatile bit      	IOCB6	@ (unsigned)&IOCB*8+6;
volatile bit      	IOCB5	@ (unsigned)&IOCB*8+5;
volatile bit      	IOCB4	@ (unsigned)&IOCB*8+4;
volatile bit      	IOCB3	@ (unsigned)&IOCB*8+3;
volatile bit      	IOCB2	@ (unsigned)&IOCB*8+2;
volatile bit      	IOCB1	@ (unsigned)&IOCB*8+1;
volatile bit      	IOCB0	@ (unsigned)&IOCB*8+0;

/*	P1DEL bits	*/
volatile	bit	     	P1DEL7 	@ (unsigned)&P1DEL*8+7;
volatile	bit	     	P1DEL6 	@ (unsigned)&P1DEL*8+6;
volatile	bit	     	P1DEL5 	@ (unsigned)&P1DEL*8+5;
volatile	bit	     	P1DEL4 	@ (unsigned)&P1DEL*8+4;
volatile	bit	     	P1DEL3 	@ (unsigned)&P1DEL*8+3;
volatile	bit	     	P1DEL2 	@ (unsigned)&P1DEL*8+2;
volatile	bit	     	P1DEL1 	@ (unsigned)&P1DEL*8+1;
volatile	bit	     	P1DEL0 	@ (unsigned)&P1DEL*8+0;
#endif

/*	TXSTA bits	*/
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
volatile bit      	CSRC	@ (unsigned)&TXSTA*8+7;
volatile bit      	TX9	@ (unsigned)&TXSTA*8+6;
volatile bit      	TXEN	@ (unsigned)&TXSTA*8+5;
volatile bit      	SYNC	@ (unsigned)&TXSTA*8+4;
volatile bit      	BRGH	@ (unsigned)&TXSTA*8+2;
volatile bit      	TRMT	@ (unsigned)&TXSTA*8+1;
volatile bit      	TX9D	@ (unsigned)&TXSTA*8+0;
#endif

/*	REFCON bits	*/
#if !defined(_16C745) && !defined(_16C765)
volatile bit      	VRHEN	@ (unsigned)&REFCON*8+7;
volatile bit      	VRLEN	@ (unsigned)&REFCON*8+6;
volatile bit      	VRHOEN	@ (unsigned)&REFCON*8+5;
volatile bit      	VRLOEN	@ (unsigned)&REFCON*8+4;

/*	LVDCON bits	*/
volatile bit      	BGST	@ (unsigned)&LVDCON*8+5;
volatile bit      	LVDEN	@ (unsigned)&LVDCON*8+4;
volatile bit      	LV3	@ (unsigned)&LVDCON*8+3;
volatile bit      	LV2	@ (unsigned)&LVDCON*8+2;
volatile bit      	LV1	@ (unsigned)&LVDCON*8+1;
volatile bit      	LV0	@ (unsigned)&LVDCON*8+0;
#endif

/* 	ANSEL bits 	*/
#if defined(_16C770) || defined(_16C771) || defined(_16C717)
volatile	bit	     	ANSEL5	@ (unsigned)&ANSEL*8+5;
volatile	bit	     	ANSEL4	@ (unsigned)&ANSEL*8+4;
volatile	bit	     	ANSEL3	@ (unsigned)&ANSEL*8+3;
volatile	bit	     	ANSEL2	@ (unsigned)&ANSEL*8+2;
volatile	bit	     	ANSEL1	@ (unsigned)&ANSEL*8+1;
volatile	bit	     	ANSEL0	@ (unsigned)&ANSEL*8+0;
#endif

/*	ADRESL bits	*/
#if !defined(_16C745) && !defined(_16C765)
volatile	bit		ADRESL7 @ (unsigned)&ADRESL*8+7;
volatile	bit		ADRESL6 @ (unsigned)&ADRESL*8+6;
volatile	bit		ADRESL5 @ (unsigned)&ADRESL*8+5;
volatile	bit		ADRESL4 @ (unsigned)&ADRESL*8+4;
volatile	bit		ADRESL3 @ (unsigned)&ADRESL*8+3;
volatile	bit		ADRESL2 @ (unsigned)&ADRESL*8+2;
volatile	bit		ADRESL1 @ (unsigned)&ADRESL*8+1;
volatile	bit		ADRESL0 @ (unsigned)&ADRESL*8+0;
#endif

/*	ADCON1 bits	*/
#if !defined(_16C745) && !defined(_16C765)
volatile bit      	ADFM	@ (unsigned)&ADCON1*8+7;
volatile bit      	VCFG2	@ (unsigned)&ADCON1*8+6;
volatile bit      	VCFG1	@ (unsigned)&ADCON1*8+5;
volatile bit      	VCFG0	@ (unsigned)&ADCON1*8+4;
#endif
#if defined(_16C773) || defined(_16C774) || defined(_16C745) || defined(_16C765)
#if !defined(_16C774) && !defined(_16C765)
volatile bit      	PCFG3	@ (unsigned)&ADCON1*8+3;
#endif
volatile bit      	PCFG2	@ (unsigned)&ADCON1*8+2;
volatile bit      	PCFG1	@ (unsigned)&ADCON1*8+1;
volatile bit      	PCFG0	@ (unsigned)&ADCON1*8+0;
#endif

#if defined(_16C770) || defined(_16C771) || defined(_16C717)
/*	PMDATL bits	*/
volatile	bit	      	PMDATL7 @ (unsigned)&PMDATL*8+7;
volatile	bit	      	PMDATL6 @ (unsigned)&PMDATL*8+6;
volatile	bit	      	PMDATL5 @ (unsigned)&PMDATL*8+5;
volatile	bit	      	PMDATL4 @ (unsigned)&PMDATL*8+4;
volatile	bit	      	PMDATL3 @ (unsigned)&PMDATL*8+3;
volatile	bit	      	PMDATL2 @ (unsigned)&PMDATL*8+2;
volatile	bit	      	PMDATL1	@ (unsigned)&PMDATL*8+1;
volatile	bit	      	PMDATL0 @ (unsigned)&PMDATL*8+0;

/*	PMADRL bits	*/
volatile	bit	      	PMADRL7 @ (unsigned)&PMADRL*8+7;
volatile	bit	      	PMADRL6 @ (unsigned)&PMADRL*8+6;
volatile	bit	      	PMADRL5 @ (unsigned)&PMADRL*8+5;
volatile	bit	      	PMADRL4	@ (unsigned)&PMADRL*8+4;
volatile	bit	      	PMADRL3 @ (unsigned)&PMADRL*8+3;
volatile	bit	      	PMADRL2 @ (unsigned)&PMADRL*8+2;
volatile	bit	      	PMADRL1 @ (unsigned)&PMADRL*8+1;
volatile	bit	      	PMADRL0 @ (unsigned)&PMADRL*8+0;

/*	PMDATH bits	*/
volatile	bit	     	PMDATH5 @ (unsigned)&PMDATH*8+5;
volatile	bit	     	PMDATH4 @ (unsigned)&PMDATH*8+4;
volatile	bit	     	PMDATH3 @ (unsigned)&PMDATH*8+3;
volatile	bit	     	PMDATH2 @ (unsigned)&PMDATH*8+2;
volatile	bit	     	PMDATH1 @ (unsigned)&PMDATH*8+1;
volatile	bit	     	PMDATH0 @ (unsigned)&PMDATH*8+0;

/*	PMADRH bits	*/
volatile	bit	     	PMADRH3 @ (unsigned)&PMADRH*8+3;
volatile	bit	     	PMADRH2 @ (unsigned)&PMADRH*8+2;
volatile	bit	     	PMADRH1 @ (unsigned)&PMADRH*8+1;
volatile	bit	     	PMADRH0 @ (unsigned)&PMADRH*8+0;
#endif

/* USB bits */
#if defined(_16C745) || defined(_16C765)

volatile bit      	STALL		@ (unsigned)&UIR*8+5;
volatile bit      	UIDLE		@ (unsigned)&UIR*8+4;
volatile bit      	TOK_DONE	@ (unsigned)&UIR*8+3;
volatile bit      	ACTIVITY	@ (unsigned)&UIR*8+2;
volatile bit      	UERR		@ (unsigned)&UIR*8+1;
volatile bit      	USB_RST		@ (unsigned)&UIR*8+0;

volatile bit      	STALL_E		@ (unsigned)&UIE*8+5;
volatile bit      	UIDLE_E		@ (unsigned)&UIE*8+4;
volatile bit      	TOK_DONE_E	@ (unsigned)&UIE*8+3;
volatile bit      	ACTIVITY_E	@ (unsigned)&UIE*8+2;
volatile bit      	UERR_E		@ (unsigned)&UIE*8+1;
volatile bit      	USB_RST_E	@ (unsigned)&UIE*8+0;

volatile bit      	BTS_ERR		@ (unsigned)&UEIR*8+7;
volatile bit      	OWN_ERR		@ (unsigned)&UEIR*8+6;
volatile bit      	WRT_ERR		@ (unsigned)&UEIR*8+5;
volatile bit      	BTO_ERR		@ (unsigned)&UEIR*8+4;
volatile bit      	DFN8		@ (unsigned)&UEIR*8+3;
volatile bit      	CRC16		@ (unsigned)&UEIR*8+2;
volatile bit      	CRC5		@ (unsigned)&UEIR*8+1;
volatile bit      	PID_ERR		@ (unsigned)&UEIR*8+0;

volatile bit      	BTS_ERR_E	@ (unsigned)&UEIE*8+7;
volatile bit      	OWN_ERR_E	@ (unsigned)&UEIE*8+6;
volatile bit      	WRT_ERR_E	@ (unsigned)&UEIE*8+5;
volatile bit      	BTO_ERR_E	@ (unsigned)&UEIE*8+4;
volatile bit      	DFN8_E		@ (unsigned)&UEIE*8+3;
volatile bit      	CRC16_E		@ (unsigned)&UEIE*8+2;
volatile bit      	CRC5_E		@ (unsigned)&UEIE*8+1;
volatile bit      	PID_ERR_E	@ (unsigned)&UEIE*8+0;

volatile bit      	ENDP1		@ (unsigned)&USTAT*8+4;
volatile bit      	ENDP0		@ (unsigned)&USTAT*8+3;
volatile bit      	IN		@ (unsigned)&USTAT*8+2;

volatile bit      	SEO		@ (unsigned)&UCTRL*8+5;
volatile bit      	PKT_DIS		@ (unsigned)&UCTRL*8+4;
volatile bit      	DEV_ATT		@ (unsigned)&UCTRL*8+3;
volatile bit      	RESUME		@ (unsigned)&UCTRL*8+2;
volatile bit      	SUSPND		@ (unsigned)&UCTRL*8+1;

volatile bit      	ADDR6		@ (unsigned)&UADDR*8+6;
volatile bit      	ADDR5		@ (unsigned)&UADDR*8+5;
volatile bit      	ADDR4		@ (unsigned)&UADDR*8+4;
volatile bit      	ADDR3		@ (unsigned)&UADDR*8+3;
volatile bit      	ADDR2		@ (unsigned)&UADDR*8+2;
volatile bit      	ADDR1		@ (unsigned)&UADDR*8+1;
volatile bit      	ADDR0		@ (unsigned)&UADDR*8+0;

volatile bit      	SWSTAT7		@ (unsigned)&USWSTAT*8+7;
volatile bit      	SWSTAT6		@ (unsigned)&USWSTAT*8+6;
volatile bit      	SWSTAT5		@ (unsigned)&USWSTAT*8+5;
volatile bit      	SWSTAT4		@ (unsigned)&USWSTAT*8+4;
volatile bit      	SWSTAT3		@ (unsigned)&USWSTAT*8+3;
volatile bit      	SWSTAT2		@ (unsigned)&USWSTAT*8+2;
volatile bit      	SWSTAT1		@ (unsigned)&USWSTAT*8+1;
volatile bit      	SWSTAT0		@ (unsigned)&USWSTAT*8+0;

volatile bit      	EP_CTL_DIS0	@ (unsigned)&UEP0*8+3;
volatile bit      	EP_OUT_EN0	@ (unsigned)&UEP0*8+2;
volatile bit      	EP_IN_EN0	@ (unsigned)&UEP0*8+1;
volatile bit      	EP_STALL0	@ (unsigned)&UEP0*8+0;

volatile bit      	EP_CTL_DIS1	@ (unsigned)&UEP1*8+3;
volatile bit      	EP_OUT_EN1	@ (unsigned)&UEP1*8+2;
volatile bit      	EP_IN_EN1	@ (unsigned)&UEP1*8+1;
volatile bit      	EP_STALL1	@ (unsigned)&UEP1*8+0;

volatile bit      	EP_CTL_DIS2	@ (unsigned)&UEP2*8+3;
volatile bit      	EP_OUT_EN2	@ (unsigned)&UEP2*8+2;
volatile bit      	EP_IN_EN2	@ (unsigned)&UEP2*8+1;
volatile bit      	EP_STALL2	@ (unsigned)&UEP2*8+0;

volatile bit      	UOWN_0O		@ (unsigned)&BD0OST*8+7;
volatile bit      	DATA_0O		@ (unsigned)&BD0OST*8+6;
volatile bit      	PID3_0O		@ (unsigned)&BD0OST*8+5;
volatile bit      	PID2_0O		@ (unsigned)&BD0OST*8+4;
volatile bit      	PID1_0O		@ (unsigned)&BD0OST*8+3;
volatile bit      	PID0_0O		@ (unsigned)&BD0OST*8+2;

volatile bit      	UOWN_0I		@ (unsigned)&BD0IST*8+7;
volatile bit      	DATA_0I		@ (unsigned)&BD0IST*8+6;
volatile bit      	PID3_0I		@ (unsigned)&BD0IST*8+5;
volatile bit      	PID2_0I		@ (unsigned)&BD0IST*8+4;
volatile bit      	PID1_0I		@ (unsigned)&BD0IST*8+3;
volatile bit      	PID0_0I		@ (unsigned)&BD0IST*8+2;

volatile bit      	UOWN_1O		@ (unsigned)&BD1OST*8+7;
volatile bit      	DATA_1O		@ (unsigned)&BD1OST*8+6;
volatile bit      	PID3_1O		@ (unsigned)&BD1OST*8+5;
volatile bit      	PID2_1O		@ (unsigned)&BD1OST*8+4;
volatile bit      	PID1_1O		@ (unsigned)&BD1OST*8+3;
volatile bit      	PID0_1O		@ (unsigned)&BD1OST*8+2;

volatile bit      	UOWN_1I		@ (unsigned)&BD1IST*8+7;
volatile bit      	DATA_1I		@ (unsigned)&BD1IST*8+6;
volatile bit      	PID3_1I		@ (unsigned)&BD1IST*8+5;
volatile bit      	PID2_1I		@ (unsigned)&BD1IST*8+4;
volatile bit      	PID1_1I		@ (unsigned)&BD1IST*8+3;
volatile bit      	PID0_1I		@ (unsigned)&BD1IST*8+2;

volatile bit      	UOWN_2O		@ (unsigned)&BD2OST*8+7;
volatile bit      	DATA_2O		@ (unsigned)&BD2OST*8+6;
volatile bit      	PID3_2O		@ (unsigned)&BD2OST*8+5;
volatile bit      	PID2_2O		@ (unsigned)&BD2OST*8+4;
volatile bit      	PID1_2O		@ (unsigned)&BD2OST*8+3;
volatile bit      	PID0_2O		@ (unsigned)&BD2OST*8+2;

volatile bit      	UOWN_2I		@ (unsigned)&BD2IST*8+7;
volatile bit      	DATA_2I		@ (unsigned)&BD2IST*8+6;
volatile bit      	PID3_2I		@ (unsigned)&BD2IST*8+5;
volatile bit      	PID2_2I		@ (unsigned)&BD2IST*8+4;
volatile bit      	PID1_2I		@ (unsigned)&BD2IST*8+3;
volatile bit      	PID0_2I		@ (unsigned)&BD2IST*8+2;

#endif

/*      A full configuration word includes one of each group ORed together     */
#define CONFIG_ADDR	0x2007	

