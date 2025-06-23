#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - checks if the character is uppercase
 * @c: The character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	return (1);

	return (0);
}
