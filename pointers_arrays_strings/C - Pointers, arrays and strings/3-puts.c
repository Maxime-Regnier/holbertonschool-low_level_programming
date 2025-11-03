#include "main.h"
/**
* _puts - prints a string followed by a new line
* @str: pointer to the string to print
*
* Description: This function prints each character of the string pointed to by
* 'str' using the _putchar function. After printing the string, it prints a
* newline character. Only _putchar is used to print characters.
*/
void _puts(char *str)
{
char *x = str;
while (*x)
{
_putchar(*x);
x++;
}

_putchar('\n');
}
