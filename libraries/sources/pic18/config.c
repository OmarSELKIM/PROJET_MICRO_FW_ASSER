/* Function definitions that can be used to read
 * and write to PIC18 configuration registers at
 * runtime.
 *
 * USAGE:
 * int config_read(char)
 *  input - number of config register to read
 *  output - 16-Bit config value stored in register
 *
 * void config_write(char,int)
 *  input - number of config register to write, data to be written
 *  output - (void) returns no value
 */

#include <htc.h>

#if	_ERRATA_TYPES & ERRATA_MINUS40
extern void coldTableRead(void);
#endif

#if _FLASH_WRITE_SIZE
unsigned int
config_read(unsigned char reg_no){
	unsigned int data;
#ifdef _OMNI_CODE_
	unsigned char	saved_tblptrh;
	unsigned char	saved_tblptru;

	saved_tblptrh = TBLPTRH;
	saved_tblptru = TBLPTRU;
#endif

	TBLPTRU=0x30;	// Config stuff starts at address 0x300000
	TBLPTRH=0;
	TBLPTRL=(--reg_no<<1);	// select the register to read
	EECON1 |= (1<<6);	// set to select Config area

// read lower byte of Config register
#if	_ERRATA_TYPES & ERRATA_MINUS40
	coldTableRead();	// special errata for cold days (use -D_MINUS40C compiler option)
#else
	asm("\tTBLRD*+");	// another Microchip errata case
#endif
	data = TABLAT;

// read upper byte of Config register
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

void
config_write(unsigned char reg_no, unsigned int dataword){
#ifdef _OMNI_CODE_
	unsigned char	saved_tblptrh;
	unsigned char	saved_tblptru;

	saved_tblptrh = TBLPTRH;
	saved_tblptru = TBLPTRU;
#endif
	// Config stuff starts at address 0x300000
	TBLPTRU=0x30;
	TBLPTRH=0;
	TBLPTRL=(--reg_no<<1);	// select the register to be written
	EECON1 |= (3<<6);	// set to select Config area	

	TABLAT = dataword&0xFF;	// write lower byte
	asm("\tTBLWT*");
	initiate_write();
	TABLAT = (dataword>>8)&0xFF;	// write upper byte
	asm("\tTBLWT+*");
	initiate_write();
#ifdef _OMNI_CODE_
	TBLPTRH = saved_tblptrh;
	TBLPTRU = saved_tblptru;
#elif defined(SMALL_DATA)
	TBLPTRU=0;	// if program uses 16-Bit pointers, manually clear TBLTRU now
#endif
	EECON1 &= 0xBF;	// deselect Config area
}
#endif

