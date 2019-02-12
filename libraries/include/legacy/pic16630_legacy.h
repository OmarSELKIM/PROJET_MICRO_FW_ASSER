
#ifndef	_HTC_H_
#warning Header file pic16630.h included directly. Use #include <htc.h> instead.
#endif


 /* header file for the MICROCHIP PIC microcontrollers
  * PIC16F630
  * PIC16F676
 */

#ifndef	__PIC16630_H
#define	__PIC16630_H

// Special function register definitions

volatile       unsigned char	INDF		@ 0x00;
volatile       unsigned char	TMR0		@ 0x01;
volatile       unsigned char	PCL		@ 0x02;
volatile       unsigned char	STATUS		@ 0x03;
volatile	unsigned char	FSR		@ 0x04;
volatile       unsigned char	PORTA		@ 0x05;
volatile       unsigned char	PORTC		@ 0x07;
volatile       unsigned char	PCLATH		@ 0x0A;
volatile       unsigned char	INTCON		@ 0x0B;
volatile       unsigned char	PIR1		@ 0x0C;
volatile       unsigned char	TMR1L		@ 0x0E;
volatile       unsigned char	TMR1H		@ 0x0F;
volatile       unsigned char	T1CON		@ 0x10;
volatile       unsigned char	CMCON		@ 0x19;
#if defined(_16F676)
volatile       unsigned char	ADRESH		@ 0x1E;
volatile       unsigned char	ADCON0		@ 0x1F;
#endif
volatile	unsigned char	OPTION		@ 0x81;
volatile       unsigned char	TRISA		@ 0x85;
volatile       unsigned char	TRISC		@ 0x87;
volatile	unsigned char	PIE1		@ 0x8C;
volatile       unsigned char	PCON		@ 0x8E;
volatile	unsigned char	OSCCAL		@ 0x90;
#if defined(_16F676)
volatile	unsigned char	ANSEL		@ 0x91;
#endif
volatile	unsigned char	WPUA		@ 0x95;
volatile	unsigned char	IOCA		@ 0x96;
volatile	unsigned char	VRCON		@ 0x99;
volatile       unsigned char	EEDAT		@ 0x9A;
// alternate definition
volatile       unsigned char	EEDATA		@ 0x9A;
volatile       unsigned char	EEADR		@ 0x9B;
volatile       unsigned char	EECON1		@ 0x9C;
volatile       unsigned char	EECON2		@ 0x9D;
#if defined(_16F676)
volatile       unsigned char	ADRESL		@ 0x9E;
volatile	unsigned char	ADCON1		@ 0x9F;
#endif


/* Definitions for STATUS register */
volatile       bit	CARRY	@((unsigned)&STATUS*8)+0;
volatile       bit	DC	@((unsigned)&STATUS*8)+1;
volatile       bit	ZERO	@((unsigned)&STATUS*8)+2;
volatile       bit	PD	@((unsigned)&STATUS*8)+3;
volatile       bit	TO	@((unsigned)&STATUS*8)+4;
volatile	bit	RP0	@((unsigned)&STATUS*8)+5;

/* Definitions for PORTA register */
volatile       bit	RA0	@((unsigned)&PORTA*8)+0;
volatile       bit	RA1	@((unsigned)&PORTA*8)+1;
volatile       bit	RA2	@((unsigned)&PORTA*8)+2;
volatile       bit	RA3	@((unsigned)&PORTA*8)+3;
volatile       bit	RA4	@((unsigned)&PORTA*8)+4;
volatile       bit	RA5	@((unsigned)&PORTA*8)+5;

/* Definitions for PORTC register */
volatile       bit	RC0	@((unsigned)&PORTC*8)+0;
volatile       bit	RC1	@((unsigned)&PORTC*8)+1;
volatile       bit	RC2	@((unsigned)&PORTC*8)+2;
volatile       bit	RC3	@((unsigned)&PORTC*8)+3;
volatile       bit	RC4	@((unsigned)&PORTC*8)+4;
volatile       bit	RC5	@((unsigned)&PORTC*8)+5;

