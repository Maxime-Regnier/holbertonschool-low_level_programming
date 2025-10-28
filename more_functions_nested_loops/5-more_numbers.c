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
int a = 0;
int b = 0;
for (a = 0; a != 2; a++)
{
if (b <= 4 && a <= 1)
{

for (b = 0; b > 14; b++)
{
    if (b >= 9)
{
    a = 1;
}
_putchar(b + '0');
    if (a == 1)

_putchar(a + '0');
}
}
_putchar('\n');
}
}
