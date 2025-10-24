#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{


int j;

char z;
for (j = 0; j < 10; j++)
{
    z = 'a';
    while (z <= 'z')
        {
            _putchar(z);
            z++;
        }
    _putchar('\n');
}
}
