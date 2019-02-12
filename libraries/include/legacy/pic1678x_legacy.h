
#ifndef	_HTC_H_
#warning Header file pic1678x.h included directly. Use #include <htc.h> instead.
#endif

/* 
 *	Header file for the Microchip
 *	PIC 16C781 chip
 *	PIC 16C782 chip
 */

//Special Function Registers
//Bank 0
volatile unsigned char INDF	@ 0x00;
volatile unsigned char TMR0	@ 0x01;
volatile unsigned char PCL	@ 0x02;
volatile unsigned char STATUS	@ 0x03;
volatile	unsigned char	FSR	@ 0x04;
volatile unsigned char PORTA	@ 0x05;
volatile unsigned char PORTB	@ 0x06;
volatile	unsigned char	PCLATH	@ 0x0A;
volatile unsigned char INTCON	@ 0x0B;
volatile unsigned char PIR1	@ 0x0C;
volatile unsigned char TMR1L	@ 0x0E;
volatile unsigned char TMR1H	@ 0x0F;
volatile unsigned char T1CON	@ 0x10;
volatile unsigned char ADRES	@ 0x1E;
volatile unsigned char ADCON0	@ 0x1F;

//Bank 1
volatile	unsigned char	      OPTION	@ 0x81;
volatile	unsigned char	      TRISA	@ 0x85;
volatile	unsigned char	      TRISB	@ 0x86;
volatile	unsigned char	      PIE1	@ 0x8C;
volatile unsigned char       PCON	@ 0x8E;
volatile	unsigned char	      WPUB	@ 0x95;
volatile	unsigned char	      IOCB	@ 0x96;
volatile	unsigned char	      REFCON	@ 0x9B;
volatile unsigned char       LVDCON	@ 0x9C;
volatile	unsigned char	      ANSEL	@ 0x9D;
volatile	unsigned char	      ADCON1	@ 0x9F;

//Bank 2
volatile unsigned char       PMDATL	@ 0x10C;
volatile	unsigned char	      PMADRL	@ 0x10D;
volatile unsigned char       PMDATH	@ 0x10E;
volatile	unsigned char	      PMADRH	@ 0x10F;
volatile unsigned char       CALCON	@ 0x110;
volatile	unsigned char	      PSMCCON0	@ 0x111;
volatile	unsigned char	      PSMCCON1	@ 0x112;
volatile unsigned char       CM1CON0	@ 0x119;
volatile unsigned char       CM2CON0	@ 0x11A;
volatile unsigned char       CM2CON1	@ 0x11B;
volatile	unsigned char	      OPACON	@ 0x11C;
volatile unsigned char       DAC		@ 0x11E;
volatile	unsigned char	      DACON0	@ 0x11F;

//Bank 3
volatile unsigned char       PMCON1	@ 0x18C;

//Special Function Bits
/*	STATUS bits	*/
volatile bit	IRP	@ (unsigned)&STATUS*8+7;
volatile bit	RP1	@ (unsigned)&STATUS*8+6;
volatile bit	RP0	@ (unsigned)&STATUS*8+5;
volatile bit	TO	@ (unsigned)&STATUS*8+4;
volatile bit	PD	@ (unsigned)&STATUS*8+3;
volatile bit	ZERO	@ (unsigned)&STATUS*8+2;
volatile bit	DC	@ (unsigned)&STATUS*8+1;
volatile bit	CARRY	@ (unsigned)&STATUS*8+0;

/*	INTCON bits	*/
volatile bit	GIE	@ (unsigned)&INTCON*8+7;
volatile	bit	PEIE	@ (unsigned)&INTCON*8+6;
volatile	bit	T0IE	@ (unsigned)&INTCON*8+5;
volatile	bit	INTE	@ (unsigned)&INTCON*8+4;
volatile	bit	RBIE	@ (unsigned)&INTCON*8+3;
volatile bit	T0IF	@ (unsigned)&INTCON*8+2;
volatile bit	INTF	@ (unsigned)&INTCON*8+1;
volatile bit	RBIF	@ (unsigned)&INTCON*8+0;

//Bank 0
/*	PORTA bits	*/
volatile bit	RA7	@ (unsigned)&PORTA*8+7;
volatile bit	RA6	@ (unsigned)&PORTA*8+6;
volatile bit	RA5	@ (unsigned)&PORTA*8+5;
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

