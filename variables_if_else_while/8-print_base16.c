#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int f;
f = 48;
while (f >= '0' && f <= '9')
{
putchar(f);
f++;
}
f = 97;
while (f >= 'a' && f <= 'f')
{
putchar(f);
f++;
}
putchar(10);
return (0);
}
