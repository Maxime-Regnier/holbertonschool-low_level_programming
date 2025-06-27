#include "main.h"

/**
 * print_diagonal - Dessine des lignes diagonales selon le paramète
 * @n : Nombre d'impressions des lignes diagonale
 * Retour : vide
 */

void print_diagonal(int n)

{
	int i, p;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
	for (p = 0; p < i; p++)
	{
	_putchar(12);
	}
	_putchar(72);
	_putchar('\n');
	}
	}
}
