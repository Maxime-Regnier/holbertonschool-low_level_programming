#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * This function appends the content of the src string
 * to the end of the dest string, replacing the null terminator
 * of dest, and then adds a new null terminator at the end.
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int o = 0, v = 0;

while (dest[o] != '\0')
o++;

while (src[v] != '\0')
{
dest[o] = src[v];
o++;
v++;
}

dest[o] = '\0';

return (dest);
}
