/*	Floating point routines.

	Copyright (c) 2012 Microchip Technology Inc. All rights reserved.
*/

// this is bigendian code right now. Need to parameterise it.

#include	"flarith.h"

#define	f1_as_mant1	(*(unsigned long *)&f1)
#define	f2_as_mant2	(*(unsigned long *)&f2)

// floating addition

double
#ifdef __PICC__
#warning TODO: update cgpic and this file to use the other prototype
__flsub(double f2, double f1)
#else
__flsub(double f1, double f2)
#endif
{
	f2_as_mant2 ^= 0x80000000;
#ifdef __PICC__
#warning TODO: update this file to use the other prototype
	return __fladd(f2, f1);
#else
	return __fladd(f1, f2);
#endif
}
