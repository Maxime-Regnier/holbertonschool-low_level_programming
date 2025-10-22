#include <stdio.h>

/**
    * main - Entry point
    *
    * Return: Always 0 (Success)
    */
int main(void)
{
char g;
g = 97;
while (g >= 'a' && g <= 'z')
{
putchar(g);
g++;
}
g = 65;
while (g >= 'A' && g <= 'Z')
{
putchar(g);
g++;
}
putchar(10);
return (0);
}
