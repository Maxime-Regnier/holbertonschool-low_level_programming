#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0
 *
 * Description:
 * This function prints the multiplication table for numbers
 * from 0 to 9. Each line corresponds to a multiplier, and
 * the results are separated by commas and spaces. Proper
 * formatting is used to align the table correctly.
 *
 * Return: Nothing (void)
 */
void times_table(void)
{
int i;
int j;
int k;
for (i = 0; i <= 9; i++)
{
_putchar('0');
for (j = 1; j <= 9; j++)
{
k = i * j;

_putchar(',');
_putchar(' ');

if (k <= '9')
_putchar(' ');
else
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');

}
_putchar('\n');
}
}