/* Definitions for INTCON register */
volatile       bit	RAIF	@((unsigned)&INTCON*8)+0;
volatile       bit	INTF	@((unsigned)&INTCON*8)+1;
volatile       bit	T0IF	@((unsigned)&INTCON*8)+2;
volatile	bit	RAIE	@((unsigned)&INTCON*8)+3;
volatile	bit	INTE	@((unsigned)&INTCON*8)+4;
volatile	bit	T0IE	@((unsigned)&INTCON*8)+5;
volatile	bit	PEIE	@((unsigned)&INTCON*8)+6;
volatile bit	GIE	@((unsigned)&INTCON*8)+7;

/* Definitions for PIR1 register */
volatile       bit	TMR1IF	@((unsigned)&PIR1*8)+0;
volatile       bit	CMIF	@((unsigned)&PIR1*8)+3;
#if defined(_16F676)
volatile       bit	ADIF	@((unsigned)&PIR1*8)+6;
#endif
volatile       bit	EEIF	@((unsigned)&PIR1*8)+7;

/* Definitions for T1CON register */
volatile	bit	TMR1ON	@((unsigned)&T1CON*8)+0;
volatile	bit	TMR1CS	@((unsigned)&T1CON*8)+1;
volatile	bit	T1SYNC	@((unsigned)&T1CON*8)+2;
volatile	bit	T1OSCEN	@((unsigned)&T1CON*8)+3;
volatile	bit	T1CKPS0	@((unsigned)&T1CON*8)+4;
volatile	bit	T1CKPS1	@((unsigned)&T1CON*8)+5;
volatile	bit	T1GE	@((unsigned)&T1CON*8)+6;
// alternate definition
volatile	bit	TMR1GE	@((unsigned)&T1CON*8)+6;

/* Definitions for CMCON register */
volatile	bit	CM0	@((unsigned)&CMCON*8)+0;
volatile	bit	CM1	@((unsigned)&CMCON*8)+1;
volatile	bit	CM2	@((unsigned)&CMCON*8)+2;
volatile	bit	CIS	@((unsigned)&CMCON*8)+3;
volatile	bit	CINV	@((unsigned)&CMCON*8)+4;
volatile       bit	COUT	@((unsigned)&CMCON*8)+6;

#if defined(_16F676)
/* Definitions for ADCON0 register */
volatile	bit	ADON	@((unsigned)&ADCON0*8)+0;
volatile       bit	GODONE	@((unsigned)&ADCON0*8)+1;
volatile	bit	CHS0	@((unsigned)&ADCON0*8)+2;
volatile	bit	CHS1	@((unsigned)&ADCON0*8)+3;
volatile	bit	CHS2	@((unsigned)&ADCON0*8)+4;
volatile	bit	VCFG	@((unsigned)&ADCON0*8)+6;
volatile	bit	ADFM	@((unsigned)&ADCON0*8)+7;
#endif

/* Definitions for OPTION register */
volatile	bit	PS0	@((unsigned)&OPTION*8)+0;
volatile	bit	PS1	@((unsigned)&OPTION*8)+1;
volatile	bit	PS2	@((unsigned)&OPTION*8)+2;
volatile	bit	PSA	@((unsigned)&OPTION*8)+3;
volatile	bit	T0SE	@((unsigned)&OPTION*8)+4;
volatile	bit	T0CS	@((unsigned)&OPTION*8)+5;
volatile	bit	INTEDG	@((unsigned)&OPTION*8)+6;
volatile	bit	RAPU	@((unsigned)&OPTION*8)+7;

/* Definitions for TRISA register */
volatile       bit	TRISA0	@((unsigned)&TRISA*8)+0;
volatile       bit	TRISA1	@((unsigned)&TRISA*8)+1;
volatile       bit	TRISA2	@((unsigned)&TRISA*8)+2;
volatile       bit	TRISA3	@((unsigned)&TRISA*8)+3;
volatile       bit	TRISA4	@((unsigned)&TRISA*8)+4;
volatile       bit	TRISA5	@((unsigned)&TRISA*8)+5;

/* Definitions for TRISC register */
volatile       bit	TRISC0	@((unsigned)&TRISC*8)+0;
volatile       bit	TRISC1	@((unsigned)&TRISC*8)+1;
volatile       bit	TRISC2	@((unsigned)&TRISC*8)+2;
volatile       bit	TRISC3	@((unsigned)&TRISC*8)+3;
volatile       bit	TRISC4	@((unsigned)&TRISC*8)+4;
volatile       bit	TRISC5	@((unsigned)&TRISC*8)+5;

