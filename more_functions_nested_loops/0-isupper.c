#include "main.h"
/**
 * _isupper - Checks for uppercase characters
 * @c: The character to check
 *
 * Description: This function checks whether the given character `c`
 * is an uppercase alphabetic letter (from 'A' to 'Z').
 * It returns 1 if the character is uppercase, and 0 otherwise.
 *
 * Return: 1 if `c` is uppercase, 0 otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
