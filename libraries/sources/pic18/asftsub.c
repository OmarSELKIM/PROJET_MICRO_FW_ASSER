extern float __ftsub(float, float);

float
__asftsub(float * f1p, float f2)
{
	return *f1p = __ftsub(*f1p, f2);
}

