#include <stdlib.h>
/**
* create_array - crée un tableau de caractères et l’initialise avec un char
* @size: taille du tableau à créer
* @c: caractère utilisé pour remplir le tableau
* Return: pointeur vers le tableau, ou NULL si size = 0 ou si malloc échoue
*/
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int v;
if (size == 0)
return (NULL);
array = malloc(size * sizeof(char));
if (array == NULL)
return (NULL);
for (v = 0; v < size; v++)
{
array[v] = c;
}
return (array);
}
