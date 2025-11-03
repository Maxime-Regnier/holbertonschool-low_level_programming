#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search in
 * @c: character to locate
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
int y = 0;

while (s[y] != '\0')
{
if (s[y] == c)
{
return (s + y);
}
y++;
}
if (c == '\0')
{
return (c + s);
}
else
{
return (NULL);
}
}
