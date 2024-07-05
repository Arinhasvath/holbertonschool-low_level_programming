#include "main.h"
#include "math.h"
int _sqrt_recursion(int n)
{
n = sqrt(n);
{
	if (n < 0)
	{
		return (-1);
	}
			if (n >= 0)
			{
				return (n);
	}
			return (n = _sqrt_recursion(n));
	}
}
