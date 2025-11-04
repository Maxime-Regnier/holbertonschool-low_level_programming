#include "main.h"
/**
* print_chessboard - prints the chessboard
* @a: pointer to 2D array of 8 elements
*
* Return: void
*/
void print_chessboard(char (*a)[8])
{
int e;
int l;

for (e = 0; e < 8; e++)
{
for (l = 0; l < 8; l++)
{
_putchar(a[e][l]);
}
_putchar('\n');
}
}
