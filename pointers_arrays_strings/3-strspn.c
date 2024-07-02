#include "main.h"

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