/*	PIR1 bits	*/
volatile bit	LVDIF	@ (unsigned)&PIR1*8+7;
volatile bit	ADIF	@ (unsigned)&PIR1*8+6;
volatile bit	C2IF	@ (unsigned)&PIR1*8+5;
volatile bit	C1IF	@ (unsigned)&PIR1*8+4;
volatile bit	TMR1IF	@ (unsigned)&PIR1*8+0;

/*	T1CON bits	*/
volatile	bit	TMR1GE	@ (unsigned)&T1CON*8+6;
volatile	bit	T1CKPS1	@ (unsigned)&T1CON*8+5;
volatile	bit	T1CKPS0	@ (unsigned)&T1CON*8+4;
volatile	bit	T1OSCEN	@ (unsigned)&T1CON*8+3;
volatile	bit	T1SYNC 	@ (unsigned)&T1CON*8+2;
volatile	bit	TMR1CS 	@ (unsigned)&T1CON*8+1;
volatile	bit	TMR1ON 	@ (unsigned)&T1CON*8+0;

/*	ADCON0 bits	*/
volatile	bit	ADCS1 	@ (unsigned)&ADCON0*8+7;
volatile	bit	ADCS0 	@ (unsigned)&ADCON0*8+6;
volatile	bit	CHS2 	@ (unsigned)&ADCON0*8+5;
volatile	bit	CHS1 	@ (unsigned)&ADCON0*8+4;
volatile	bit	CHS0 	@ (unsigned)&ADCON0*8+3;
volatile bit	GODONE	@ (unsigned)&ADCON0*8+2;
volatile	bit	CHS3 	@ (unsigned)&ADCON0*8+1;
volatile	bit	ADON 	@ (unsigned)&ADCON0*8+0;

// Bank 1
/* 	OPTION bits	*/
volatile	bit	RBPU	@ (unsigned)&OPTION*8+7;
volatile	bit	INTEDG	@ (unsigned)&OPTION*8+6;
volatile	bit	T0CS	@ (unsigned)&OPTION*8+5;
volatile	bit	T0SE	@ (unsigned)&OPTION*8+4;
volatile	bit	PSA	@ (unsigned)&OPTION*8+3;
volatile	bit	PS2	@ (unsigned)&OPTION*8+2;
volatile	bit	PS1	@ (unsigned)&OPTION*8+1;
volatile	bit	PS0	@ (unsigned)&OPTION*8+0;

/*	TRISA bits	*/
volatile	bit	TRISA7	@ (unsigned)&TRISA*8+7;
volatile	bit	TRISA6	@ (unsigned)&TRISA*8+6;
volatile	bit	TRISA5	@ (unsigned)&TRISA*8+5;
volatile	bit	TRISA4	@ (unsigned)&TRISA*8+4;
volatile	bit	TRISA3	@ (unsigned)&TRISA*8+3;
volatile	bit	TRISA2	@ (unsigned)&TRISA*8+2;
volatile	bit	TRISA1	@ (unsigned)&TRISA*8+1;
volatile	bit	TRISA0	@ (unsigned)&TRISA*8+0;

/*	TRISB bits	*/
volatile	bit	TRISB7	@ (unsigned)&TRISB*8+7;
volatile	bit	TRISB6	@ (unsigned)&TRISB*8+6;
volatile	bit	TRISB5	@ (unsigned)&TRISB*8+5;
volatile	bit	TRISB4	@ (unsigned)&TRISB*8+4;
volatile	bit	TRISB3	@ (unsigned)&TRISB*8+3;
volatile	bit	TRISB2	@ (unsigned)&TRISB*8+2;
volatile	bit	TRISB1	@ (unsigned)&TRISB*8+1;
volatile	bit	TRISB0	@ (unsigned)&TRISB*8+0;

/*	PIE1 bits	*/
volatile	bit	LVDIE	@ (unsigned)&PIE1*8+7;
volatile	bit	ADIE	@ (unsigned)&PIE1*8+6;
volatile	bit	C2IE	@ (unsigned)&PIE1*8+5;
volatile	bit	C1IE	@ (unsigned)&PIE1*8+4;
volatile	bit	TMR1IE	@ (unsigned)&PIE1*8+0;

