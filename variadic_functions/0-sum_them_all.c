#include <stdarg.h>
/**
* sum_them_all - Returns the sum of all integers passed as arguments
* @n: Number of arguments to sum
*
* Description: Takes a variable number of integers and returns their sum.
* If n is 0, returns 0. Uses va_list, va_start, va_arg, and va_end macros.
*
* Return: Sum of all integers passed as parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
va_list args;
int sum;
unsigned int i;

if (n == 0)
return (0);
sum = 0;
va_start(args, n);

for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}

va_end(args);

return (sum);
}
