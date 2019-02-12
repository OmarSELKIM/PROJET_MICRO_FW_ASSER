extern double __flsub(double, double);

double
__asflsub(double * f1p, double f2)
{
	return *f1p = __flsub(*f1p, f2);
}

