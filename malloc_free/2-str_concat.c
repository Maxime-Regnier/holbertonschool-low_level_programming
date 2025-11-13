#include <stdlib.h>
#include "main.h"
/**
* str_concat - concatenates two strings
* @s1: first string to concatenate
* @s2: second string to concatenate
*
* Return: pointer to the newly allocated string, or NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
char *concat;
unsigned int p = 0, s = 0;
unsigned int len1 = 0, len2 = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;
concat = malloc((len1 + len2 + 1) * sizeof(char));
if (concat == NULL)
return (NULL);
for (p = 0; p < len1; p++)
concat[p] = s1[p];
for (s = 0; s < len2; s++)
concat[p + s] = s2[s];
concat[p + s] = '\0';
return (concat);
}
