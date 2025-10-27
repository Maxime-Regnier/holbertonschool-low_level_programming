#include "main.h"
/**
 * print_numbers - Prints the numbers from 0 to 9
 *
 * Description: This function uses a loop to print all digits
 * from 0 to 9, followed by a new line. It uses the _putchar
 * function to display each character.
 *
 * Return: Nothing (void)
 */
void print_numbers(void)
{
char p = 0;
for (p = '0'; p <= '9'; p++)
{
_putchar(p);
}
_putchar('\n');
}
