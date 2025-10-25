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
if (girafe < 0)
girafe = (girafe * (-1));
girafe = girafe % 10;
_putchar(girafe + '0');

return (girafe);
}
