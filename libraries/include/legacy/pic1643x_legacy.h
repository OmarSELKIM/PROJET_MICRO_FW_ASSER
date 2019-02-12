
#ifndef	_HTC_H_
#warning Header file pic1643x.h included directly. Use #include <htc.h> instead.
#endif

/*
 * 	Header file for the Microchip
 * 	PIC 16C432 chip
 * 	PIC 16C433 chip
 * 	Midrange Microcontrollers
 */

volatile	unsigned char	INDF	@ 0x00;
volatile	unsigned char	TMR0	@ 0x01;
volatile	unsigned char 	PCL	@ 0x02;
volatile unsigned char	STATUS	@ 0x03;
volatile	unsigned char	FSR	@ 0x04;
#if	defined(_16C432)
volatile unsigned char	PORTA	@ 0x05;
volatile	unsigned char	PORTB	@ 0x06;
#endif
#if 	defined(_16C433)
volatile	unsigned char	GPIO	@ 0x05;
#endif
volatile	unsigned char	PCLATH	@ 0x0A;
volatile	unsigned char	INTCON	@ 0x0B;
volatile	unsigned char	PIR1	@ 0x0C;
#if	defined(_16C433)
volatile	unsigned char	ADRES	@ 0x1E;
volatile	unsigned char	ADCON0	@ 0x1F;
#endif
#if	defined(_16C432)
volatile	unsigned char	CMCON	@ 0x1F;
#endif

volatile	unsigned char	     	OPTION	@ 0x81;
#if 	defined(_16C432)
volatile	unsigned char	     	TRISA	@ 0x85;
volatile	unsigned char	     	TRISB	@ 0x86;
#endif
#if	defined(_16C433)
volatile	unsigned char	     	TRIS	@ 0x85;
#endif
volatile unsigned char      	PIE1	@ 0x8C;
volatile	unsigned char      	PCON	@ 0x8E;
#if	defined(_16C433)
volatile	unsigned char	      	OSCCAL	@ 0x8F;
volatile	unsigned char      	ADCON1	@ 0x9F;
#endif
#if	defined(_16C432)
volatile unsigned char      	LININTF	@ 0x90;
volatile unsigned char      	VRCON	@ 0x9F;
#endif


/*	TMR0 bits	*/
volatile	bit	TMR07	@ (unsigned)&TMR0*8+7;
volatile	bit	TMR06	@ (unsigned)&TMR0*8+6;
volatile	bit	TMR05	@ (unsigned)&TMR0*8+5;
volatile	bit	TMR04	@ (unsigned)&TMR0*8+4;
volatile	bit	TMR03	@ (unsigned)&TMR0*8+3;
volatile	bit	TMR02	@ (unsigned)&TMR0*8+2;
volatile	bit	TMR01	@ (unsigned)&TMR0*8+1;
volatile	bit	TMR00	@ (unsigned)&TMR0*8+0;

/* 	PCL bits	*/
volatile	bit	PCL7	@ (unsigned)&PCL*8+7;
volatile	bit	PCL6	@ (unsigned)&PCL*8+6;
volatile	bit	PCL5	@ (unsigned)&PCL*8+5;
volatile	bit	PCL4	@ (unsigned)&PCL*8+4;
volatile	bit	PCL3	@ (unsigned)&PCL*8+3;
volatile	bit	PCL2	@ (unsigned)&PCL*8+2;
volatile	bit	PCL1	@ (unsigned)&PCL*8+1;
volatile	bit	PCL0	@ (unsigned)&PCL*8+0;

/*	STATUS bits	*/
volatile bit	IRP	@ (unsigned)&STATUS*8+7;
volatile bit	RP1	@ (unsigned)&STATUS*8+6;
volatile bit	RP0	@ (unsigned)&STATUS*8+5;
volatile bit	TO	@ (unsigned)&STATUS*8+4;
volatile bit	PD	@ (unsigned)&STATUS*8+3;
volatile bit	ZERO	@ (unsigned)&STATUS*8+2;
volatile bit	DC	@ (unsigned)&STATUS*8+1;
volatile bit	CARRY	@ (unsigned)&STATUS*8+0;

