#include "main.h"

/**
 * Task 5 - Numbers constitute the only universal language
 * 
 * Cette tâche consiste à écrire une fonction nommée more_numbers qui 
 * imprimera les nombres de 0 à 14, suivi d'un retour à la ligne, et cela, 
 * 10 fois consécutivement. 
 * 
 * Prototype : void more_numbers(void);
 * 
 * Contrainte : Vous ne pouvez utiliser la fonction _putchar que trois fois 
 * dans votre code, ce qui nécessite une approche réfléchie pour 
 * optimiser son utilisation tout en produisant la sortie requise.
 * 
 * Sortie attendue : La fonction doit afficher la séquence
 * "01234567891011121314" dix fois, chaque séquence sur une nouvelle ligne.
 */

void more_numbers(void)
{
	int x, j;

	for (x = 0; x <= 14; x++)
	{
	for (j= 0; j <= 14; j++)
	{
	if (j > 9)
	{
	_putchar((j / 10) + '0');
	}
	_putchar((j % 10) + '0');
	}
	_putchar('\n');
	}
}
