#include "main.h"
#include <stdlib.h>

/*
 *
 *
 *
 */

char *_strdup(char *str)
{
char *strdup;
unsigned int i;

	if (strdup == NULL)
	{
	return (NULL);
	}

strdup = malloc(sizeof(char) * (size + 1));

if (strdup == NULL)
{
	return (NULL); 
}

for (i = 0; i < size; i++)
{
	strdup[i] = str;
}
strdup[size] = '\0';

return (strdup);

}
