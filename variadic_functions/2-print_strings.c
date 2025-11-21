#include <stdarg.h>
#include <stdio.h>
/**
 * 
 * 
 * 
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int g;
char *str;
va_start(args, n);
for (g = 0; g < n; g++)
{
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (g != n - 1 && separator != NULL)
printf("%s", separator);
}
va_end(args);
printf("\n");
}
