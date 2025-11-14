#include <stdlib.h>
/**
* _calloc - alloue un tableau et initialise la mémoire à 0
* @nmemb: nombre d'éléments
* @size: taille en octets de chaque élément
*
* Return: pointeur vers la mémoire initialisée ou NULL si échec
*
* Description:
* Reproduit calloc : vérifie les paramètres, alloue et initialise.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int t, g;
if (nmemb == 0 || size == 0)
return (NULL);
t = (nmemb + size) * sizeof(char);
ptr = malloc(t);
if (!ptr)
return (NULL);
for (g = 0; g < t; g++)
ptr[g] = 0;
return (ptr);
}
