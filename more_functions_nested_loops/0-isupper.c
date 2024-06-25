#include <stdio.h>
#include <stdlib.h>

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	printf("1");
	return (1);
	}
	else
	{
	printf("0");
	return (0);
	}
}
