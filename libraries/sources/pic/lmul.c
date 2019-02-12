unsigned long
__lmul(unsigned long multiplier, unsigned long multiplicand)
{
	unsigned long	product = 0;

	do {
		if(multiplier & 1)
			product += multiplicand;
		multiplicand <<= 1;
		multiplier >>= 1;
	} while(multiplier != 0);
	return product;
}
