#include <htc.h>

// simple utility for initiating a flash/EE write event
#if _FLASH_ERASE_SIZE || _EEPROMSIZE
void initiate_write(void)
{
	while(EECON1bits.WR)continue;	// don't proceed if write in progress
	STATUSbits.C=0;
	if(INTCONbits.GIE)
		STATUSbits.C=1;
	INTCONbits.GIE=0;
	EECON1bits.WREN=1;				// this is the required sequence
	EECON2=0x55;
	EECON2=0xAA;
	EECON1bits.WR=1;
	asm("\tNOP");
	_CLEAR_EEIF();
	EECON1bits.WREN=0;
	if(STATUSbits.C)
		INTCONbits.GIE=1;
}
#endif
