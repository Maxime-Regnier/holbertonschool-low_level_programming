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
unsigned int i;

char *strdup = malloc(sizeof(char) * (size_t) + 1);

if (strdup == NULL)
{
	return (NULL); 
}

for (i = 0; i < (size_t) i++)
{
	strdup[i] = str[i];
}
str[size_t] = '\0';

return (strdup);

}
