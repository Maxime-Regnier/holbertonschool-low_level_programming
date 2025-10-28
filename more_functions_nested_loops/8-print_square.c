#include "main.h"
/**
 * print_square - Affiche un carré avec le caractère '#'
 * @size_t: Taille du carré (nombre de lignes et de colonnes)
 *
 * Description:
 * Cette fonction affiche un carré composé du caractère '#'.
 * Le nombre de lignes et de colonnes dépend de la valeur de size_t.
 * Si size_t est inférieur ou égal à 0, la fonction affiche simplement
 * un retour à la ligne.
 */
void print_square(int size_t)
{
int t;
int m;
for (m = 0; m < size_t; m++)
{
for (t = 0; t < size_t; t++)
{
_putchar ('#');
}
_putchar('\n');
}
}
