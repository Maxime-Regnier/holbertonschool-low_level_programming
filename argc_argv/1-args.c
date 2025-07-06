#include <stdio.h>

/**
 * main - Prints the number of arguments passed to the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments (unused).
 *
 * Prints argc - 1, then a new line.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
