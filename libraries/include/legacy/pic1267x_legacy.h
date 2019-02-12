
#ifndef	_HTC_H_
#warning Header file pic1267x.h included directly. Use #include <htc.h> instead.
#endif

/*
 *	Header file for the Microchip 
 *	PIC 12C671 chip
 *	PIC 12C672 chip
 *	PIC 12CE673 chip
 *	PIC 12CE674 chip
 *	Midrange Microcontrollers
 */

volatile unsigned char	INDF	@ 0x00;
volatile unsigned char	RTCC	@ 0x01;
volatile unsigned char	TMR0	@ 0x01;
volatile unsigned char	PCL	@ 0x02;
volatile unsigned char	STATUS	@ 0x03;
volatile	unsigned char	FSR	@ 0x04;
volatile unsigned char	GPIO	@ 0x05;
volatile	unsigned char	PCLATH	@ 0x0A;
volatile unsigned char	INTCON	@ 0x0B;
volatile unsigned char	PIR1	@ 0x0C;
volatile unsigned char	ADRES	@ 0x1E;
volatile unsigned char	ADCON0	@ 0x1F;

volatile	unsigned char	     	OPTION	@ 0x81;
volatile	unsigned char      	TRIS	@ 0x85;
volatile unsigned char      	PIE1	@ 0x8C;
volatile unsigned char      	PCON	@ 0x8E;
volatile unsigned char      	OSCCAL	@ 0x8F;
volatile unsigned char      	ADCON1	@ 0x9F;

/*	STATUS bits	*/
volatile bit	RP0	@ (unsigned)&STATUS*8+5;
volatile bit	TO	@ (unsigned)&STATUS*8+4;
volatile bit	PD	@ (unsigned)&STATUS*8+3;
volatile bit	ZERO	@ (unsigned)&STATUS*8+2;
volatile bit	DC	@ (unsigned)&STATUS*8+1;
volatile bit	CARRY	@ (unsigned)&STATUS*8+0;

/*	GPIO bits	*/
#if defined(_12CE673) || defined(_12CE674)
volatile bit	SCL	@ (unsigned)&GPIO*8+7;
volatile bit	SDA	@ (unsigned)&GPIO*8+6;
#endif
volatile bit	GP5	@ (unsigned)&GPIO*8+5;
volatile bit	GP4	@ (unsigned)&GPIO*8+4;
volatile bit	GP3	@ (unsigned)&GPIO*8+3;
volatile bit	GP2	@ (unsigned)&GPIO*8+2;
volatile bit	GP1	@ (unsigned)&GPIO*8+1;
volatile bit	GP0	@ (unsigned)&GPIO*8+0;

/*	INTCON bits	*/
volatile bit	GIE	@ (unsigned)&INTCON*8+7;
volatile bit	PEIE	@ (unsigned)&INTCON*8+6;
volatile bit	T0IE	@ (unsigned)&INTCON*8+5;
volatile bit	INTE	@ (unsigned)&INTCON*8+4;
volatile bit	GPIE	@ (unsigned)&INTCON*8+3;
volatile bit	T0IF	@ (unsigned)&INTCON*8+2;
volatile bit	INTF	@ (unsigned)&INTCON*8+1;
volatile bit	GPIF	@ (unsigned)&INTCON*8+0;

/*	PIR1 bits */
volatile bit	ADIF	@ (unsigned)&PIR1*8+6;

/*	ADCON0 bits	*/
volatile	bit	ADCS1	@ (unsigned)&ADCON0*8+7;
volatile	bit	ADCS0	@ (unsigned)&ADCON0*8+6;
volatile	bit	CHS1	@ (unsigned)&ADCON0*8+4;
volatile	bit	CHS0	@ (unsigned)&ADCON0*8+3;
volatile bit	GODONE	@ (unsigned)&ADCON0*8+2;
volatile	bit	ADON	@ (unsigned)&ADCON0*8+0;

/*	OPTION bits	*/
volatile	bit	GPPU	@ (unsigned)&OPTION*8+7;
volatile	bit	INTEDG	@ (unsigned)&OPTION*8+6;
volatile	bit	T0CS	@ (unsigned)&OPTION*8+5;
volatile	bit	T0SE	@ (unsigned)&OPTION*8+4;
volatile	bit	PSA	@ (unsigned)&OPTION*8+3;
volatile	bit	PS2	@ (unsigned)&OPTION*8+2;
volatile	bit	PS1	@ (unsigned)&OPTION*8+1;
volatile	bit	PS0	@ (unsigned)&OPTION*8+0;

/*      TRIS bits      */
volatile       bit        TRIS5  @ (unsigned)&TRIS*8+5;
volatile       bit        TRIS4  @ (unsigned)&TRIS*8+4;
volatile       bit        TRIS3  @ (unsigned)&TRIS*8+3;
volatile       bit        TRIS2  @ (unsigned)&TRIS*8+2;
volatile       bit        TRIS1  @ (unsigned)&TRIS*8+1;
volatile       bit        TRIS0  @ (unsigned)&TRIS*8+0;

/*	PIE1 bits	*/
volatile       bit	ADIE	@ (unsigned)&PIE1*8+6;

/*	PCON bits */
volatile	bit	POR	@ (unsigned)&PCON*8+1;

/*	OSCCAL bits */
#if defined(_12C671) || defined(_12C672)
volatile       bit	CAL3	@ (unsigned)&OSCCAL*8+7;
volatile       bit	CAL2	@ (unsigned)&OSCCAL*8+6;
volatile       bit	CAL1	@ (unsigned)&OSCCAL*8+5;
volatile       bit	CAL0	@ (unsigned)&OSCCAL*8+4;
volatile       bit	CALFST	@ (unsigned)&OSCCAL*8+3;
volatile       bit	CALSLW	@ (unsigned)&OSCCAL*8+2;
#elif defined(_12CE673) || defined(_12CE674)
volatile       bit	CAL5	@ (unsigned)&OSCCAL*8+7;
volatile       bit	CAL4	@ (unsigned)&OSCCAL*8+6;
volatile       bit	CAL3	@ (unsigned)&OSCCAL*8+5;
volatile       bit	CAL2	@ (unsigned)&OSCCAL*8+4;
volatile       bit	CAL1	@ (unsigned)&OSCCAL*8+3;
volatile       bit	CAL0	@ (unsigned)&OSCCAL*8+2;
#endif

/*	ADCON1 bits */
volatile       bit	PCFG2	@ (unsigned)&ADCON1*8+2;
volatile       bit	PCFG1	@ (unsigned)&ADCON1*8+1;
volatile       bit	PCFG0	@ (unsigned)&ADCON1*8+0;

/*	Calibration constant in ROM */

#if defined(_12C671) || defined(_12CE673) || defined(_12C672) || defined(_12CE674)
extern unsigned char __osccal_val(void);
#define	_READ_OSCCAL_DATA()	__osccal_val()
#endif

#define CONFIG_ADDR	0x2007

