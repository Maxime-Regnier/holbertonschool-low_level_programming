#include "lists.h"
#include <stdio.h>

/**
 * list_len - Compte le nombre d'ele©ments dans une liste inee
 * @h: Pointeur vers le dÃ©but de la list
 *
 * Return: Nombre total de noeuds
 */
size_t list_len(const list_t *h)
{
		size_t count = 0;

		while (h != NULL)
		{
		count++;
		h = h->next;
		}
		return (count);
}
