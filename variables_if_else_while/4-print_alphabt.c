#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char r;
r = 97;
while (r >= 'a' && r <= 'z')
{
putchar(r);
r++;
while (r > 113 && r < 101)
{
r++;
}
}
putchar(10);
return (0);
}
