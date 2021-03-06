
#ifndef	_HTC_H_
#warning Header file pic12f6x.h included directly. Use #include <htc.h> instead.
#endif

/*	Header file for the Microchip
 *	PIC12F629 chip
 *	PIC12F675 chip
 *	Microcontrollers */ 

volatile       unsigned char 	INDF	@ 0x00;
volatile       unsigned char 	TMR0	@ 0x01;
volatile       unsigned char 	PCL	@ 0x02;
volatile       unsigned char 	STATUS	@ 0x03;
volatile       unsigned char 	FSR	@ 0x04;
volatile       unsigned char 	GPIO	@ 0x05;
volatile       unsigned char 	PCLATH	@ 0x0A;
volatile       unsigned char 	INTCON	@ 0x0B;
volatile       unsigned char 	PIR1	@ 0x0C;
volatile       unsigned char 	TMR1L	@ 0x0E;
volatile       unsigned char 	TMR1H	@ 0x0F;
volatile	      unsigned char 	T1CON	@ 0x10;
volatile       unsigned char 	CMCON	@ 0x19;
#if defined(_12F675)
volatile       unsigned char 	ADRESH	@ 0x1E;
volatile       unsigned char 	ADCON0	@ 0x1F;
#endif
volatile	unsigned char		OPTION	@ 0x81;
volatile	unsigned char		TRISIO	@ 0x85;
volatile	unsigned char		PIE1	@ 0x8C;
volatile       unsigned char 	PCON	@ 0x8E;
volatile	unsigned char		OSCCAL	@ 0x90;
volatile	unsigned char		WPU	@ 0x95;
volatile	unsigned char		IOCB	@ 0x96;
volatile  unsigned char 	IOC		@ 0x96;
volatile       unsigned char 	VRCON	@ 0x99;
volatile       unsigned char 	EEDATA	@ 0x9A;
volatile       unsigned char 	EEADR	@ 0x9B;
volatile       unsigned char 	EECON1	@ 0x9C;
volatile       unsigned char 	EECON2	@ 0x9D;
#if defined(_12F675)
volatile       unsigned char 	ADRESL	@ 0x9E;
volatile	unsigned char		ANSEL	@ 0x9F;
#endif

/* STATUS Bits */
volatile bit	CARRY	@ (unsigned)&STATUS*8+0;
volatile bit	DC	@ (unsigned)&STATUS*8+1;
volatile bit	ZERO	@ (unsigned)&STATUS*8+2;
volatile bit	PD	@ (unsigned)&STATUS*8+3;
volatile bit	TO	@ (unsigned)&STATUS*8+4;
volatile	bit	RP0	@ (unsigned)&STATUS*8+5;

/* GPIO Bits */
volatile bit	GPIO0	@ (unsigned)&GPIO*8+0;
volatile bit	GPIO1	@ (unsigned)&GPIO*8+1;
volatile bit	GPIO2	@ (unsigned)&GPIO*8+2;
volatile bit	GPIO3	@ (unsigned)&GPIO*8+3;
volatile bit	GPIO4	@ (unsigned)&GPIO*8+4;
volatile bit	GPIO5	@ (unsigned)&GPIO*8+5;

/* INTCON Bits */
volatile bit	GPIF	@ (unsigned)&INTCON*8+0;
volatile bit	INTF	@ (unsigned)&INTCON*8+1;
volatile bit	T0IF	@ (unsigned)&INTCON*8+2;
volatile	bit	GPIE	@ (unsigned)&INTCON*8+3;
volatile	bit	INTE	@ (unsigned)&INTCON*8+4;
volatile	bit	T0IE	@ (unsigned)&INTCON*8+5;
volatile	bit	PEIE	@ (unsigned)&INTCON*8+6;
volatile bit	GIE	@ (unsigned)&INTCON*8+7;

/* PIR1 Bits */
volatile bit	TMR1IF	@ (unsigned)&PIR1*8+0;
volatile bit	CMIF	@ (unsigned)&PIR1*8+3;
volatile bit	ADIF	@ (unsigned)&PIR1*8+6;
volatile bit	EEIF	@ (unsigned)&PIR1*8+7;

/* T1CON Bits */
volatile	bit	TMR1ON	@ (unsigned)&T1CON*8+0;
volatile	bit	TMR1CS	@ (unsigned)&T1CON*8+1;
volatile	bit	T1SYNC	@ (unsigned)&T1CON*8+2;
volatile	bit	T1OSCEN	@ (unsigned)&T1CON*8+3;
volatile	bit	T1CKPS0	@ (unsigned)&T1CON*8+4;
volatile	bit	T1CKPS1	@ (unsigned)&T1CON*8+5;
volatile	bit	TMR1GE	@ (unsigned)&T1CON*8+6;

/* CMCON Bits */
volatile	bit	CM0	@ (unsigned)&CMCON*8+0;
volatile	bit	CM1	@ (unsigned)&CMCON*8+1;
volatile	bit	CM2	@ (unsigned)&CMCON*8+2;
volatile	bit	CIS	@ (unsigned)&CMCON*8+3;
volatile	bit	CINV	@ (unsigned)&CMCON*8+4;
volatile bit	COUT	@ (unsigned)&CMCON*8+6;

