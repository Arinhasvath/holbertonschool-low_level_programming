#include "main.h"
#include <stddef.h>

char *_strstr(char *haystack, char *needle)
{
	if (haystack == NULL || needle == NULL)
		return (NULL);
	
	if (*needle == '\0')
		return haystack;

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

	while (*h && *n && *h == *n)
	{
	h++;
	n++;
	}

	if (*n == '\0')
	return (haystack);

		haystack++;
	}

	return (NULL);
}
