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
int b;
int d;
for (b = 0; b <= 14; b++)
{
d = 9;
while (d <= 14)
{
    for (d = 9; d <= 14; d++)
    {
_putchar(d);
d++;
}
_putchar(10);
_putchar('\n');
}
}
}