#if defined(_12F675)
/* ADCON0 Bits */
volatile bit	ADON	@ (unsigned)&ADCON0*8+0;
volatile bit	GODONE	@ (unsigned)&ADCON0*8+1;
volatile	bit	CHS0	@ (unsigned)&ADCON0*8+2;
volatile	bit	CHS1	@ (unsigned)&ADCON0*8+3;
volatile	bit	VCFG	@ (unsigned)&ADCON0*8+6;
volatile	bit	ADFM	@ (unsigned)&ADCON0*8+7;
#endif

/* OPTION Bits */
volatile	bit	PS0	@ (unsigned)&OPTION*8+0;
volatile	bit	PS1	@ (unsigned)&OPTION*8+1;
volatile	bit	PS2	@ (unsigned)&OPTION*8+2;
volatile	bit	PSA	@ (unsigned)&OPTION*8+3;
volatile	bit	T0SE	@ (unsigned)&OPTION*8+4;
volatile	bit	T0CS	@ (unsigned)&OPTION*8+5;
volatile	bit	INTEDG	@ (unsigned)&OPTION*8+6;
volatile	bit	GPPU	@ (unsigned)&OPTION*8+7;

/* TRISIO Bits */
volatile	bit	TRIS0	@ (unsigned)&TRISIO*8+0;
volatile	bit	TRIS1	@ (unsigned)&TRISIO*8+1;
volatile	bit	TRIS2	@ (unsigned)&TRISIO*8+2;
volatile	bit	TRIS3	@ (unsigned)&TRISIO*8+3;
volatile	bit	TRIS4	@ (unsigned)&TRISIO*8+4;
volatile	bit	TRIS5	@ (unsigned)&TRISIO*8+5;
                 
/* PIE1 Bits */  
volatile	bit	TMR1IE	@ (unsigned)&PIE1*8+0;
volatile	bit	CMIE	@ (unsigned)&PIE1*8+3;
volatile	bit	ADIE	@ (unsigned)&PIE1*8+6;
volatile	bit	EEIE	@ (unsigned)&PIE1*8+7;

/* PCON Bits */
volatile       bit	BOD	@ (unsigned)&PCON*8+0;
volatile       bit	POR	@ (unsigned)&PCON*8+1;

/* OSCCAL Bits */
volatile	bit	CAL0	@ (unsigned)&OSCCAL*8+2;
volatile	bit	CAL1	@ (unsigned)&OSCCAL*8+3;
volatile	bit	CAL2	@ (unsigned)&OSCCAL*8+4;
volatile	bit	CAL3	@ (unsigned)&OSCCAL*8+5;
volatile	bit	CAL4	@ (unsigned)&OSCCAL*8+6;
volatile	bit	CAL5	@ (unsigned)&OSCCAL*8+7;

/* WPU Bits */
volatile	bit	WPU0	@ (unsigned)&WPU*8+0;
volatile	bit	WPU1	@ (unsigned)&WPU*8+1;
volatile	bit	WPU2	@ (unsigned)&WPU*8+2;
volatile	bit	WPU4	@ (unsigned)&WPU*8+4;
volatile	bit	WPU5	@ (unsigned)&WPU*8+5;

/* IOCB Bits */
volatile	bit	IOCB0	@ (unsigned)&IOCB*8+0;
volatile	bit	IOCB1	@ (unsigned)&IOCB*8+1;
volatile	bit	IOCB2	@ (unsigned)&IOCB*8+2;
volatile	bit	IOCB3	@ (unsigned)&IOCB*8+3;
volatile	bit	IOCB4	@ (unsigned)&IOCB*8+4;
volatile	bit	IOCB5	@ (unsigned)&IOCB*8+5;
                 
/* IOC Bits */
volatile  bit	IOC0	@ (unsigned)&IOCB*8+0;
volatile  bit	IOC1	@ (unsigned)&IOCB*8+1;
volatile  bit	IOC2	@ (unsigned)&IOCB*8+2;
volatile  bit	IOC3	@ (unsigned)&IOCB*8+3;
volatile  bit	IOC4	@ (unsigned)&IOCB*8+4;

/* VRCON Bits */ 
volatile	bit	VR0	@ (unsigned)&VRCON*8+0;
volatile	bit	VR1	@ (unsigned)&VRCON*8+1;
volatile	bit	VR2	@ (unsigned)&VRCON*8+2;
volatile	bit	VR3	@ (unsigned)&VRCON*8+3;
volatile	bit	VRR	@ (unsigned)&VRCON*8+5;
volatile	bit	VREN	@ (unsigned)&VRCON*8+7;
                 
/* EECON1 Bits */
volatile       bit	RD	@ (unsigned)&EECON1*8+0;
volatile       bit	WR	@ (unsigned)&EECON1*8+1;
volatile       bit	WREN	@ (unsigned)&EECON1*8+2;
volatile       bit	WRERR	@ (unsigned)&EECON1*8+3;

#if defined(_12F675)
/* ANSEL Bits */
volatile	bit	ANS0	@ (unsigned)&ANSEL*8+0;
volatile	bit	ANS1	@ (unsigned)&ANSEL*8+1;
volatile	bit	ANS2	@ (unsigned)&ANSEL*8+2;
volatile	bit	ANS3	@ (unsigned)&ANSEL*8+3;
volatile	bit	ADCS0	@ (unsigned)&ANSEL*8+4;
volatile	bit	ADCS1	@ (unsigned)&ANSEL*8+5;
volatile	bit	ADCS2	@ (unsigned)&ANSEL*8+6;
#endif

extern unsigned char __osccal_val(void);
#define	_READ_OSCCAL_DATA()	__osccal_val()


/* Configuration bit definitions */
#define CONFIG_ADDR	0x2007 

