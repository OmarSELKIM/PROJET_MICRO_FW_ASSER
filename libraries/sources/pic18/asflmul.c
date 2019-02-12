extern double __flmul(double, double);

double
__asflmul(double * mp, double multiplicand)
{
	return *mp = __flmul(*mp, multiplicand);
}

