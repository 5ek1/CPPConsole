#include"GetVolumeSurface.h"
double GetVolumeSurface(double x, double y, double z, double* surface) 
{
	double a, b, c;
	a = x * y * 2;
	b = x * z * 2;
	c = y * z * 2;
	*surface = a + b + c;

	return x * y * z;
}