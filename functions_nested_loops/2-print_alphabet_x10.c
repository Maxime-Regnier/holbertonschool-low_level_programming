#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{

char z;

char lh;
z = 'a';
while (z <= 'z')
{
    _putchar(z);
    z++;
}

for (lh = 1 ; lh <= 10 ; lh++)
{
      _putchar('\n');
}
}