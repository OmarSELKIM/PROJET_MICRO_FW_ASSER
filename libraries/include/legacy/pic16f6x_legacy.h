
#ifndef	_HTC_H_
#warning Header file pic16f6x.h included directly. Use #include <htc.h> instead.
#endif

/*
 *	Header file for the Microchip 
 *	PIC 16F627 chip
 *	PIC 16F628 chip
 *	Midrange Microcontroller
 */

volatile unsigned char	INDF	@ 0x00;
volatile unsigned char	TMR0	@ 0x01;
volatile unsigned char	PCL	@ 0x02;
volatile unsigned char	STATUS	@ 0x03;
volatile	unsigned char	FSR	@ 0x04;
volatile unsigned char	PORTA	@ 0x05;
volatile unsigned char	PORTB	@ 0x06;
volatile	unsigned char	PCLATH	@ 0x0A;
volatile unsigned char	INTCON	@ 0x0B;
volatile unsigned char	PIR1	@ 0x0C;
volatile unsigned char	TMR1L	@ 0x0E;
volatile unsigned char	TMR1H	@ 0x0F;
volatile unsigned char	T1CON	@ 0x10;
volatile unsigned char	TMR2	@ 0x11;
volatile unsigned char	T2CON	@ 0x12;
volatile unsigned char	CCPR1L	@ 0x15;
volatile unsigned char	CCPR1H	@ 0x16;
volatile unsigned char	CCP1CON	@ 0x17;
volatile unsigned char	RCSTA	@ 0x18;
volatile unsigned char	TXREG	@ 0x19;
volatile unsigned char	RCREG	@ 0x1A;
volatile unsigned char	CMCON	@ 0x1F;

/*	bank 1 registers */
volatile	unsigned char	     	OPTION	@ 0x81;
volatile	unsigned char      	TRISA	@ 0x85;
volatile	unsigned char      	TRISB	@ 0x86;
volatile unsigned char      	PIE1	@ 0x8C;
volatile unsigned char      	PCON	@ 0x8E;
volatile unsigned char      	PR2	@ 0x92;
volatile unsigned char      	TXSTA	@ 0x98;
volatile unsigned char      	SPBRG	@ 0x99;
volatile unsigned char      	EEDATA	@ 0x9A;
volatile unsigned char      	EEADR	@ 0x9B;
volatile unsigned char      	EECON1	@ 0x9C;
volatile unsigned char      	EECON2	@ 0x9D;
volatile unsigned char      	VRCON	@ 0x9F;

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
volatile bit	RA7	@ (unsigned)&PORTA*8+7;
volatile bit	RA6	@ (unsigned)&PORTA*8+6;
volatile bit	RA5	@ (unsigned)&PORTA*8+5;
volatile bit	RA4	@ (unsigned)&PORTA*8+4;
volatile bit	RA3	@ (unsigned)&PORTA*8+3;
volatile bit	RA2	@ (unsigned)&PORTA*8+2;
volatile bit	RA1	@ (unsigned)&PORTA*8+1;
volatile bit	RA0	@ (unsigned)&PORTA*8+0;

/*      PORTB bits      */
volatile bit	RB7	@ (unsigned)&PORTB*8+7;
volatile bit	RB6	@ (unsigned)&PORTB*8+6;
volatile bit	RB5	@ (unsigned)&PORTB*8+5;
volatile bit	RB4	@ (unsigned)&PORTB*8+4;
volatile bit	RB3	@ (unsigned)&PORTB*8+3;
volatile bit	RB2	@ (unsigned)&PORTB*8+2;
volatile bit	RB1	@ (unsigned)&PORTB*8+1;
volatile bit	RB0	@ (unsigned)&PORTB*8+0;

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
volatile bit	EEIF	@ (unsigned)&PIR1*8+7;
volatile bit	CMIF	@ (unsigned)&PIR1*8+6;
volatile bit	RCIF	@ (unsigned)&PIR1*8+5;
volatile bit	TXIF	@ (unsigned)&PIR1*8+4;
volatile bit	CCP1IF	@ (unsigned)&PIR1*8+2;
volatile bit	TMR2IF	@ (unsigned)&PIR1*8+1;
volatile bit	TMR1IF	@ (unsigned)&PIR1*8+0;

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

/*	CCP1CON bits	*/
volatile bit	CCP1X	@ (unsigned)&CCP1CON*8+5;
volatile bit	CCP1Y	@ (unsigned)&CCP1CON*8+4;
volatile bit	CCP1M3	@ (unsigned)&CCP1CON*8+3;
volatile bit	CCP1M2	@ (unsigned)&CCP1CON*8+2;
volatile bit	CCP1M1	@ (unsigned)&CCP1CON*8+1;
volatile bit	CCP1M0	@ (unsigned)&CCP1CON*8+0;

/*	RCSTA bits	*/
volatile bit	SPEN	@ (unsigned)&RCSTA*8+7;
volatile bit	RX9 	@ (unsigned)&RCSTA*8+6;
volatile bit	SREN	@ (unsigned)&RCSTA*8+5;
volatile bit	CREN	@ (unsigned)&RCSTA*8+4;
volatile bit	ADEN	@ (unsigned)&RCSTA*8+3;
volatile bit	FERR	@ (unsigned)&RCSTA*8+2;
volatile bit	OERR	@ (unsigned)&RCSTA*8+1;
volatile bit	RX9D	@ (unsigned)&RCSTA*8+0;

