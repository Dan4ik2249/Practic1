#include "../include/logic.h"
#include <math.h>
#include <stdio.h>
double f(double a,double b, double c)
{
	return a && ( !b || c);
}
double g(double a, double b, double c)
{
	return a && !b || c && a;
}
double result(double a, double b, double c)
{
	if (f(a, b, c) == g(a, b, c))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

