extern double __fldiv(double, double);

double
__asfldiv(double * f1p, double f2)
{
	return *f1p = __fldiv(*f1p, f2);
}

