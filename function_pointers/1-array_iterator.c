#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - applies a function to each element of an array
 * @array: The array of integers
 * @size: The size of the array
 * @action: The function to apply to each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

size_t i;
if (array == NULL)
	return;
if (action == NULL)
	return;
if (size == 0)
	return;
{
	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
}
