#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char p;
p = 49;
while (p >= '1' && p <= '9')
{
putchar(p);
p++;
}

putchar(10);
return (0);
}
