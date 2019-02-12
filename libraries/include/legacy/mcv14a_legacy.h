#ifndef	_HTC_H_
 #warning Header file mcv14a.h included directly. Use #include <htc.h> instead.
#endif

 /* header file for the MICROCHIP microcontroller
  * MCV14A
 */

#ifndef	__MCV14A_H
#define	__MCV14A_H

// Special function register definitions

volatile       unsigned char	INDF		@ 0x000;
volatile control unsigned char	TRISB		@ 0x006;
volatile control unsigned char	TRISC		@ 0x007;
volatile	control unsigned char	OPTION		@ 0x000;
volatile       unsigned char	TMR0		@ 0x001;
volatile       unsigned char	PCL		@ 0x002;
volatile       unsigned char	STATUS		@ 0x003;
volatile	unsigned char	FSR		@ 0x004;
volatile	unsigned char	OSCCAL		@ 0x005;
volatile       unsigned char	PORTB		@ 0x006;
volatile       unsigned char	PORTC		@ 0x007;
volatile       unsigned char	CM1CON0		@ 0x008;
volatile       unsigned char	ADCON0		@ 0x009;
volatile       unsigned char	ADRES		@ 0x00A;
volatile       unsigned char	CM2CON0		@ 0x00B;
volatile	unsigned char	VRCON		@ 0x00C;
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
volatile       bit	CWUF		@ ((unsigned)&STATUS*8)+6;
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

/* Definitions for PORTC register */
volatile       bit	RC0		@ ((unsigned)&PORTC*8)+0;
volatile       bit	RC1		@ ((unsigned)&PORTC*8)+1;
volatile       bit	RC2		@ ((unsigned)&PORTC*8)+2;
volatile       bit	RC3		@ ((unsigned)&PORTC*8)+3;
volatile       bit	RC4		@ ((unsigned)&PORTC*8)+4;
volatile       bit	RC5		@ ((unsigned)&PORTC*8)+5;

/* Definitions for CM1CON0 register */
volatile	bit	C1WU		@ ((unsigned)&CM1CON0*8)+0;
volatile	bit	C1PREF		@ ((unsigned)&CM1CON0*8)+1;
volatile	bit	C1NREF		@ ((unsigned)&CM1CON0*8)+2;
volatile	bit	C1ON		@ ((unsigned)&CM1CON0*8)+3;
volatile	bit	C1T0CS		@ ((unsigned)&CM1CON0*8)+4;
volatile	bit	C1POL		@ ((unsigned)&CM1CON0*8)+5;
volatile	bit	C1OUTEN		@ ((unsigned)&CM1CON0*8)+6;
volatile       bit	C1OUT		@ ((unsigned)&CM1CON0*8)+7;

/* Definitions for ADCON0 register */
volatile	bit	ADON		@ ((unsigned)&ADCON0*8)+0;
volatile       bit	GODONE		@ ((unsigned)&ADCON0*8)+1;
volatile	bit	CHS0		@ ((unsigned)&ADCON0*8)+2;
volatile	bit	CHS1		@ ((unsigned)&ADCON0*8)+3;
volatile	bit	ADCS0		@ ((unsigned)&ADCON0*8)+4;
volatile	bit	ADCS1		@ ((unsigned)&ADCON0*8)+5;
volatile	bit	ANS0		@ ((unsigned)&ADCON0*8)+6;
volatile	bit	ANS1		@ ((unsigned)&ADCON0*8)+7;

/* Definitions for CM2CON0 register */
volatile	bit	C2WU		@ ((unsigned)&CM2CON0*8)+0;
volatile	bit	C2PREF1		@ ((unsigned)&CM2CON0*8)+1;
volatile	bit	C2NREF		@ ((unsigned)&CM2CON0*8)+2;
volatile	bit	C2ON		@ ((unsigned)&CM2CON0*8)+3;
volatile	bit	C2PREF2		@ ((unsigned)&CM2CON0*8)+4;
volatile	bit	C2POL		@ ((unsigned)&CM2CON0*8)+5;
volatile	bit	C2OUTEN		@ ((unsigned)&CM2CON0*8)+6;
volatile       bit	C2OUT		@ ((unsigned)&CM2CON0*8)+7;

/* Definitions for VRCON register */
volatile	bit	VR0		@ ((unsigned)&VRCON*8)+0;
volatile	bit	VR1		@ ((unsigned)&VRCON*8)+1;
volatile	bit	VR2		@ ((unsigned)&VRCON*8)+2;
volatile	bit	VR3		@ ((unsigned)&VRCON*8)+3;
volatile	bit	VRR		@ ((unsigned)&VRCON*8)+5;
volatile	bit	VROE		@ ((unsigned)&VRCON*8)+6;
volatile	bit	VREN		@ ((unsigned)&VRCON*8)+7;

/* Definitions for EECON register */
volatile       bit	RD		@ ((unsigned)&EECON*8)+0;
volatile       bit	WR		@ ((unsigned)&EECON*8)+1;
volatile bit	WREN		@ ((unsigned)&EECON*8)+2;
volatile       bit	WRERR		@ ((unsigned)&EECON*8)+3;
volatile       bit	FREE		@ ((unsigned)&EECON*8)+4;

#define CONFIG_ADDR	0x7FF

#endif
