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
unsigned int len1 = 0, len2 = 0, total;
unsigned int b, c;
if (s1)
while (s1[len1])
len1++;
if (s2)
while (s2[len2])
len2++;
if (n > len2)
n = len2;
total = len1 + n;
p = malloc(sizeof(char) * (total + 1));
if (p == NULL)
return (NULL);
for (b = 0; b < len1; b++)
p[b] = s1[b];
for (c = 0; c < n; c++)
p[b + c] = s2[c];
p[b + c] = '\0';
return (p);
}
