#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char p;
p = 48;
while (p >= '0' && p <= '9')
{
putchar(p);
p++;
}

putchar(10);
return (0);
}
