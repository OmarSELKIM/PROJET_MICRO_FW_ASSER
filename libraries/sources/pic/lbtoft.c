/*	Floating point routines.

	Copyright (C) 2006 HI-TECH Software
*/

// this is bigendian code right now. Need to parameterise it.

#include	"ftarith.h"


// Convert byte to float
#ifdef _OLDLIB
#define	f1_as_mant1	(*(unsigned short long *)&f1)
float
__lbtoft(unsigned char c)
{
	float	f1;
	
	if(c == 0)
		return 0.0;
	f1_as_mant1 = c;
	__ftpack(&f1_as_mant1, 127+15);
	return f1;
}
#else
float
__lbtoft(unsigned char c)
{
	return __ftpack(c, 127+15, 0);
}
#endif
