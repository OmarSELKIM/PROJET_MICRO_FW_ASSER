/* Function to read the DEVICE ID and revision codes at runtime
 *
 * USAGE:
 * int device_id_read()
 *  input - accepts no parameter
 *  output - 16-Bit device & revision code.
 *    breakdown of 16-Bit id word is as follows
 *    DDDD DDDD  DDDR RRRR
 *    D = device id bit
 *    R = device revision bit
 *    
 */

#include <htc.h>

#if	_ERRATA_TYPES & ERRATA_MINUS40
extern void coldTableRead(void);
#endif

#if _EEPROMSIZE || _FLASH_WRITE_SIZE
unsigned int
device_id_read(void){
	unsigned int data;
#ifdef _OMNI_CODE_
	unsigned char	saved_tblptrh;
	unsigned char	saved_tblptru;

	saved_tblptrh = TBLPTRH;
	saved_tblptru = TBLPTRU;
#endif

	TBLPTRU=0x3F;	// Point to device ID register
	TBLPTRH=0xFF;
	TBLPTRL=0xFE;
	EECON1 |= (1<<6);	// set to select Config area


// read lower byte of device_id register
#if	_ERRATA_TYPES & ERRATA_MINUS40
	coldTableRead();	// special errata for cold days (use -D_MINUS40C compiler option)
#else
	asm("\tTBLRD*+");	
#endif

	data = TABLAT;

// read upper byte of device_id register
#if	_ERRATA_TYPES & ERRATA_MINUS40
	coldTableRead();
#else
	asm("\tTBLRD*-");
#endif

	data |= (unsigned int)(TABLAT<<8);
#ifdef _OMNI_CODE_
	TBLPTRH = saved_tblptrh;
	TBLPTRU = saved_tblptru;
#elif defined(SMALL_DATA)
	TBLPTRU=0;	// if program uses 16-Bit pointers, manually clear TBLTRU now
#endif
	EECON1 &= 0xBF;	// deselect Config area
	
	return data;
}
#endif
