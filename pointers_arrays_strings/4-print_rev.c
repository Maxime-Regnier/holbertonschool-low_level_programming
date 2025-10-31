#include "main.h"
/**
* print_rev - prints a string in reverse
* @s: pointer to the string to print
*
* Description: This function prints the given string
* in reverse order, followed by a new line.
*/
void print_rev(char *s)
{
char *k = s;
while (*k)
{
k++;
}
while (k > s)
{
_putchar(*k);
k--;
}
{
_putchar('\n');
}
}
