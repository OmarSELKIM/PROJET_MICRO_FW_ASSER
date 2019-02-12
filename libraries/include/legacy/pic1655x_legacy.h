
#ifndef	_HTC_H_
#warning Header file pic1655x.h included directly. Use #include <htc.h> instead.
#endif

/* 	
 *	Header file for the Microchip :
 *	PIC 16C554 chip
 *	PIC 16C554A chip
 *	PIC 16C556 chip
 *	PIC 16C556A chip
 *	PIC 16C557 chip
 *	PIC 16C558 chip
 *	PIC 16C558A chip
 *	Midrange Microcontrollers
 */

volatile unsigned char	INDF	@ 0x00;
volatile unsigned char	TMR0	@ 0x01;
volatile unsigned char	PCL	@ 0x02;
volatile unsigned char	STATUS	@ 0x03;
volatile	unsigned char	FSR	@ 0x04;
volatile unsigned char	PORTA	@ 0x05;
volatile unsigned char	PORTB	@ 0x06;
#if defined(_16C557)
volatile unsigned char	PORTC	@ 0x07;
#endif
volatile	unsigned char		PCLATH	@ 0x0A;
volatile unsigned char	INTCON	@ 0x0B;

volatile	unsigned char	     	OPTION	@ 0x81;
volatile	unsigned char      	TRISA	@ 0x85;
volatile	unsigned char      	TRISB	@ 0x86;
#if defined(_16C557)
volatile	unsigned char      	TRISC	@ 0x87;
#endif
volatile unsigned char      	PCON	@ 0x8E;

/*	STATUS bits	*/
volatile bit	RP0	@ (unsigned)&STATUS*8+5;
volatile bit	TO	@ (unsigned)&STATUS*8+4;
volatile bit	PD	@ (unsigned)&STATUS*8+3;
volatile bit	ZERO	@ (unsigned)&STATUS*8+2;
volatile bit	DC	@ (unsigned)&STATUS*8+1;
volatile bit	CARRY	@ (unsigned)&STATUS*8+0;

/*	PORTA bits	*/
volatile bit	RA4	@ (unsigned)&PORTA*8+4;
volatile bit	RA3	@ (unsigned)&PORTA*8+3;
volatile bit	RA2	@ (unsigned)&PORTA*8+2;
volatile bit	RA1	@ (unsigned)&PORTA*8+1;
volatile bit	RA0	@ (unsigned)&PORTA*8+0;

/*	PORTB bits	*/
volatile bit 	RB7	@ (unsigned)&PORTB*8+7;
volatile bit 	RB6	@ (unsigned)&PORTB*8+6;
volatile bit 	RB5	@ (unsigned)&PORTB*8+5;
volatile bit 	RB4	@ (unsigned)&PORTB*8+4;
volatile bit 	RB3	@ (unsigned)&PORTB*8+3;
volatile bit 	RB2	@ (unsigned)&PORTB*8+2;
volatile bit 	RB1	@ (unsigned)&PORTB*8+1;
volatile bit 	RB0	@ (unsigned)&PORTB*8+0;

#if defined(_16C557)
/*	PORTC bits	*/
volatile bit 	RC7	@ (unsigned)&PORTC*8+7;
volatile bit 	RC6	@ (unsigned)&PORTC*8+6;
volatile bit 	RC5	@ (unsigned)&PORTC*8+5;
volatile bit 	RC4	@ (unsigned)&PORTC*8+4;
volatile bit 	RC3	@ (unsigned)&PORTC*8+3;
volatile bit 	RC2	@ (unsigned)&PORTC*8+2;
volatile bit 	RC1	@ (unsigned)&PORTC*8+1;
volatile bit 	RC0	@ (unsigned)&PORTC*8+0;
#endif

/*	INTCON bits	*/
volatile bit	GIE	@ (unsigned)&INTCON*8+7;
volatile bit	T0IE	@ (unsigned)&INTCON*8+5;
volatile bit	INTE	@ (unsigned)&INTCON*8+4;
volatile bit	RBIE	@ (unsigned)&INTCON*8+3;
volatile bit	T0IF	@ (unsigned)&INTCON*8+2;
volatile bit	INTF	@ (unsigned)&INTCON*8+1;
volatile bit	RBIF	@ (unsigned)&INTCON*8+0;

/*	OPTION bits	*/
volatile	bit	RBPU	@ (unsigned)&OPTION*8+7;
volatile	bit	INTEDG	@ (unsigned)&OPTION*8+6;
volatile	bit	T0CS	@ (unsigned)&OPTION*8+5;
volatile	bit	T0SE	@ (unsigned)&OPTION*8+4;
volatile	bit	PSA	@ (unsigned)&OPTION*8+3;
volatile	bit	PS2	@ (unsigned)&OPTION*8+2;
volatile	bit	PS1	@ (unsigned)&OPTION*8+1;
volatile	bit	PS0	@ (unsigned)&OPTION*8+0;

/*	TRISA bits	*/
volatile       bit	TRISA4	@ (unsigned)&TRISA*8+4;
volatile       bit	TRISA3	@ (unsigned)&TRISA*8+3;
volatile       bit	TRISA2	@ (unsigned)&TRISA*8+2;
volatile       bit	TRISA1	@ (unsigned)&TRISA*8+1;
volatile       bit	TRISA0	@ (unsigned)&TRISA*8+0;

/*	TRISB bits	*/
volatile       bit	TRISB7	@ (unsigned)&TRISB*8+7;
volatile       bit	TRISB6	@ (unsigned)&TRISB*8+6;
volatile       bit	TRISB5	@ (unsigned)&TRISB*8+5;
volatile       bit	TRISB4	@ (unsigned)&TRISB*8+4;
volatile       bit	TRISB3	@ (unsigned)&TRISB*8+3;
volatile       bit	TRISB2	@ (unsigned)&TRISB*8+2;
volatile       bit	TRISB1	@ (unsigned)&TRISB*8+1;
volatile       bit	TRISB0	@ (unsigned)&TRISB*8+0;

#if defined(_16C557)
/*	TRISC bits	*/
volatile       bit	TRISC7	@ (unsigned)&TRISC*8+7;
volatile       bit	TRISC6	@ (unsigned)&TRISC*8+6;
volatile       bit	TRISC5	@ (unsigned)&TRISC*8+5;
volatile       bit	TRISC4	@ (unsigned)&TRISC*8+4;
volatile       bit	TRISC3	@ (unsigned)&TRISC*8+3;
volatile       bit	TRISC2	@ (unsigned)&TRISC*8+2;
volatile       bit	TRISC1	@ (unsigned)&TRISC*8+1;
volatile       bit	TRISC0	@ (unsigned)&TRISC*8+0;
#endif

/*	PCON bits	*/
volatile       bit	POR	@ (unsigned)&PCON*8+1;

#define CONFIG_ADDR	0x2007

