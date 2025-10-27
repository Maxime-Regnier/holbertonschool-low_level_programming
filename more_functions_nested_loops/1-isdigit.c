#include "main.h"
/**
 * _isdigit - Checks for a digit (0 through 9)
 * @c: The character to check
 *
 * Description: This function checks whether the given character `c`
 * represents a numeric digit between '0' and '9'.
 * It returns 1 if the character is a digit, and 0 otherwise.
 *
 * Return: 1 if `c` is a digit, 0 otherwise
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
