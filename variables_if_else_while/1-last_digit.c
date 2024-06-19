#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Description: ll
*
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand(98) - RAND_MAX / 2;
	last_digit = n % 10;
	printf("last digit of %d is %d and is ", n, last_digit);

	if (last_digit > 5)
{
	printf("and is greater than 5\n");
}
	else if (last_digit == 0)
{
	printf("zero 0\n");
}
	else
{
	printf("less than 6 or not 0\n");
}
	return (0);
}
