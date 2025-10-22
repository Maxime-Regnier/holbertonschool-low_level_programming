#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char h;
h = 104;
while (h >= 'a')
{
putchar(h);
h--;
}
putchar(10);
return (0);
}
