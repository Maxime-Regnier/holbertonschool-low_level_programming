#include "main.h"
#include <stddef.h>
/**
* _strpbrk - searches a string for any of a set of bytes
* @s: string to search in
* @accept: string containing bytes to match
*
* Return: pointer to the first occurrence in s of any byte in accept,
* or NULL if none is found * 
* 
* 
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int a = 0;
unsigned int g;

while (s[a] != '\0')
{
g = 0;
while (accept[g] != '\0')
{
if (s[a] == accept[g])
return (s + a);
g++;
}
a++;
}
return (NULL);
}
