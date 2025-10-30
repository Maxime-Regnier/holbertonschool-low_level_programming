#include "main.h"
/**
* swap_int - switch values of two integers
* @a: first integer pointer
* @b: second integer pointer
*
* Description: Exchanges the values pointed by first and second.
*/
void swap_int(int *a, int *b)
{
int p = *a;
*a = *b;
*b = p;
}