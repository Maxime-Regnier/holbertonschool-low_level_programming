#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - prints numbers, separated by a string, followed by a new line
* @separator: string to print between numbers
* @n: number of integers passed to the function
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int p;
int value;
va_start(args, n);
for (p = 0; p < n; p++)
value = va_arg(args, int);
printf("%d", value);
if (p != p - 1 && separator != NULL)
printf("%s", separator);
va_end(args);
printf("\n");
}
