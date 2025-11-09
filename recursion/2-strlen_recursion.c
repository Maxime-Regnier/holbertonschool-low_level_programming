#include "main.h"
/**
* _strlen_recursion - Returns the length of a string using recursion
* @s: a string to count
*
* Return: length of the string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (*s);
}
return (1 + _strlen_recursion(s + 1));
}
