#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatène deux chaînes en une nouvel chai
 * @s1: pointeur sur la première chaîne raitee comme vide si NUL
 * @s2: pointeur sur la seconde chaîne traitee comme vide si NULL
 *
 * Alloue une zone mémoire pour contenir s1, s2 et le '\0'
 * L utilisateur doit libérer le résultat avec fre).
 *
 * Return: pointeur sur la chaîne concaténéeu NULL si malloc éch
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i, j;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
while (s1[len1])
	len1++;
while (s2[len2])
	len2++;

concat = malloc(len1 + len2 + 1);

if (concat == NULL)
	return (NULL);

for (i = 0; i < len1; i++)
	concat[i] = s1[i];
for (j = 0; j < len2; j++)
	concat[len1 + j] = s2[j];

concat[len1 + len2] = '\0';

return (concat);
}
