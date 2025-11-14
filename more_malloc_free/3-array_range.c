#include <stdlib.h>
/**
* array_range - crée un tableau d'entiers de min à max inclus
* @min: valeur minimale
* @max: valeur maximale
*
* Return: pointeur vers le tableau alloué ou NULL si erreur
*
* Description:
* 1. Vérifie si min > max, retourne NULL si c'est le cas.
* 2. Calcule la taille du tableau nécessaire.
* 3. Alloue la mémoire avec malloc.
* 4. Si malloc échoue, retourne NULL.
* 5. Remplit le tableau avec les valeurs de min à max.
* 6. Retourne le pointeur vers le tableau créé.
*/
int *array_range(int min, int max)
{
int *h;
int size;
int y;
if (min > max)
return (NULL);
size = max - min + 1;
h = malloc(sizeof(int) * size);
if (!h)
return (NULL);
for (y = 0; y < size; y++)
h[y] = y;
return (h);
}
