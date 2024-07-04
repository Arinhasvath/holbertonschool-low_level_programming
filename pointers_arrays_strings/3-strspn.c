#include "main.h"
/**
* _strspn - Gets the length of a prefix substring.
* @s: The string to be scanned.
* @accept: The string containing the characters to match.
*
* Return: The number of bytes in the initial segment of swhich consist only of bytes from accept.
*/
unsigned int _strspn(char *s, char *accept)
{ unsigned int nombre = 0;
	char *i;

	while (*s)
	{
		for (i = accept; *i; i++)
		{
		if (*s == *i)
	break;
		}
		if (*i =='\0')
	break;
		nombre++;
		s++;
	}
	return nombre;
}
