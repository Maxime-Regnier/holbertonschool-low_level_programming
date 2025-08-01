#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Libère une liste chaînée
 * @head: Pointeur vers le premier nœud de la liste
 */
void free_list(list_t *head)
{
list_t *tmp;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
	free(tmp->str);
	free(tmp);
	}
}
