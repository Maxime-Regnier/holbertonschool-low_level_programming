#include "main.h"
/**
 * print_most_numbers - Prints the numbers from 0 to 9 except 2 and 4
 *
 * Description: This function prints all digits from 0 to 9,
 * except for the numbers 2 and 4. Each digit is printed using
 * the _putchar function, followed by a new line at the end.
 *
 * Return: Nothing (void)
 */
void print_most_numbers(void)
{
char k = 0;
for (k = '0' ; k <= '9'; k++)
{
if (k != '2' && k != '4')
_putchar(k);
}
_putchar('\n');
}
