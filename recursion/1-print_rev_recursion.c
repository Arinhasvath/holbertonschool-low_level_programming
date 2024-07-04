#include "main.h"
/**
* _print_rev_recursion - Prints a string in reverse recursively
* @s: The string to print in reverse
*
* Description: This function recursively prints each character of the
* string @s in reverse order.
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
