
#ifndef	_HTC_H_
#warning Header file pic10f22x.h included directly. Use #include <htc.h> instead.
#endif

 /* header file for the MICROCHIP PIC microcontrollers
  * PIC10F220
  * PIC10F222
 */

#ifndef	__PIC10F22X_H
#define	__PIC10F22X_H

// Special function register definitions

volatile       unsigned char	INDF		@ 0x00;
volatile       unsigned char	TMR0		@ 0x001;
volatile       unsigned char	PCL		@ 0x002;
volatile       unsigned char	STATUS		@ 0x003;
volatile	unsigned char	FSR		@ 0x004;
volatile	unsigned char	OSCCAL		@ 0x005;
volatile       unsigned char	GPIO		@ 0x006;
volatile       unsigned char	ADCON0		@ 0x007;
volatile       unsigned char	ADRES		@ 0x008;

volatile	unsigned char	control	OPTION		@ 0x00;
volatile	unsigned char control	TRISGPIO	@ 0x06;
// alternate definition
volatile	unsigned char control	TRIS		@ 0x06;


/* Definitions for STATUS register */
volatile       bit	CARRY		@ ((unsigned)&STATUS*8)+0;
volatile       bit	DC		@ ((unsigned)&STATUS*8)+1;
volatile       bit	ZERO		@ ((unsigned)&STATUS*8)+2;
volatile       bit	PD		@ ((unsigned)&STATUS*8)+3;
volatile       bit	TO		@ ((unsigned)&STATUS*8)+4;
volatile       bit	GPWUF		@ ((unsigned)&STATUS*8)+7;

/* Definitions for OSCCAL register */
volatile	bit	FOSC4		@ ((unsigned)&OSCCAL*8)+0;
volatile	bit	CAL0		@ ((unsigned)&OSCCAL*8)+1;
volatile	bit	CAL1		@ ((unsigned)&OSCCAL*8)+2;
volatile	bit	CAL2		@ ((unsigned)&OSCCAL*8)+3;
volatile	bit	CAL3		@ ((unsigned)&OSCCAL*8)+4;
volatile	bit	CAL4		@ ((unsigned)&OSCCAL*8)+5;
volatile	bit	CAL5		@ ((unsigned)&OSCCAL*8)+6;
volatile	bit	CAL6		@ ((unsigned)&OSCCAL*8)+7;

/* Definitions for GPIO register */
volatile       bit	GP0		@ ((unsigned)&GPIO*8)+0;
volatile       bit	GP1		@ ((unsigned)&GPIO*8)+1;
volatile       bit	GP2		@ ((unsigned)&GPIO*8)+2;
volatile       bit	GP3		@ ((unsigned)&GPIO*8)+3;

/* Definitions for ADCON0 register */
volatile	bit	ADON		@ ((unsigned)&ADCON0*8)+0;
volatile       bit	GODONE		@ ((unsigned)&ADCON0*8)+1;
volatile	bit	CHS0		@ ((unsigned)&ADCON0*8)+2;
volatile	bit	CHS1		@ ((unsigned)&ADCON0*8)+3;
volatile	bit	ANS0		@ ((unsigned)&ADCON0*8)+6;
volatile	bit	ANS1		@ ((unsigned)&ADCON0*8)+7;

/*	OPTION bits	*/
#define		GPWU	(1<<7)
#define		GPPU	(1<<6)
#define		T0CS	(1<<5)
#define		T0SE	(1<<4)
#define		PSA	(1<<3)
#define		PS2	(1<<2)
#define		PS1	(1<<1)
#define		PS0	(1<<0)

#endif
