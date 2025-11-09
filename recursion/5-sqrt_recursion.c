#include "main.h"

/**
* _sqrt_helper - Recursively finds the natural square root of a number
* @n: The number to find the square root of
* @candidate: The current number to test
*
* Return: A. candidate  B. -1)
*/

int _sqrt_helper(int n, int candidate)
{
if (candidate * candidate == n)
{
return candidate;
}
if (candidate * candidate > n)
{
return -1;
} 
return _sqrt_helper(n, candidate + 1);
}

/**
*  _sqrt_recursion - Returns the natural square root of a number
* @n: The number to find the square root of
* 
* Return: 
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return _sqrt_helper(n, 0);
}
