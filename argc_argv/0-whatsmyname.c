#include <stdio.h>

/**
 * main - Prints the program's name, followed by a new line.
 * @argc: Number of command-line arguments (unused).
 * @argv: Array of command-line arguments.
 *
 * Prints argv[0], which is the program's name (including the path),
 * followed by a new line.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}

