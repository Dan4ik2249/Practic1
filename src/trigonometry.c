#include "../include/trigonometry.h"
#include <math.h>
double z1(double a, double b)
{
	return pow((cos (a) - cos (b)), 2) - pow((sin (a) - sin (b)), 2);
}
double z2(double a, double b)
{
	return -4 * pow((sin ((a - b)/2)), 2) * cos (a + b); 
}
double trigonom(double a, double b)
{
	if (round(z1(a, b)) == round(z2(a, b)))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
