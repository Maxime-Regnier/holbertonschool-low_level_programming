#include "main.h"

/**
* _puts - Prints a string followed by a line break.
* @str: Pointer to the string to print.
*
* This function takes a string as input and displays it to stdout
* character by character, then prints a line break.
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str
			++;
	}
	_putchar('\n');
}
