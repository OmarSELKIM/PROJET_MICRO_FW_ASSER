extern float __ftdiv(float, float);

float
__asftdiv(float * f1p, float f2)
{
	return *f1p = __ftdiv(*f1p, f2);
}

