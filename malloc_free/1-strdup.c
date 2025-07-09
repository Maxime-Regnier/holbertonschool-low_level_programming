#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space containing a copy
 *           of the string passed as a parameter.
 * @str: The string to be duplicated.
 *
 * The _strdup() function allocates memory dynamically using malloc for a new
 * string that contains a duplicate of the input string `str`. If the input
 * string is NULL, the function returns NULL. On successful allocation and
 * copying, it returns a pointer to the newly duplicated string. If memory
 * allocation fails, NULL is returned.
 *
 * The memory allocated for the new string can be freed using the free()
 * function.
 *
 * Return: A pointer to the newly duplicated string, or NULL if memory
 * allocation fails or if `str` is NULL.
 */

char *_strdup(char *str)
{
	unsigned int i, length;
	char *strdup;

if (str == NULL)
{
	return (NULL);
}

for (length = 0; str[length] != '\0'; length++)
;

strdup = malloc(sizeof(char) * (length) + 1);

if (strdup == NULL)
{
	return (NULL);
}

for (i = 0; i < length; i++)
{
	strdup[i] = str[i];
}
strdup [length] = '\0';
return (strdup);

}
