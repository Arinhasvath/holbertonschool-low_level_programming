#include "main.h"
/**
* print_alphabet - Write a function that prints the alphabet
*/
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
