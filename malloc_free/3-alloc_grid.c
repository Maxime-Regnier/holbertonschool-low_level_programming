#include <stdlib.h>
/**
* alloc_grid - retourne un pointeur vers un tableau 2D d'entiers
* @width: largeur de la grille
* @height: hauteur de la grille
*
* Initialise chaque élément à 0. Retourne NULL si width ou height <= 0
* ou en cas d'échec de malloc.
*
* Return: pointeur vers le tableau 2D alloué, ou NULL si échec
*/
int **alloc_grid(int width, int height)
{
int **grid;
int o, x;

if (width <= 0 || height <= 0)
return (NULL);

grid = (int **) malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);

for (o = 0; o < height; o++)
{
grid[o] = (int *) malloc(sizeof(int) * width);
if (grid[o] == NULL)
{
for (x = 0; x < o; x++)
free(grid[x]);
free(grid);
return (NULL);
}
for (x = 0; x < width; x++)
{
grid[o][x] = 0;
}
}
return (grid);
}