/*	PCON bits	*/
volatile       bit	WDTCON	@ (unsigned)&PCON*8+4;	
volatile	bit	OSCF	@ (unsigned)&PCON*8+3;	
volatile       bit	POR	@ (unsigned)&PCON*8+1;	
volatile       bit	BOR	@ (unsigned)&PCON*8+0;

/*	REFCON bits	*/
volatile	bit	VREN	@ (unsigned)&REFCON*8+3;
volatile	bit	VROE	@ (unsigned)&REFCON*8+2;

/*	LVDCON bits	*/
volatile       bit	BGST	@ (unsigned)&LVDCON*8+5;
volatile	bit	LVDEN	@ (unsigned)&LVDCON*8+4;
volatile	bit	LV3	@ (unsigned)&LVDCON*8+3;
volatile	bit	LV2	@ (unsigned)&LVDCON*8+2;
volatile	bit	LV1	@ (unsigned)&LVDCON*8+1;
volatile	bit	LV0	@ (unsigned)&LVDCON*8+0;

/*	ADCON1 bits	*/
volatile	bit	VCFG1	@ (unsigned)&ADCON1*8+5;
volatile	bit	VCFG0	@ (unsigned)&ADCON1*8+4;

// BANK 2
/*	PMDATL Bits	*/
volatile       bit	PMD7	@ (unsigned)&PMDATL*8+7;
volatile       bit	PMD6	@ (unsigned)&PMDATL*8+6;
volatile       bit	PMD5	@ (unsigned)&PMDATL*8+5;
volatile       bit	PMD4	@ (unsigned)&PMDATL*8+4;
volatile       bit	PMD3	@ (unsigned)&PMDATL*8+3;
volatile       bit	PMD2	@ (unsigned)&PMDATL*8+2;
volatile       bit	PMD1	@ (unsigned)&PMDATL*8+1;
volatile       bit	PMD0	@ (unsigned)&PMDATL*8+0;

/*	PMADRL Bits	*/
volatile	bit	PMA7	@ (unsigned)&PMADRL*8+7;
volatile	bit	PMA6	@ (unsigned)&PMADRL*8+6;
volatile	bit	PMA5	@ (unsigned)&PMADRL*8+5;
volatile	bit	PMA4	@ (unsigned)&PMADRL*8+4;
volatile	bit	PMA3	@ (unsigned)&PMADRL*8+3;
volatile	bit	PMA2	@ (unsigned)&PMADRL*8+2;
volatile	bit	PMA1	@ (unsigned)&PMADRL*8+1;
volatile	bit	PMA0	@ (unsigned)&PMADRL*8+0;

/*	PMDATH Bits	*/
volatile       bit	PMD13	@ (unsigned)&PMDATH*8+5;
volatile       bit	PMD12	@ (unsigned)&PMDATH*8+4;
volatile       bit	PMD11	@ (unsigned)&PMDATH*8+3;
volatile       bit	PMD10	@ (unsigned)&PMDATH*8+2;
volatile       bit	PMD9	@ (unsigned)&PMDATH*8+1;
volatile       bit	PMD8	@ (unsigned)&PMDATH*8+0;

/*	PMADRH Bits	*/
volatile	bit	PMA10	@ (unsigned)&PMADRH*8+2;
volatile	bit	PMA9	@ (unsigned)&PMADRH*8+1;
volatile	bit	PMA8	@ (unsigned)&PMADRH*8+0;

/*	CALCON Bits	*/
volatile       bit	CAL	@ (unsigned)&CALCON*8+7;
volatile       bit	CALERR	@ (unsigned)&CALCON*8+6;
volatile	bit	CALREF	@ (unsigned)&CALCON*8+5;

/*	PSMCCON0	*/
volatile	bit	SMCCL1	@ (unsigned)&PSMCCON0*8+7;
volatile	bit	SMCCL0	@ (unsigned)&PSMCCON0*8+6;
volatile	bit	MINDC1	@ (unsigned)&PSMCCON0*8+5;
volatile	bit	MINDC0	@ (unsigned)&PSMCCON0*8+4;
volatile	bit	MAXDC1	@ (unsigned)&PSMCCON0*8+3;
volatile	bit	MAXDC0	@ (unsigned)&PSMCCON0*8+2;
volatile	bit	DC1	@ (unsigned)&PSMCCON0*8+1;
volatile	bit	DC0	@ (unsigned)&PSMCCON0*8+0;

