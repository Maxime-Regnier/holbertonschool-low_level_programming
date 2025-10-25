#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @girafe: The number whose last digit will be printed
 *
 * Description:
 * This function extracts and prints the last digit of
 * the integer given in parameter. If the number is negative,
 * it converts it to positive before printing.
 *
 * Return: The value of the last digit
 */
int print_last_digit(int girafe)
{
long u = girafe;
if (u < 0)
u = (u * (-1));
u = u % 10;
_putchar(u + '0');

return (u);
}
