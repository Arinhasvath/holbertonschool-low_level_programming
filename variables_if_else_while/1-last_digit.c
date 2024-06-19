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
if (last_digit >= 5)
{
	printf("%d and is greater than 5\n", n, last_digit);
}
	if (last_digit == 0)
{
	printf("%d is zero 0\n", n, last_digit);
}
else if (last_digit < 6)
{
	printf("%d and is less than 6 and not 0\n", n, last_digit);
}
	return (0);
}
