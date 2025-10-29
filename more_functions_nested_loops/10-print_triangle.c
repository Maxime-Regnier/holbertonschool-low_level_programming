#include "main.h"
/**
 *
 *
 *
 *
 */
void print_triangle(int size_t)
{
int b;
int h;
int k;

if (size_t <= 0)
{
_putchar('\n');
}
for (b = 0; b < size_t; b++)
{
for (h = 0; h < 2 * (size_t - b - 1); h++)
{
    _putchar(' ');
}
for (k = 0; k < b; h++)
{
    _putchar('#');  
}

{
_putchar('\n');
}
}
}
