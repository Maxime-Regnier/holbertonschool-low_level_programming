#include <stdio.h>
/**
* int_index - Searches for an integer in an array
* @array: Pointer to the integer array
* @size: Number of elements in the array
* @cmp: Pointer to the comparison function
*
* Description:
* Goes through the array and applies the cmp function to each
* element. Returns the index of the first element for which
* cmp does not return 0. Returns -1 if no match or if size <= 0
* or if array or cmp is NULL.
* Return: index of first element where cmp != 0, -1 if none found
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int k;
if (array == NULL || cmp == NULL)
{
return (-1);
}
if (size <= 0)
{
return (-1);
}
for (k = 0; k < size; k++)
{
if (cmp(array[k]) != 0)
return (k);
}
return (-1);
}
