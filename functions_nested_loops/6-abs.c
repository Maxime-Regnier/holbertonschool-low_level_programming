#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @r: The integer to check
 *
 * Description:
 * This function returns the absolute value of the integer
 * given in parameter. If the number is negative, it returns
 * its positive equivalent; otherwise, it returns the same number.
 *
 * Return: The absolute value of r
 */
int _abs(int r)
{
if (r < 0)
{
return (-r);
}
return (r);
}
