#include <htc.h>

unsigned long checksum32(unsigned long start,unsigned long length)
{
	unsigned long checksum = 0;
#ifdef _OMNI_CODE_
	unsigned char	saved_tblptrh;
	unsigned char	saved_tblptru;

	saved_tblptrh = TBLPTRH;
	saved_tblptru = TBLPTRU;
#endif
	TBLPTRL=((start)&0xFF);
	TBLPTRH=(((start)>>8)&0xFF);
	TBLPTRU=(((start)>>16)&0xFF);
	do{
		asm("\tTBLRD*+");
		checksum += TABLAT;
	}while(	length-- );
#ifdef _OMNI_CODE_
	TBLPTRH = saved_tblptrh;
	TBLPTRU = saved_tblptru;
#elif defined(SMALL_DATA)
	TBLPTRU=0;
#endif
	return checksum;
}

