#include "main.h"
/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 *
 * Description:
 * This function prints every minute of the day
 * starting from 00:00 to 23:59, with each time
 * displayed in the format HH:MM followed by a newline.
 *
 * Return: Nothing (void)
 */
void jack_bauer(void)
{
int a;
int b;

for (a = 0; a <= 23; a++)
{
for (b = 0; b <= 59; b++)
{
_putchar((a / 10) + '0');
_putchar((a % 10) + '0');
_putchar(':');
_putchar((b / 10) + '0');
_putchar((b % 10) + '0');
_putchar('\n');
}
}
}