#if	defined(_16C432)
/*	PORTA bits	*/
volatile bit	RA4	@ (unsigned)&PORTA*8+4;
volatile bit	RA3	@ (unsigned)&PORTA*8+3;
volatile bit	RA2	@ (unsigned)&PORTA*8+2;
volatile bit	RA1	@ (unsigned)&PORTA*8+1;
volatile bit	RA0	@ (unsigned)&PORTA*8+0;

/*	PORTB bits	*/
volatile bit	RB7	@ (unsigned)&PORTB*8+7;
volatile bit	RB6	@ (unsigned)&PORTB*8+6;
volatile bit	RB5	@ (unsigned)&PORTB*8+5;
volatile bit	RB4	@ (unsigned)&PORTB*8+4;
volatile bit	RB3	@ (unsigned)&PORTB*8+3;
volatile bit	RB2	@ (unsigned)&PORTB*8+2;
volatile bit	RB1	@ (unsigned)&PORTB*8+1;
volatile bit	RB0	@ (unsigned)&PORTB*8+0;
#endif

#if	defined(_16C433)
/*	GPIO bits	*/
volatile bit	LINTX	@ (unsigned)&GPIO*8+7;
volatile bit	LINRX	@ (unsigned)&GPIO*8+6;
volatile bit	GP5	@ (unsigned)&GPIO*8+5;
volatile bit	GP4	@ (unsigned)&GPIO*8+4;
volatile bit	GP3	@ (unsigned)&GPIO*8+3;
volatile bit	GP2	@ (unsigned)&GPIO*8+2;
volatile bit	GP1	@ (unsigned)&GPIO*8+1;
volatile bit	GP0	@ (unsigned)&GPIO*8+0;
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
#if 	defined(_16C432)
volatile bit	CMIF	@ (unsigned)&PIR1*8+6;
#endif
#if	defined(_16C433)
volatile bit	ADIF	@ (unsigned)&PIR1*8+6;
#endif

#if	defined(_16C433)
/*	ADRES bits	*/
volatile bit	ADRES7	@ (unsigned)&ADRES*8+7;
volatile bit	ADRES6	@ (unsigned)&ADRES*8+6;
volatile bit	ADRES5	@ (unsigned)&ADRES*8+5;
volatile bit	ADRES4	@ (unsigned)&ADRES*8+4;
volatile bit	ADRES3	@ (unsigned)&ADRES*8+3;
volatile bit	ADRES2	@ (unsigned)&ADRES*8+2;
volatile bit	ADRES1	@ (unsigned)&ADRES*8+1;
volatile bit	ADRES0	@ (unsigned)&ADRES*8+0;

/*	ADCON0 bits	*/
volatile bit	ADCS1	@ (unsigned)&ADCON0*8+7;
volatile bit	ADCS0	@ (unsigned)&ADCON0*8+6;
volatile bit	CHS1	@ (unsigned)&ADCON0*8+4;
volatile bit	CHS0	@ (unsigned)&ADCON0*8+3;
volatile bit	GO_DONE	@ (unsigned)&ADCON0*8+2;
volatile bit	ADON	@ (unsigned)&ADCON0*8+0;
#endif

/*	CMCON bits	*/
#if	defined(_16C432)
volatile bit	C2OUT	@ (unsigned)&CMCON*8+7;
volatile bit 	C1OUT	@ (unsigned)&CMCON*8+6;
volatile bit	CIS	@ (unsigned)&CMCON*8+3;
volatile bit	CM2	@ (unsigned)&CMCON*8+2;
volatile bit	CM1	@ (unsigned)&CMCON*8+1;
volatile bit	CM0	@ (unsigned)&CMCON*8+0;
#endif

/*	OPTION bits	*/
#if	defined(_16C432)
volatile bit      	RBPU	@ (unsigned)&OPTION*8+7;
#endif
#if	defined(_16C433)
volatile bit      	GPPU	@ (unsigned)&OPTION*8+7;
#endif
volatile bit      	INTEDG	@ (unsigned)&OPTION*8+6;
volatile bit      	T0CS	@ (unsigned)&OPTION*8+5;
volatile bit      	T0SE	@ (unsigned)&OPTION*8+4;
volatile bit      	PSA	@ (unsigned)&OPTION*8+3;
volatile bit      	PS2	@ (unsigned)&OPTION*8+2;
volatile bit      	PS1	@ (unsigned)&OPTION*8+1;
volatile bit      	PS0	@ (unsigned)&OPTION*8+0;

