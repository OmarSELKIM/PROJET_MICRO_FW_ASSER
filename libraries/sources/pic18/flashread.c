#include <htc.h>

unsigned char flash_read(unsigned long addr)
{
	unsigned short long tblptr = TBLPTR;

	TBLPTRL=((addr)&0xFF);
	TBLPTRH=(((addr)>>8)&0xFF);
	TBLPTRU=(((addr)>>16)&0xFF);
	asm("\tTBLRD*");
	TBLPTR = tblptr;
	return TABLAT;
}

