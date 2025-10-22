#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char n;
n = 122;
while (n >= 'a')
{
putchar(n);
n--;
}
putchar(10);
return (0);
}
