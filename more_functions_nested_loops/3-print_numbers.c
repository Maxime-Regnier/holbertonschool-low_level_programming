#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_numbers - Prints the numbers from 0 to 9 followed by a newline.
 *
 * This function uses the _putchar function to output each digit,
 * ensuring only two calls to _putchar are made. The function
 * does not take any parameters and does not return a value.
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
	_putchar(x + '0');
	}
	{
	_putchar('\n');
	}

}
