#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - Executes a function on each element of an array
* @array: Pointer to the array of integers
* @size: Number of elements in the array
* @action: Pointer to a function taking an int and returning void
*
* Description:
* Iterates through each element of the array and applies the
* function pointed to by action to each element. If array or
* action is NULL, the function does nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t m;
if (array == NULL || action == NULL)
return;
for (m = 0; m < size ; m++)
action(array[m]);
}
