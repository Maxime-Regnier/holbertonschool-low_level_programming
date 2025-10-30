#include "main.h"
/**
* print_triangle - prints a triangle using the character '#'
* @size: size of the triangle
*
* Description: This function prints a right-aligned triangle of '#' characters.
* Each row contains spaces followed by '#' characters. The number of rows is
* equal to the value of 'size'. If 'size' is 0 or negative, only a newline is printed.
* Only the _putchar function is used to print characters.
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
