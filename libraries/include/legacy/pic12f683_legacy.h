
#ifndef	_HTC_H_
#warning Header file pic12f683.h included directly. Use #include <htc.h> instead.
#endif


 /* header file for the MICROCHIP PIC microcontroller
 */

#ifndef	__PIC12F683_H
#define	__PIC12F683_H

// Special function register definitions

volatile       unsigned char	INDF		@ 0x00;
volatile       unsigned char	TMR0		@ 0x01;
volatile       unsigned char	PCL		@ 0x02;
volatile       unsigned char	STATUS		@ 0x03;
volatile	unsigned char	FSR		@ 0x04;
volatile       unsigned char	GPIO		@ 0x05;
volatile       unsigned char	PCLATH		@ 0x0A;
volatile       unsigned char	INTCON		@ 0x0B;
volatile       unsigned char	PIR1		@ 0x0C;
volatile       unsigned char	TMR1L		@ 0x0E;
volatile       unsigned char	TMR1H		@ 0x0F;
volatile       unsigned char	T1CON		@ 0x10;
volatile       unsigned char	TMR2		@ 0x11;
volatile       unsigned char	T2CON		@ 0x12;
volatile       unsigned char	CCPR1L		@ 0x13;
volatile       unsigned char	CCPR1H		@ 0x14;
volatile       unsigned char	CCP1CON		@ 0x15;
volatile       unsigned char	WDTCON		@ 0x18;
volatile       unsigned char	CMCON0		@ 0x19;
volatile	unsigned char	CMCON1		@ 0x1A;
volatile       unsigned char	ADRESH		@ 0x1E;
volatile       unsigned char	ADCON0		@ 0x1F;
volatile	unsigned char	OPTION		@ 0x81;
volatile       unsigned char	TRISIO		@ 0x85;
volatile	unsigned char	PIE1		@ 0x8C;
volatile       unsigned char	PCON		@ 0x8E;
volatile       unsigned char	OSCCON		@ 0x8F;
volatile	unsigned char	OSCTUNE		@ 0x90;
volatile	unsigned char	PR2		@ 0x92;
volatile	unsigned char	WPU		@ 0x95;
volatile	unsigned char	IOC		@ 0x96;
volatile	unsigned char	VRCON		@ 0x99;
volatile       unsigned char	EEDAT		@ 0x9A;
/* Alternate definition */
volatile       unsigned char	EEDATA		@ 0x9A;
volatile       unsigned char	EEADR		@ 0x9B;
/* Alternate definition */
volatile       unsigned char	EEADRL		@ 0x9B;
volatile       unsigned char	EECON1		@ 0x9C;
volatile       unsigned char	EECON2		@ 0x9D;
volatile       unsigned char	ADRESL		@ 0x9E;
volatile	unsigned char	ANSEL		@ 0x9F;


/* Definitions for STATUS register */
volatile       bit	CARRY		@ ((unsigned)&STATUS*8)+0;
volatile       bit	DC		@ ((unsigned)&STATUS*8)+1;
volatile       bit	ZERO		@ ((unsigned)&STATUS*8)+2;
volatile       bit	PD		@ ((unsigned)&STATUS*8)+3;
volatile       bit	TO		@ ((unsigned)&STATUS*8)+4;
volatile	bit	RP0		@ ((unsigned)&STATUS*8)+5;
volatile	bit	RP1		@ ((unsigned)&STATUS*8)+6;
volatile	bit	IRP		@ ((unsigned)&STATUS*8)+7;

/* Definitions for GPIO register */
volatile       bit	GPIO0		@ ((unsigned)&GPIO*8)+0;
volatile       bit	GPIO1		@ ((unsigned)&GPIO*8)+1;
volatile       bit	GPIO2		@ ((unsigned)&GPIO*8)+2;
volatile       bit	GPIO3		@ ((unsigned)&GPIO*8)+3;
volatile       bit	GPIO4		@ ((unsigned)&GPIO*8)+4;
volatile       bit	GPIO5		@ ((unsigned)&GPIO*8)+5;

/* Definitions for INTCON register */
volatile       bit	GPIF		@ ((unsigned)&INTCON*8)+0;
volatile       bit	INTF		@ ((unsigned)&INTCON*8)+1;
volatile       bit	T0IF		@ ((unsigned)&INTCON*8)+2;
volatile	bit	GPIE		@ ((unsigned)&INTCON*8)+3;
volatile	bit	INTE		@ ((unsigned)&INTCON*8)+4;
volatile	bit	T0IE		@ ((unsigned)&INTCON*8)+5;
volatile	bit	PEIE		@ ((unsigned)&INTCON*8)+6;
volatile bit	GIE		@ ((unsigned)&INTCON*8)+7;

/* Definitions for PIR1 register */
volatile       bit	TMR1IF		@ ((unsigned)&PIR1*8)+0;
volatile       bit	TMR2IF		@ ((unsigned)&PIR1*8)+1;
volatile       bit	OSFIF		@ ((unsigned)&PIR1*8)+2;
volatile       bit	CMIF		@ ((unsigned)&PIR1*8)+3;
volatile       bit	CCP1IF		@ ((unsigned)&PIR1*8)+5;
volatile       bit	ADIF		@ ((unsigned)&PIR1*8)+6;
volatile       bit	EEIF		@ ((unsigned)&PIR1*8)+7;