/*	PSMCCON1	*/
volatile	bit	SMCON	@ (unsigned)&PSMCCON1*8+7;
volatile	bit	S1APOL	@ (unsigned)&PSMCCON1*8+6;
volatile	bit	S1BPOL	@ (unsigned)&PSMCCON1*8+5;
volatile	bit	SCEN	@ (unsigned)&PSMCCON1*8+3;
volatile	bit	SMCOM	@ (unsigned)&PSMCCON1*8+2;
volatile	bit	PWMPSM	@ (unsigned)&PSMCCON1*8+1;
volatile	bit	SMCCS	@ (unsigned)&PSMCCON1*8+0;

/*	CM1CON0	Bits	*/
volatile	bit	C1ON	@ (unsigned)&CM1CON0*8+7;
volatile       bit	C1OUT	@ (unsigned)&CM1CON0*8+6;
volatile	bit	C1OE	@ (unsigned)&CM1CON0*8+5;
volatile	bit	C1POL	@ (unsigned)&CM1CON0*8+4;
volatile	bit	C1SP	@ (unsigned)&CM1CON0*8+3;
volatile	bit	C1R	@ (unsigned)&CM1CON0*8+2;
volatile	bit	C1CH1	@ (unsigned)&CM1CON0*8+1;
volatile	bit	C1CH0	@ (unsigned)&CM1CON0*8+0;

/*	CM2CON0	Bits	*/
volatile	bit	C2ON	@ (unsigned)&CM2CON0*8+7;
volatile       bit	C2OUT	@ (unsigned)&CM2CON0*8+6;
volatile	bit	C2OE	@ (unsigned)&CM2CON0*8+5;
volatile	bit	C2POL	@ (unsigned)&CM2CON0*8+4;
volatile	bit	C2SP	@ (unsigned)&CM2CON0*8+3;
volatile	bit	C2R	@ (unsigned)&CM2CON0*8+2;
volatile	bit	C2CH1	@ (unsigned)&CM2CON0*8+1;
volatile	bit	C2CH0	@ (unsigned)&CM2CON0*8+0;

/*	CM2CON1	Bits	*/
volatile       bit	MC1OUT	@ (unsigned)&CM2CON1*8+7;
volatile       bit	MC2OUT	@ (unsigned)&CM2CON1*8+6;
volatile	bit	C2SYNC	@ (unsigned)&CM2CON1*8+0;

/*	OPACON	Bits	*/
volatile	bit	OPAON	@ (unsigned)&OPACON*8+7;
volatile	bit	CMPEN	@ (unsigned)&OPACON*8+6;
volatile	bit	GBWP	@ (unsigned)&OPACON*8+0;

/*	DAC Bits	*/
volatile       bit	DA7	@ (unsigned)&DAC*8+7;
volatile       bit	DA6	@ (unsigned)&DAC*8+6;
volatile       bit	DA5	@ (unsigned)&DAC*8+5;
volatile       bit	DA4	@ (unsigned)&DAC*8+4;
volatile       bit	DA3	@ (unsigned)&DAC*8+3;
volatile       bit	DA2	@ (unsigned)&DAC*8+2;
volatile       bit	DA1	@ (unsigned)&DAC*8+1;
volatile       bit	DA0	@ (unsigned)&DAC*8+0;

/*	DACON0 Bits	*/
volatile	bit	DAON	@ (unsigned)&DACON0*8+7;
volatile	bit	DAOE	@ (unsigned)&DACON0*8+6;
volatile	bit	DARS1	@ (unsigned)&DACON0*8+1;
volatile	bit	DARS0	@ (unsigned)&DACON0*8+0;

// Bank 3
/*	PMCON1 bits	*/
volatile       bit	RD	@ (unsigned)&PMCON1*8+0;


// definitions select memory reading macros in pic.h
#define EECON1	PMCON1
#define EEDATA	PMDATL
#define EEDATH	PMDATH
#define EEADRL	PMADRL
#define EEADRH	PMADRH


//Configurations
#define CONFIG_ADDR	0x2007