#if	defined(_16C432)
/*	TRISA	bits	*/
volatile bit      	TRISA4	@ (unsigned)&TRISA*8+4;
volatile bit      	TRISA3	@ (unsigned)&TRISA*8+3;
volatile bit      	TRISA2	@ (unsigned)&TRISA*8+2;
volatile bit      	TLINRX	@ (unsigned)&TRISA*8+1;
volatile bit      	TRISA0	@ (unsigned)&TRISA*8+0;

/*	TRISB bits 	*/
volatile bit      	TRISB7	@ (unsigned)&TRISB*8+4;
volatile bit      	TRISB6	@ (unsigned)&TRISB*8+4;
volatile bit      	TRISB5	@ (unsigned)&TRISB*8+4;
volatile bit      	TRISB4	@ (unsigned)&TRISB*8+4;
volatile bit      	TRISB3	@ (unsigned)&TRISB*8+4;
volatile bit      	TRISB2	@ (unsigned)&TRISB*8+4;
volatile bit      	TRISB1	@ (unsigned)&TRISB*8+4;
volatile bit      	TRISB0	@ (unsigned)&TRISB*8+4;
#endif

#if	defined(_16C433)
/*	TRIS bits	*/
volatile	bit      	TRIS5	@ (unsigned)&TRIS*8+5;
volatile	bit      	TRIS4	@ (unsigned)&TRIS*8+4;
volatile	bit      	TRIS3	@ (unsigned)&TRIS*8+3;
volatile	bit      	TRIS2	@ (unsigned)&TRIS*8+2;
volatile	bit      	TRIS1	@ (unsigned)&TRIS*8+1;
volatile	bit      	TRIS0	@ (unsigned)&TRIS*8+0;
#endif

/*	PIE1 bits	*/
#if	defined(_16C432)
volatile bit      	CMIE	@ (unsigned)&PIE1*8+6;
#endif
#if	defined(_16C433)
volatile bit      	ADIE	@ (unsigned)&PIE1*8+6;
#endif
	
/*	PCON bits	*/
volatile bit      	POR	@ (unsigned)&PCON*8+1;
#if	defined(_16C432)
volatile bit      	BOD	@ (unsigned)&PCON*8+0;
#endif

#if	defined(_16C432)
/*	LININTF bits	*/
volatile bit      	LINTX	@ (unsigned)&LININTF*8+1;
volatile bit      	LINV 	@ (unsigned)&LININTF*8+0;

/*	VRCON bits	*/
volatile bit      	VREN	@ (unsigned)&VRCON*8+7;
volatile bit      	VROE	@ (unsigned)&VRCON*8+6;
volatile bit      	VRR	@ (unsigned)&VRCON*8+5;
volatile bit      	VR3	@ (unsigned)&VRCON*8+3;
volatile bit      	VR2	@ (unsigned)&VRCON*8+2;
volatile bit      	VR1	@ (unsigned)&VRCON*8+1;
volatile bit      	VR0	@ (unsigned)&VRCON*8+0;
#endif

#if 	defined(_16C433)
/*	OSCCAL bits	*/
volatile	bit	     	CAL3	@ (unsigned)&OSCCAL*8+7;
volatile	bit	     	CAL2	@ (unsigned)&OSCCAL*8+6;
volatile	bit	     	CAL1	@ (unsigned)&OSCCAL*8+5;
volatile	bit	     	CAL0	@ (unsigned)&OSCCAL*8+4;
volatile	bit	     	CALFST	@ (unsigned)&OSCCAL*8+3;
volatile	bit	     	CALSLW	@ (unsigned)&OSCCAL*8+2;

/*	ADCON1 bits	*/
volatile bit      	PCFG2	@ (unsigned)&ADCON1*8+2;
volatile bit      	PCFG1	@ (unsigned)&ADCON1*8+1;
volatile bit      	PCFG0	@ (unsigned)&ADCON1*8+0;
#endif

#define CONFIG_ADDR	0x2007

