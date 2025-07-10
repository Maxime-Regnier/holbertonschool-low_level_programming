#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatène deux chaînes en une nouvel chaine
 * @s1: pointeur sur la première chaîne raitee comme vide si NULL)
 * @s2: pointeur sur la seconde chaîne traitee comme vide si NULL)
 *
 * Alloue une zone mémoire pour contenir s1, s2 et le '\0'.
 * L utilisateur doit libérer le résultat avec free().
 *
 * Return: pointeur sur la chaîne concaténéeu NULL si malloc échoue.
 */

char *str_concat(char *s1, char *s2)
{
        char *concat;
        unsigned int len1, len2;

if (s1 == NULL)
        s1 = "";
if (s2 == NULL)
        s2 = "";
len1 = str_length(s1);
len2 = str_length(s2);

concat = malloc(len1 + len2 + 1);

if (concat == NULL)
       return NULL;
str_copy(concat, s1);
str_copy(concat + len1, s2);

concat[len1 + len2] = '\0';

return (concat);
}
