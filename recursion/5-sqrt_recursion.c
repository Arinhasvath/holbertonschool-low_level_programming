#include "main.h"
#include "math.h"
/**
* _sqrt_recursion - Returns the natural square root of a number recursively.
* @n: The number to find the square root of.
*
* Return: The natural square root of n, or -1 if n has no natural square root.
*/
int _sqrt_recursion(int n)
{
	n = _sqrt_recursion(n * n);
	{
	if (n < 0)
	{
		return (-1);
	}
			if (n >= 0)
			{
				return (n);
	}
	return (n = _sqrt_recursion(n - 1));
	}
}
