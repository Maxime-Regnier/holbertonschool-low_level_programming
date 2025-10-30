#include "main.h"
/**
 *
 *
 *
 *
 */
void print_triangle(int size)
{
int b;
int h;

if (size <= 0)
{
_putchar('\n');
}
for (b = 0; b < size; b++)
{
for (h = 0; h < size - b - 1; h++)
{
    _putchar(' ');
}
for (h = 0; h <= b; h++)
{
    _putchar('#');  
}

{
_putchar('\n');
}
}
}
