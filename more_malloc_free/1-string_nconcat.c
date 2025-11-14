#include <stdlib.h>
#include <string.h>
/**
* string_nconcat - concatène s1 et les n premiers caractères de s2
* @s1: première chaîne
* @s2: deuxième chaîne
* @n: nombre maximum de caractères à prendre dans s2
*
* Return: pointeur vers la nouvelle chaîne ou NULL si échec
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int len1, len2, total;
len1 = s1 ? strlen(s1) : 0;
len2 = s2 ? strlen(s2) : 0;
if (n >= len2)
n = len2;
total = len1 + n;
p = malloc(sizeof(char) * (total + 1));
if (p == NULL)
return (NULL);
if (s1)
strcpy(p, s1);
else
p[0] = '\0';
if (s2)
strncat(p + len1, s2, n);
return (p);
}
