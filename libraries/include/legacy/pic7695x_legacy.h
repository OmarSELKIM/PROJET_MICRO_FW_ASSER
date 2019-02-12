/*
 *	Header file for Cypress 7C695x Microcontroller
 */


volatile unsigned char		INDF		@ 0x00;
volatile unsigned char		PCL		@ 0x02;
volatile unsigned char		STATUS		@ 0x03;
volatile unsigned char		STAT		@ 0x03;
volatile	unsigned char		FSR		@ 0x04;
volatile	unsigned char		PCLATH		@ 0x0A;
volatile unsigned char		INTCON		@ 0x0B;
volatile unsigned char		PORTB		@ 0x06;
volatile	unsigned char	     	TRISB		@ 0x86;
volatile	unsigned char		ICKBUG		@ 0x0E;
volatile	unsigned char		BIGBUG  	@ 0x0F;
volatile unsigned char		EXTDATA1	@ 0x10;
volatile unsigned char		EXTDATA2	@ 0x11;
volatile	unsigned char		EXTADDR1L	@ 0x12;
volatile	unsigned char		EXTADDR1H	@ 0x13;
volatile	unsigned char		EXTADDR2L	@ 0x14;
volatile	unsigned char		EXTADDR2H	@ 0x15;
volatile unsigned char		DIAG		@ 0x7F;


/*	STATUS bits	*/
volatile bit	IRP     @ (unsigned)&STATUS*8+7;
volatile bit	RP1     @ (unsigned)&STATUS*8+6;
volatile bit	RP0     @ (unsigned)&STATUS*8+5;
volatile bit	TO	@ (unsigned)&STATUS*8+4;
volatile bit	PD	@ (unsigned)&STATUS*8+3;
volatile bit	ZERO    @ (unsigned)&STATUS*8+2;
volatile bit	DC      @ (unsigned)&STATUS*8+1;
volatile bit	CARRY   @ (unsigned)&STATUS*8+0;

/*	INTCON bits	*/
volatile bit	GIE	@ (unsigned)&INTCON*8+7;
volatile bit	PEIE	@ (unsigned)&INTCON*8+6;
volatile bit	T0IE	@ (unsigned)&INTCON*8+5;
volatile bit	TMR0IE	@ (unsigned)&INTCON*8+5;
volatile bit	INTE	@ (unsigned)&INTCON*8+4;
volatile bit	RBIE	@ (unsigned)&INTCON*8+3;
volatile bit	T0IF	@ (unsigned)&INTCON*8+2;
volatile bit	TMR0IF	@ (unsigned)&INTCON*8+2;
volatile bit	INTF	@ (unsigned)&INTCON*8+1;
volatile bit	RBIF	@ (unsigned)&INTCON*8+0;

/*      PORTB bits      */
volatile bit	RB7	@ (unsigned)&PORTB*8+7;
volatile bit	RB6	@ (unsigned)&PORTB*8+6;
volatile bit	RB5	@ (unsigned)&PORTB*8+5;
volatile bit	RB4	@ (unsigned)&PORTB*8+4;
volatile bit	RB3	@ (unsigned)&PORTB*8+3;
volatile bit	RB2	@ (unsigned)&PORTB*8+2;
volatile bit	RB1	@ (unsigned)&PORTB*8+1;
volatile bit	RB0	@ (unsigned)&PORTB*8+0;

/*      TRISB bits      */
volatile	bit	TRISB7	@ (unsigned)&TRISB*8+7;
volatile	bit	TRISB6	@ (unsigned)&TRISB*8+6;
volatile	bit	TRISB5	@ (unsigned)&TRISB*8+5;
volatile	bit	TRISB4	@ (unsigned)&TRISB*8+4;
volatile	bit	TRISB3	@ (unsigned)&TRISB*8+3;
volatile	bit	TRISB2	@ (unsigned)&TRISB*8+2;
volatile	bit	TRISB1	@ (unsigned)&TRISB*8+1;
volatile	bit	TRISB0	@ (unsigned)&TRISB*8+0;

