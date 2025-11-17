#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - Prints a name using a callback function
* @name: The name to print
* @f: A pointer to a function that takes a char pointer and returns nothing
*
* Description:
* This function receives a string `name` and a function pointer `f`.
* If both parameters are valid, it calls `f(name)` so that the
* provided function determines how the name is printed
* (normal print, uppercase, lowercase, etc.).
* If `name` or `f` is NULL, the function does nothing.
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}