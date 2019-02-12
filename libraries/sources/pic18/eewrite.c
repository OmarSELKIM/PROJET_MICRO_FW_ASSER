#include	<htc.h>

#if	_EEPROMSIZE

void
eeprom_write(unsigned int addr, unsigned char value)
{
	EEPROM_WRITE(addr, value);
}
#endif

