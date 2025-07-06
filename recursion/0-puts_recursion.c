#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to print.
 *
 * This function prints the string pointed to by s, using recursion,
 * followed by a new line. Similar to puts from the standard library.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
