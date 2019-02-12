// This header file declares ALL SFRs that are referenced by library sources as extern.
// Library sources shall not include htc.h as this can create a conflict between the device
// used to build the library and the device that reads from the library later.

#if	defined(_18F45J10)
#define	__J_PART
#endif

#define NOP()		asm("nop")


extern void initiate_write(void);

extern volatile far unsigned char *	TBLPTR;
extern volatile near unsigned char	TBLPTRL;
extern volatile near unsigned char	TBLPTRH;
extern volatile near unsigned char	TBLPTRU;
extern volatile near unsigned char	TABLAT;
extern volatile near unsigned char	EECON1;
extern volatile near unsigned char	PIE2;
extern volatile near unsigned char	PIE1;
extern volatile near unsigned char	INTCON3;
extern volatile near unsigned char	INTCON;
extern volatile near bit	  	WR;
extern volatile near bit 		RD;
extern volatile near bit		CARRY;
extern near bit				GIE;
extern near bit				WREN;
extern volatile near bit		EEIF;
extern volatile near unsigned char	EECON2;
extern volatile near bit		FREE;
extern near unsigned char		EEADR;
extern volatile	near unsigned char	EEDATA;
extern near unsigned char		EEADRH;

// Various helper macros used in EEPROM/flash routines
#if	_EEPROMSIZE > 256
 #define _LOAD_EEADR(addr)	(EEADRH=(((addr)>>8)&0xFF),EEADR=((addr)&0xFF))
#else
 #define _LOAD_EEADR(addr)	(EEADR=((addr)&0xFF))
#endif

#define _CLEAR_EEIF()	EEIF=0

// MACROS for EEPROM Access
/* macro versions of EEPROM read and write */

/* NOTE WELL:

   The macro EEPROM_READ() is NOT safe to use immediately after any
   write to EEPROM, as it does NOT wait for WR to clear.  This is by
   design, to allow minimal code size if a sequence of reads is
   desired.  To guarantee uncorrupted writes, use the function
   eeprom_read() or insert
	while(WR)continue;
   before calling EEPROM_READ().
*/
#if(_EEPROMSIZE == 0)
 #define EEPROM_READ(addr)	0	// Added only for code portability
#elif	(_ERRATA_TYPES & ERRATA_EEDATARD)
	/* For chips which must read EEDATA immediately after RD is
	 * set, EEDATA is read into temp variable EEADR because, if
	 * the result of EEPROM_READ is returned to an indirect
	 * object, it may take several instructions to set up access
	 * to that object. */
 #define EEPROM_READ(addr)   \
	 (_LOAD_EEADR(addr),\
	 CARRY=GIE,GIE=0,   \
	 EECON1&=0x3F,RD=1, \
	 EEADR=EEDATA,	    \
	 GIE=CARRY,	    \
	 (EEADR))
#else 	/* Plain and simple version */
 #define EEPROM_READ(addr)    \
	 (_LOAD_EEADR(addr),  \
	 EECON1&=0x3F,RD=1,   \
	 (EEDATA))
#endif

#if(_EEPROMSIZE == 0)
 #define EEPROM_WRITE(addr, value)	// Added only for code portability
#else
 #define EEPROM_WRITE(addr, value)			\
	do{						\
		while(WR)continue;			\
		_LOAD_EEADR(addr);			\
		EEDATA=(value);				\
		EECON1&=0x3F;				\
		CARRY=0;if(GIE)CARRY=1;GIE=0;		\
		WREN=1;EECON2=0x55;EECON2=0xAA;WR=1;	\
		_CLEAR_EEIF();WREN=0;			\
		if(CARRY)GIE=1;				\
	}while(0)
#endif


