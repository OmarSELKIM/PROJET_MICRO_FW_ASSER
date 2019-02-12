#ifndef	_HTC_H_
 #warning Header file pic12f519.h included directly. Use #include <htc.h> instead.
#endif

 /* header file for the MICROCHIP PIC microcontroller
	12F519
 */

#ifndef	__PIC12F519_H
#define	__PIC12F519_H

// Special function register definitions

volatile       unsigned char	INDF		@ 0x000;
volatile control unsigned char	TRIS		@ 0x006;
volatile	control unsigned char	OPTION		@ 0x000;
volatile       unsigned char	TMR0		@ 0x001;
volatile       unsigned char	PCL		@ 0x002;
volatile       unsigned char	STATUS		@ 0x003;
volatile	unsigned char	FSR		@ 0x004;
volatile	unsigned char	OSCCAL		@ 0x005;
volatile       unsigned char	PORTB		@ 0x006;
volatile       unsigned char	EECON		@ 0x021;
volatile       unsigned char	EEDATA		@ 0x025;
/* Alternate definition */
volatile       unsigned char	EEDATL		@ 0x025;
volatile       unsigned char	EEADR		@ 0x026;
/* Alternate definition */
volatile       unsigned char	EEADRL		@ 0x026;


/* Definitions for TRIS register */
#define TRIS0	(1<<0)
#define TRIS1	(1<<1)
#define TRIS2	(1<<2)
#define TRIS3	(1<<3)
#define TRIS4	(1<<4)
#define TRIS5	(1<<5)

/* Definitions for OPTION register */
#define PS0	(1<<0)
#define PS1	(1<<1)
#define PS2	(1<<2)
#define PSA	(1<<3)
#define T0SE	(1<<4)
#define T0CS	(1<<5)
#define RBPU	(1<<6)
#define RBWU	(1<<7)

/* Definitions for STATUS register */
volatile       bit	CARRY		@ ((unsigned)&STATUS*8)+0;
volatile       bit	DC		@ ((unsigned)&STATUS*8)+1;
volatile       bit	ZERO		@ ((unsigned)&STATUS*8)+2;
volatile       bit	PD		@ ((unsigned)&STATUS*8)+3;
volatile       bit	TO		@ ((unsigned)&STATUS*8)+4;
volatile	bit	PA0		@ ((unsigned)&STATUS*8)+5;
volatile       bit	RBWUF		@ ((unsigned)&STATUS*8)+7;

/* Definitions for OSCCAL register */
volatile	bit	CAL0		@ ((unsigned)&OSCCAL*8)+1;
volatile	bit	CAL1		@ ((unsigned)&OSCCAL*8)+2;
volatile	bit	CAL2		@ ((unsigned)&OSCCAL*8)+3;
volatile	bit	CAL3		@ ((unsigned)&OSCCAL*8)+4;
volatile	bit	CAL4		@ ((unsigned)&OSCCAL*8)+5;
volatile	bit	CAL5		@ ((unsigned)&OSCCAL*8)+6;
volatile	bit	CAL6		@ ((unsigned)&OSCCAL*8)+7;

/* Definitions for PORTB register */
volatile       bit	RB0		@ ((unsigned)&PORTB*8)+0;
volatile       bit	RB1		@ ((unsigned)&PORTB*8)+1;
volatile       bit	RB2		@ ((unsigned)&PORTB*8)+2;
volatile       bit	RB3		@ ((unsigned)&PORTB*8)+3;
volatile       bit	RB4		@ ((unsigned)&PORTB*8)+4;
volatile       bit	RB5		@ ((unsigned)&PORTB*8)+5;

/* Definitions for EECON register */
volatile       bit	RD		@ ((unsigned)&EECON*8)+0;
volatile       bit	WR		@ ((unsigned)&EECON*8)+1;
volatile       bit	WREN		@ ((unsigned)&EECON*8)+2;
volatile       bit	WRERR		@ ((unsigned)&EECON*8)+3;
volatile       bit	FREE		@ ((unsigned)&EECON*8)+4;

#define CONFIG_ADDR	0x7FF

#endif
