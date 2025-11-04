#include "main.h"
/**
* _strspn - gets the length of a prefix substring
* @s: string to search in
* @accept: string containing the characters to match
*
* Return: the number of bytes in the initial segment of s
* which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int v = 0;
unsigned int c = 0;
unsigned int r = 0;
int j;

while (s[v] != '\0')
{
c = 0;
j = 0;
while (accept[c] != '\0')
{
if (s[v] == accept[c])
{
r++;
j = 1;
break;
}
c++;
}
if (j == 0)
break;
v++;
}
return(r);
}
