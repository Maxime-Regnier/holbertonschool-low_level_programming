#include "main.h"
/**
* _memcpy - copies memory area
* @dest: pointer to the memory area where data will be copied
* @src: pointer to the memory area to copy from
* @n: number of bytes to copy
*
* Description: The _memcpy() function copies n bytes from
* memory area src to memory area dest. The memory areas must
* not overlap. Returns a pointer to dest.
*
* Return: pointer to the memory area dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int j = 0;
while (j < n)
{
*(dest + j) = *(src + j);
j++;
}
return (dest);
}
