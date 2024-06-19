#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
* main - Entry point
*
* Description: llll
*
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
{
	printf("%d and is greater than 5\n", n);
}
	if (n == 0)
{
	printf("%d is zero 0\n", n);
}
	if (n < 0)
{
	printf("%d is negative 0\n", n);
}
	return (0);
}
