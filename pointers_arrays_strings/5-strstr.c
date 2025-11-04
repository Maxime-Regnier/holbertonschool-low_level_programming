#include "main.h"
#include <stddef.h>
/**
* _strstr - locates a substring in a string
* @haystack: string to search in
* @needle: substring to locate
*
* Return: pointer to the beginning of the located substring,
* or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
int f = 0;
int o;
if (needle[0] == '\0')
return (haystack);
while (haystack[f] != '\0')
{
o = 0;
while (needle[o])
{
if (haystack[f + o] != needle[o])
break;
o++;
}
if (needle[o] == '\0')
return (haystack + f);
f++;
}
return (NULL);
}
