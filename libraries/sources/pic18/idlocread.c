/* Function definitions that can be used to
 * write to PIC18 idloc registers at runtime.
 *
 * USAGE:
 * char idloc_read(char)
 *  input - number of idloc register to read (0-7)
 *  output - value stored in idloc register
 */

#include <htc.h>

#if	_ERRATA_TYPES & ERRATA_MINUS40
extern void coldTableRead(void);
#endif

#if !defined(__J_PART) && (_FLASH_WRITE_SIZE>0 || _EEPROMSIZE>0)
unsigned char
idloc_read(unsigned char reg_no){

#ifdef _OMNI_CODE_
	unsigned char	saved_tblptrh;
	unsigned char	saved_tblptru;

	saved_tblptrh = TBLPTRH;
	saved_tblptru = TBLPTRU;
#endif
	TBLPTRU=0x20;	// IDLoc stuff starts at address 0x200000
	TBLPTRH=0;
	TBLPTRL=reg_no;	// select the register to read
	EECON1 = 0x80;	// set to select Flash area

// read lower byte of IDLoc register
#if	_ERRATA_TYPES & ERRATA_MINUS40
	coldTableRead();	// special errata for cold days (use -D_MINUS40C compiler option)
#else
	asm("\tTBLRD*");	// another Microchip errata case
#endif

#ifdef _OMNI_CODE_
	TBLPTRH = saved_tblptrh;
	TBLPTRU = saved_tblptru;
#elif defined(SMALL_DATA)
	TBLPTRU=0;	// if program uses 16-Bit pointers, manually clear TBLTRU now
#endif
	return TABLAT;
}
#endif

