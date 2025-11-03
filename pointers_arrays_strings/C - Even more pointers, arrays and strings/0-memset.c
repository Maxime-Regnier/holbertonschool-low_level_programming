#include "main.h"
/**
* _memset - fills memory with a constant byte
* @s: pointer to the memory area to be filled
* @b: the byte value to fill the memory with
* @n: number of bytes to fill
*
* Description: The _memset() function fills the first n bytes
* of the memory area pointed to by s with the constant byte b.
* Returns a pointer to the memory area s.
*
* Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int l = 0;

while (l < n)
{
s[l] = b;
l++;
}
return (s);
}
