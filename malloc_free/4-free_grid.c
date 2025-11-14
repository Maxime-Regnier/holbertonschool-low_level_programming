#include <stdlib.h>
/**
* free_grid - libère un tableau 2D d'entiers créé par alloc_grid
* @grid: pointeur vers le tableau 2D
* @height: nombre de lignes du tableau
*
* Return: rien
*/
void free_grid(int **grid, int height)
{
int m;
if (grid == NULL)
return;
for (m = 0; m < height; m++)
free(grid[m]);
free(grid);
}
