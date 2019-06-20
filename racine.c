#include "libft.h"

double	racine(double query)
{
	double	res;
	double	lesstop;
	double	highsmall;

	res = query / 2.0;
	highsmall = 0.0;
	lesstop = query;
	while (res*res > query + 0.00001 || res*res < query - 0.00001)
	{
		if (res*res > query + 0.00001)
		{
			if (res < lesstop)
				lesstop = res;
			res -= (res - highsmall) / 2.0;
		}
		if (res*res < query - 0.00001)
		{
			if (res > highsmall)
				highsmall = res;
			res += (lesstop - res) / 2.0;
		}
	}
	return res;
}
