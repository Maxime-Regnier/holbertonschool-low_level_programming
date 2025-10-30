#include "main.h"
/**
 * 
 * 
 * 
 * 
 */
void _puts(char *str)
{
    char *x= str;
while (*x)
{
_putchar(*x);
x++;
}

_putchar('\n');
}