/* Definitions for PIE1 register */
volatile	bit	TMR1IE	@((unsigned)&PIE1*8)+0;
volatile	bit	CMIE	@((unsigned)&PIE1*8)+3;
#if defined(_16F676)
volatile	bit	ADIE	@((unsigned)&PIE1*8)+6;
#endif
volatile	bit	EEIE	@((unsigned)&PIE1*8)+7;

/* Definitions for PCON register */
volatile       bit	BOR	@((unsigned)&PCON*8)+0;
volatile       bit	POR	@((unsigned)&PCON*8)+1;

/* Definitions for OSCCAL register */
volatile	bit	CAL0	@((unsigned)&OSCCAL*8)+2;
volatile	bit	CAL1	@((unsigned)&OSCCAL*8)+3;
volatile	bit	CAL2	@((unsigned)&OSCCAL*8)+4;
volatile	bit	CAL3	@((unsigned)&OSCCAL*8)+5;
volatile	bit	CAL4	@((unsigned)&OSCCAL*8)+6;
volatile	bit	CAL5	@((unsigned)&OSCCAL*8)+7;

#if defined(_16F676)
/* Definitions for ANSEL register */
volatile	bit	ANS0	@((unsigned)&ANSEL*8)+0;
volatile	bit	ANS1	@((unsigned)&ANSEL*8)+1;
volatile	bit	ANS2	@((unsigned)&ANSEL*8)+2;
volatile	bit	ANS3	@((unsigned)&ANSEL*8)+3;
volatile	bit	ANS4	@((unsigned)&ANSEL*8)+4;
volatile	bit	ANS5	@((unsigned)&ANSEL*8)+5;
volatile	bit	ANS6	@((unsigned)&ANSEL*8)+6;
volatile	bit	ANS7	@((unsigned)&ANSEL*8)+7;
#endif

/* Definitions for WPUA register */
volatile	bit	WPUA0	@((unsigned)&WPUA*8)+0;
volatile	bit	WPUA1	@((unsigned)&WPUA*8)+1;
volatile	bit	WPUA2	@((unsigned)&WPUA*8)+2;
volatile	bit	WPUA4	@((unsigned)&WPUA*8)+4;
volatile	bit	WPUA5	@((unsigned)&WPUA*8)+5;

/* Definitions for IOCA register */
volatile	bit	IOCA0	@((unsigned)&IOCA*8)+0;
volatile	bit	IOCA1	@((unsigned)&IOCA*8)+1;
volatile	bit	IOCA2	@((unsigned)&IOCA*8)+2;
volatile	bit	IOCA3	@((unsigned)&IOCA*8)+3;
volatile	bit	IOCA4	@((unsigned)&IOCA*8)+4;
volatile	bit	IOCA5	@((unsigned)&IOCA*8)+5;

/* Definitions for VRCON register */
volatile	bit	VR0	@((unsigned)&VRCON*8)+0;
volatile	bit	VR1	@((unsigned)&VRCON*8)+1;
volatile	bit	VR2	@((unsigned)&VRCON*8)+2;
volatile	bit	VR3	@((unsigned)&VRCON*8)+3;
volatile	bit	VRR	@((unsigned)&VRCON*8)+5;
volatile	bit	VREN	@((unsigned)&VRCON*8)+7;

/* Definitions for EECON1 register */
volatile       bit	RD	@((unsigned)&EECON1*8)+0;
volatile       bit	WR	@((unsigned)&EECON1*8)+1;
volatile       bit	WREN	@((unsigned)&EECON1*8)+2;
volatile       bit	WRERR	@((unsigned)&EECON1*8)+3;

#if defined(_16F676)
/* Definitions for ADCON1 register */
volatile	bit	ADCS0	@((unsigned)&ADCON1*8)+4;
volatile	bit	ADCS1	@((unsigned)&ADCON1*8)+5;
volatile	bit	ADCS2	@((unsigned)&ADCON1*8)+6;
#endif

extern unsigned char __osccal_val(void);
#define	_READ_OSCCAL_DATA()	__osccal_val()


#define CONFIG_ADDR	0x2007

#endif
