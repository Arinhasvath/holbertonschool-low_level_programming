#include "main.h"
#include <stddef.h>

char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
{
	for (a = accept; *a; a++)
	{
		if (*s == *a)
			return s;
	}
	s++;
}
return NULL;
}

