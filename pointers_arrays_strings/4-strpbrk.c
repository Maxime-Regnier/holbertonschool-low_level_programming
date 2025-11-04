#include "main.h"
#include <stddef.h>
/**
 * 
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
