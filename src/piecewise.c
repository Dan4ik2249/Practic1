#include "../include/piecewise.h"
#include <math.h>
double p(double x)
{
	if (x >= -7 && x < -3)
	{
		return x+7;
	}
	if ( x >= -3 && x < -2)
	{
		return 4; 
	}
	if ( x >= -2 && x < 2 )
	{
		return (2 * (x * x));
	}
	if (x >=2 && x <= 4) 
	{
		return (2 * x) + 8;
	}
	else
	{
		return -1;
	}
}
