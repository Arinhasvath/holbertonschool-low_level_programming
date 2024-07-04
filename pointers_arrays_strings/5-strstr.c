#include "main.h"
#include <stddef.h>
/**
* _strstr - Locates a substring.
* @haystack: The main string to be scanned.
* @needle: The substring to be searched within haystack.
*
* Return: A pointer to the beginning of the located substring,
*or NULL if the substring is not found.
*/
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
