#include	<htc.h>

#if	_EEPROMSIZE
unsigned char
eeprom_read(unsigned int addr)
{
	while (EECON1bits.WR) continue; // don't proceed if write in progress
	return EEPROM_READ(addr);
}
#endif
