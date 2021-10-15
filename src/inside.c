#include "../include/inside.h"
#include <math.h>
double k(double x, double y, double R)
{
	if (x <=0 && y <= 0 && pow((y), 2) + pow ((x), 2) <= pow((R), 2))
	{
		return 1;
	}
	if (x >=0 && y >=0 && y >= pow((x-1), 2) && pow((x), 2) + pow((y), 2) <= pow((R), 2) )
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
