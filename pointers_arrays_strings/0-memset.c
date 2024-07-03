#include "main.h"
#include <stdio.h>

/**
* simple_print_buffer - prints buffer in hexadecimal
* @buffer: the address of memory to print
* @size: the size of the memory to print
*
* Description: This function prints the content of a memory buffer
* in hexadecimal format. It prints 10 bytes per line.
*
* Return: Nothing.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return s;
}
