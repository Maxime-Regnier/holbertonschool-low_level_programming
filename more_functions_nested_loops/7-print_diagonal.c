#include "main.h"
/**
 * print_diagonal - Dessine une ligne diagonale dans le terminal
 * @n: Nombre de lignes à imprimer pour former la diagonale
 *
 * Description:
 * Cette fonction affiche une diagonale composée du caractère '\'.
 * À chaque nouvelle ligne, un espace supplémentaire est ajouté avant
 * le caractère pour créer un effet de diagonale.
 * Si n est inférieur ou égal à 0, la fonction affiche simplement
 * un retour à la ligne.
 */
void print_diagonal(int n)
{
int i;
int k;
if (n <= 0)
{
_putchar ('\n');
}
for (i = 1; i <= n; i++)
{
for (k = 1; k < i; k++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
