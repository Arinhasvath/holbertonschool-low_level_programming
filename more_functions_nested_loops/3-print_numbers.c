#include "main.h"
#include <stdio.h>
/**
*
*
*
*
*/
void print_numbers(void)
{
	char numb []= "0123456789\n";
	int i;
	
	for (i = 0; numb[i] != '0'; i++)
	{
		_putchar(numb[i]);
	}
}
