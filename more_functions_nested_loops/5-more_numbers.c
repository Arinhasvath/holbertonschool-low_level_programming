#include "main.h"

void more_numbers(void)
{
	int i, j;
	char ligne[] = "1234567891011121314\n";

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 21; j++)
		{
			_putchar(ligne[j]);
		}
	}
}
