#include <stdlib.h>
/**
* malloc_checked - alloue de la mémoire avec malloc
* @b: taille en octets à allouer
*
* Return: pointeur vers la mémoire allouée ou termine le processus
* avec la valeur 98 si l'allocation échoue
*/
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(0);
return (ptr);
}
