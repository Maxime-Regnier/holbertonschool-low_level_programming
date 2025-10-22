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
if (r != 'e' && r != 'q')
{
putchar(r);
}
putchar(10);
return (0);
}
