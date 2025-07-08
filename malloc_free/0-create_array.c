#include "main.h"
#include <stdlib.h>

/**
 * create_array - Crée un tableau de taille `size` et l'initialise avec le caractère `c`
 * @size: La taille du tableau
 * @c: Le caractère avec lequel remplir le tableau
 * 
 * Return: Un pointeur vers le tableau créé, ou NULL en cas d'échec
 */

char *create_array(unsigned int size, char c)

{	
	if (size == 0) {
	return (NULL);
	}
char *array = malloc(sizeof(char) * (size + 1));

if (array == NULL) {
	return (NULL);
for (unsigned int i = 0; i < size; i++)

{
array[i] = c;
}
array[size] = '\0';
return array;
}
