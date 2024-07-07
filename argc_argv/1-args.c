#include <stdio.h>
/**
 * main - Prints the number of arguments passed to the program.
 * @argc: The total number of arguments passed to the program.
 * @argv: Array of strings containing the arguments.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	(void)argv; /* void annul argv */
	printf("%d\n", argc - 1);
	return (0);
}
