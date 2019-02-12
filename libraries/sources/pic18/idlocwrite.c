/* Function definitions that can be used to
 * write to PIC18 idloc registers at runtime.
 *
 * USAGE:
 * void idloc_write(char,char)
 *  input - number of idloc register (0-7), data to write
 *  output - (void) returns no value
 */

#include <htc.h>

#if !defined(__J_PART) && (_FLASH_WRITE_SIZE>0)
extern unsigned char idloc_read(unsigned char reg_no);
extern void initiate_write(void);

void
idloc_write(unsigned char reg_no, unsigned char value){
#if _FLASH_ERASE_SIZE > 255
	static unsigned char saved[_FLASH_ERASE_SIZE];
	unsigned int i;
#else
	unsigned char saved[_FLASH_ERASE_SIZE];
	unsigned char i;
#endif
#ifdef _OMNI_CODE_
	unsigned char	saved_tblptrh;
	unsigned char	saved_tblptru;

	saved_tblptrh = TBLPTRH;
	saved_tblptru = TBLPTRU;
#endif

	i=_FLASH_ERASE_SIZE;
	do{	// save existing data
		i--;
		saved[i]=idloc_read(i);
	}while(i);
	
#if defined(_OMNI_CODE_)
	TBLPTRU=0x20;	// read will clear this - needs to be set again
	TBLPTRH=0x0;	// read restores TBLPTRH to previous value, so clear again
#elif defined(SMALL_DATA)
	TBLPTRU=0x20;	// if 16-Bit pointers, read will clear this - needs to be set again
#endif
	// at this point TBLPTR should equal 200000h.
	// erase this sector before writing.
	EECON1=0x90;
	
// WARNING - DO NOT SET ICD2 BREAKPOINTS BELOW THIS LINE!!	
	initiate_write();
	asm("tblrd*-");	// adjust TBLPTRs prior to increment ops
	
	for(i=0;i<_FLASH_ERASE_SIZE;i++){
		TABLAT = saved[i];	// rewrite previous byte
		if(i==reg_no)
			TABLAT = (value | 0xF0);	// write lower nibble only
		asm("\tTBLWT+*");		// copy to flash holding register
		if((TBLPTRL&(_FLASH_WRITE_SIZE-1))==(_FLASH_WRITE_SIZE-1)){
			initiate_write();	// commit holding registers to flash
		}
	}
#ifdef _OMNI_CODE_
	TBLPTRH = saved_tblptrh;
	TBLPTRU = saved_tblptru;
#elif defined(SMALL_DATA)
	TBLPTRU=0;	// if program uses 16-Bit pointers, manually clear TBLTRU now
#endif
}
#endif
