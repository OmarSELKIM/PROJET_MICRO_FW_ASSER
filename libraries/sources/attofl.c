/*	Floating point routines.

	Copyright (c) 2012 Microchip Technology Inc. All rights reserved.
*/

// this is bigendian code right now. Need to parameterise it.

#include	"flarith.h"


// Convert signed int to double

#ifdef _OLDLIB
#define	f1_as_mant1	(*(unsigned long *)&f1)
double
__attofl(signed short long int c)
{
	double	f1;
	unsigned char	exp, sign;
	
	if(c == 0)
		return 0.0;
	sign = 0;
	if(c < 0) {
		c = -c;
		sign = 1;
	}
	exp = 127+23;
	f1_as_mant1 = c;
	__flpack(&f1_as_mant1, exp);
	if(sign)
		f1 = -f1;
	return f1;
}
#else
double
__attofl(signed short long int c)
{
	unsigned char	sign;
	
	sign = 0;
	if(c < 0) {
		c = -c;
		sign = 1;
	}
	return __flpack(c, 127+23, sign);
}
#endif