/* Definitions for T1CON register */
volatile	bit	TMR1ON		@ ((unsigned)&T1CON*8)+0;
volatile	bit	TMR1CS		@ ((unsigned)&T1CON*8)+1;
volatile	bit	T1SYNC		@ ((unsigned)&T1CON*8)+2;
volatile	bit	T1OSCEN		@ ((unsigned)&T1CON*8)+3;
volatile	bit	T1CKPS0		@ ((unsigned)&T1CON*8)+4;
volatile	bit	T1CKPS1		@ ((unsigned)&T1CON*8)+5;
volatile	bit	T1GE		@ ((unsigned)&T1CON*8)+6;
volatile	bit	T1GINV		@ ((unsigned)&T1CON*8)+7;

/* Definitions for T2CON register */
volatile	bit	T2CKPS0		@ ((unsigned)&T2CON*8)+0;
volatile	bit	T2CKPS1		@ ((unsigned)&T2CON*8)+1;
volatile	bit	TMR2ON		@ ((unsigned)&T2CON*8)+2;
volatile	bit	TOUTPS0		@ ((unsigned)&T2CON*8)+3;
volatile	bit	TOUTPS1		@ ((unsigned)&T2CON*8)+4;
volatile	bit	TOUTPS2		@ ((unsigned)&T2CON*8)+5;
volatile	bit	TOUTPS3		@ ((unsigned)&T2CON*8)+6;

/* Definitions for CCP1CON register */
volatile	bit	CCP1M0		@ ((unsigned)&CCP1CON*8)+0;
volatile	bit	CCP1M1		@ ((unsigned)&CCP1CON*8)+1;
volatile	bit	CCP1M2		@ ((unsigned)&CCP1CON*8)+2;
volatile	bit	CCP1M3		@ ((unsigned)&CCP1CON*8)+3;
volatile	bit	DC1B0		@ ((unsigned)&CCP1CON*8)+4;
volatile	bit	DC1B1		@ ((unsigned)&CCP1CON*8)+5;

/* Definitions for WDTCON register */
volatile	bit	SWDTEN		@ ((unsigned)&WDTCON*8)+0;
volatile	bit	WDTPS0		@ ((unsigned)&WDTCON*8)+1;
volatile	bit	WDTPS1		@ ((unsigned)&WDTCON*8)+2;
volatile	bit	WDTPS2		@ ((unsigned)&WDTCON*8)+3;
volatile	bit	WDTPS3		@ ((unsigned)&WDTCON*8)+4;

/* Definitions for CMCON0 register */
volatile	bit	CM0		@ ((unsigned)&CMCON0*8)+0;
volatile	bit	CM1		@ ((unsigned)&CMCON0*8)+1;
volatile	bit	CM2		@ ((unsigned)&CMCON0*8)+2;
volatile	bit	CIS		@ ((unsigned)&CMCON0*8)+3;
volatile	bit	CINV		@ ((unsigned)&CMCON0*8)+4;
volatile       bit	COUT		@ ((unsigned)&CMCON0*8)+6;

/* Definitions for CMCON1 register */
volatile	bit	CMSYNC		@ ((unsigned)&CMCON1*8)+0;
volatile	bit	T1GSS		@ ((unsigned)&CMCON1*8)+1;

/* Definitions for ADCON0 register */
volatile	bit	ADON		@ ((unsigned)&ADCON0*8)+0;
volatile       bit	GODONE		@ ((unsigned)&ADCON0*8)+1;
volatile	bit	CHS0		@ ((unsigned)&ADCON0*8)+2;
volatile	bit	CHS1		@ ((unsigned)&ADCON0*8)+3;
volatile	bit	CHS2		@ ((unsigned)&ADCON0*8)+4;
volatile	bit	VCFG		@ ((unsigned)&ADCON0*8)+6;
volatile	bit	ADFM		@ ((unsigned)&ADCON0*8)+7;

/* Definitions for OPTION register */
volatile	bit	PS0		@ ((unsigned)&OPTION*8)+0;
volatile	bit	PS1		@ ((unsigned)&OPTION*8)+1;
volatile	bit	PS2		@ ((unsigned)&OPTION*8)+2;
volatile	bit	PSA		@ ((unsigned)&OPTION*8)+3;
volatile	bit	T0SE		@ ((unsigned)&OPTION*8)+4;
volatile	bit	T0CS		@ ((unsigned)&OPTION*8)+5;
volatile	bit	INTEDG		@ ((unsigned)&OPTION*8)+6;
volatile	bit	GPPU		@ ((unsigned)&OPTION*8)+7;

