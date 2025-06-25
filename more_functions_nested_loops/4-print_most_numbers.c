#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9, skipping 2 and 4.
 *
 * This function prints the digits 0 through 9, each followed by a newline,
 * except for the digits 2 and 4. It adheres to the constraint of using
 * the _putchar function only twice.
 *
 * Return: Nothing (void function).
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	if (i ==  '2' || i == '4')
	_putchar(i);
	}
	_putchar('\n');

}
