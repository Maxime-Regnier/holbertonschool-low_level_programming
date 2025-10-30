#include "main.h"
/**
 * more_numbers - Prints numbers from 0 to 14, ten times
 *
 * Description: This function prints the numbers from 0 to 14,
 * ten times in total. Each sequence is followed by a new line.
 * The function uses _putchar to display each character.
 *
 * Return: Nothing (void)
 */
void more_numbers(void)
{
int a;
int b;
for (a = 0; a < 10; a++)
{
for (b = 0; b <= 14; b++)
{
if (b >= 10)
_putchar((b / 10) + '0');

_putchar((b % 10) + '0');
}
_putchar('\n');
}
}
