#include "main.h"
/**
 * print_line - Draws a straight line in the terminal
 * @n: The number of times the character '_' should be printed
 *
 * Description: This function prints a straight line using
 * the character '_'. If n is less than or equal to 0, it
 * only prints a new line.
 *
 * Return: Nothing (void)
 */
void print_line(int n)
{
int t = 0;
if (n <= 0)
{
_putchar('\n');
}
else
{
while (t < n)
{
_putchar('_');
t++;
}
_putchar ('\n');
}
}
