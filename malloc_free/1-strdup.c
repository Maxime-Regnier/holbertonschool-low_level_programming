#include "main.h"
#include <stdlib.h>

/*
 * Duplicates a given string by allocating memory dynamically.
 * The function copies each character from the original string
 * to the newly allocated memory and terminates it with a null
 * character.
 */

char *_strdup(char *str)
{
	unsigned int i, length;
	char *strdup;

if (str == NULL)
{
	return (NULL); 
}

for (length = 0; str[length] != '\0'; length++);

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
