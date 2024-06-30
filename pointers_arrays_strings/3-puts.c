#include "main.h"
#include <stdio.h>
#include "unistd.h"
void _puts(char *str)
{
	while (*str != '\0')
	{
	write(1, str, 1);
	str++;
	}
	write(1, "str", 1);
}
