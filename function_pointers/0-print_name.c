#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - Prints a name using a callback function
* @name: The name to print
* @f: A pointer to a function that takes a char pointer and returns nothing
*
* Description:
* Calls the function pointed to by f, passing name as argument.
* If name or f is NULL, does nothing.
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
