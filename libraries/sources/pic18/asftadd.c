extern float __ftadd(float, float);

float
__asftadd(float * f1p, float f2)
{
	return *f1p = __ftadd(*f1p, f2);
}

