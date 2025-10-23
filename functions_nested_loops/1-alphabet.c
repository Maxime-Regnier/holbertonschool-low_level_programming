#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
char n = 'a';
while (n >= 'a' && n <= 'z')
{
_putchar(n);
n++;
}
_putchar('\n');
}
