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
	int x, y;

	for (x = 0; x <= 14; x++)
	{
	for (y= 0; y <= 14; y++)
	{
	if (y > 9)
	{
	_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
	}
	_putchar('\n');
	}
}