/* Definitions for TRISIO register */
volatile       bit	TRISIO0		@ ((unsigned)&TRISIO*8)+0;
volatile       bit	TRISIO1		@ ((unsigned)&TRISIO*8)+1;
volatile       bit	TRISIO2		@ ((unsigned)&TRISIO*8)+2;
volatile       bit	TRISIO3		@ ((unsigned)&TRISIO*8)+3;
volatile       bit	TRISIO4		@ ((unsigned)&TRISIO*8)+4;
volatile       bit	TRISIO5		@ ((unsigned)&TRISIO*8)+5;

/* Definitions for PIE1 register */
volatile	bit	TMR1IE		@ ((unsigned)&PIE1*8)+0;
volatile	bit	TMR2IE		@ ((unsigned)&PIE1*8)+1;
volatile	bit	OSFIE		@ ((unsigned)&PIE1*8)+2;
volatile	bit	CMIE		@ ((unsigned)&PIE1*8)+3;
volatile	bit	CCP1IE		@ ((unsigned)&PIE1*8)+5;
volatile	bit	ADIE		@ ((unsigned)&PIE1*8)+6;
volatile	bit	EEIE		@ ((unsigned)&PIE1*8)+7;

/* Definitions for PCON register */
volatile       bit	BOD		@ ((unsigned)&PCON*8)+0;
volatile       bit	POR		@ ((unsigned)&PCON*8)+1;
volatile	bit	SBODEN		@ ((unsigned)&PCON*8)+4;
volatile	bit	ULPWUE		@ ((unsigned)&PCON*8)+5;

/* Definitions for OSCCON register */
volatile	bit	SCS		@ ((unsigned)&OSCCON*8)+0;
volatile       bit	LTS		@ ((unsigned)&OSCCON*8)+1;
volatile       bit	HTS		@ ((unsigned)&OSCCON*8)+2;
volatile       bit	OSTS		@ ((unsigned)&OSCCON*8)+3;
volatile	bit	IRCF0		@ ((unsigned)&OSCCON*8)+4;
volatile	bit	IRCF1		@ ((unsigned)&OSCCON*8)+5;
volatile	bit	IRCF2		@ ((unsigned)&OSCCON*8)+6;

/* Definitions for OSCTUNE register */
volatile	bit	TUN0		@ ((unsigned)&OSCTUNE*8)+0;
volatile	bit	TUN1		@ ((unsigned)&OSCTUNE*8)+1;
volatile	bit	TUN2		@ ((unsigned)&OSCTUNE*8)+2;
volatile	bit	TUN3		@ ((unsigned)&OSCTUNE*8)+3;
volatile	bit	TUN4		@ ((unsigned)&OSCTUNE*8)+4;

/* Definitions for WPU register */
volatile	bit	WPU0		@ ((unsigned)&WPU*8)+0;
volatile	bit	WPU1		@ ((unsigned)&WPU*8)+1;
volatile	bit	WPU2		@ ((unsigned)&WPU*8)+2;
volatile	bit	WPU3		@ ((unsigned)&WPU*8)+3;
volatile	bit	WPU4		@ ((unsigned)&WPU*8)+4;
volatile	bit	WPU5		@ ((unsigned)&WPU*8)+5;

/* Definitions for IOC register */
volatile	bit	IOC0		@ ((unsigned)&IOC*8)+0;
volatile	bit	IOC1		@ ((unsigned)&IOC*8)+1;
volatile	bit	IOC2		@ ((unsigned)&IOC*8)+2;
volatile	bit	IOC3		@ ((unsigned)&IOC*8)+3;
volatile	bit	IOC4		@ ((unsigned)&IOC*8)+4;
volatile	bit	IOC5		@ ((unsigned)&IOC*8)+5;

/* Definitions for VRCON register */
volatile	bit	VR0		@ ((unsigned)&VRCON*8)+0;
volatile	bit	VR1		@ ((unsigned)&VRCON*8)+1;
volatile	bit	VR2		@ ((unsigned)&VRCON*8)+2;
volatile	bit	VR3		@ ((unsigned)&VRCON*8)+3;
volatile	bit	VRR		@ ((unsigned)&VRCON*8)+5;
volatile	bit	VREN		@ ((unsigned)&VRCON*8)+7;

/* Definitions for EECON1 register */
volatile       bit	RD		@ ((unsigned)&EECON1*8)+0;
volatile       bit	WR		@ ((unsigned)&EECON1*8)+1;
volatile       bit	WREN		@ ((unsigned)&EECON1*8)+2;
volatile       bit	WRERR		@ ((unsigned)&EECON1*8)+3;

/* Definitions for ANSEL register */
volatile	bit	ANS0		@ ((unsigned)&ANSEL*8)+0;
volatile	bit	ANS1		@ ((unsigned)&ANSEL*8)+1;
volatile	bit	ANS2		@ ((unsigned)&ANSEL*8)+2;
volatile	bit	ANS3		@ ((unsigned)&ANSEL*8)+3;
volatile	bit	ADCS0		@ ((unsigned)&ANSEL*8)+4;
volatile	bit	ADCS1		@ ((unsigned)&ANSEL*8)+5;
volatile	bit	ADCS2		@ ((unsigned)&ANSEL*8)+6;


#define CONFIG_ADDR	0x2007

#endif