/*	 CMCON bits	*/
volatile bit	C2OUT	@ (unsigned)&CMCON*8+7;
volatile bit	C1OUT 	@ (unsigned)&CMCON*8+6;
volatile bit	C2INV	@ (unsigned)&CMCON*8+5;
volatile bit	C1INV	@ (unsigned)&CMCON*8+4;
volatile bit	CIS	@ (unsigned)&CMCON*8+3;
volatile bit	CM2	@ (unsigned)&CMCON*8+2;
volatile bit	CM1	@ (unsigned)&CMCON*8+1;
volatile bit	CM0	@ (unsigned)&CMCON*8+0;

/* 	OPTION bits	*/
volatile	bit	RBPU	@ (unsigned)&OPTION*8+7;
volatile	bit	INTEDG	@ (unsigned)&OPTION*8+6;
volatile	bit	T0CS	@ (unsigned)&OPTION*8+5;
volatile	bit	T0SE	@ (unsigned)&OPTION*8+4;
volatile	bit	PSA	@ (unsigned)&OPTION*8+3;
volatile	bit	PS2	@ (unsigned)&OPTION*8+2;
volatile	bit	PS1	@ (unsigned)&OPTION*8+1;
volatile	bit	PS0	@ (unsigned)&OPTION*8+0;

/*      TRISA bits      */
volatile       bit	TRISA7	@ (unsigned)&TRISA*8+7;
volatile       bit	TRISA6	@ (unsigned)&TRISA*8+6;
volatile       bit	TRISA4	@ (unsigned)&TRISA*8+4;
volatile       bit	TRISA3	@ (unsigned)&TRISA*8+3;
volatile       bit	TRISA2	@ (unsigned)&TRISA*8+2;
volatile       bit	TRISA1	@ (unsigned)&TRISA*8+1;
volatile       bit	TRISA0	@ (unsigned)&TRISA*8+0;

/*      TRISB bits      */
volatile       bit	TRISB7	@ (unsigned)&TRISB*8+7;
volatile       bit	TRISB6	@ (unsigned)&TRISB*8+6;
volatile       bit	TRISB5	@ (unsigned)&TRISB*8+5;
volatile       bit	TRISB4	@ (unsigned)&TRISB*8+4;
volatile       bit	TRISB3	@ (unsigned)&TRISB*8+3;
volatile       bit	TRISB2	@ (unsigned)&TRISB*8+2;
volatile       bit	TRISB1	@ (unsigned)&TRISB*8+1;
volatile       bit	TRISB0	@ (unsigned)&TRISB*8+0;

/*	PIE1 bits	*/
volatile       bit	EEIE	@ (unsigned)&PIE1*8+7;
volatile       bit	CMIE	@ (unsigned)&PIE1*8+6;
volatile       bit	RCIE	@ (unsigned)&PIE1*8+5;
volatile       bit	TXIE	@ (unsigned)&PIE1*8+4;
volatile       bit	CCP1IE	@ (unsigned)&PIE1*8+2;
volatile       bit	TMR2IE	@ (unsigned)&PIE1*8+1;
volatile       bit	TMR1IE	@ (unsigned)&PIE1*8+0;

/*	PCON bits	*/
volatile       bit	OSCF	@ (unsigned)&PCON*8+3;
volatile       bit	POR	@ (unsigned)&PCON*8+1;	
volatile       bit	BOR	@ (unsigned)&PCON*8+0;	

/*	TXSTA bits	*/
volatile       bit	CSRC	@ (unsigned)&TXSTA*8+7;
volatile       bit	TX9	@ (unsigned)&TXSTA*8+6;
volatile       bit	TXEN	@ (unsigned)&TXSTA*8+5;
volatile       bit	SYNC	@ (unsigned)&TXSTA*8+4;
volatile       bit	BRGH	@ (unsigned)&TXSTA*8+2;
volatile       bit	TRMT	@ (unsigned)&TXSTA*8+1;
volatile       bit	TX9D	@ (unsigned)&TXSTA*8+0;

/*	EECON1 bits	*/
volatile       bit	WRERR	@ (unsigned)&EECON1*8+3;
volatile       bit	WREN	@ (unsigned)&EECON1*8+2;
volatile       bit	WR	@ (unsigned)&EECON1*8+1;
volatile       bit	RD	@ (unsigned)&EECON1*8+0;

/*	VRCON bits	*/
volatile       bit	VREN	@ (unsigned)&VRCON*8+7;
volatile       bit	VROE	@ (unsigned)&VRCON*8+6;
volatile       bit	VRR	@ (unsigned)&VRCON*8+5;
volatile       bit	VR3	@ (unsigned)&VRCON*8+3;
volatile       bit	VR2	@ (unsigned)&VRCON*8+2;
volatile       bit	VR1	@ (unsigned)&VRCON*8+1;
volatile       bit	VR0	@ (unsigned)&VRCON*8+0;

					
#define CONFIG_ADDR	0x2007

