#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number to check
 *
 * Description:
 * This function checks whether a number is positive, zero,
 * or negative. It prints '+' if the number is positive,
 * '0' if it is zero, and '-' if it is negative.
 *
 * Return: 1 if n is positive, 0 if n is zero, -1 if n is negative
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
