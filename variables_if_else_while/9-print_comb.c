#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int h;
h = 48;
while (h >= '0' && h <= '9')
{
putchar(',');
putchar(' ');
putchar(h);
h++;
}
putchar(10);
return (0);
}
