#include "lists.h"
#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * add_node - Ajoute un nouveau nœud au début d'une liste list_t
 * @head: Double pointeur vers le premier élément de la liste
 * @str: Chaîne de caractères à dupliquer et stocker dans le nouveau nœud
 *
 * Return: Adresse du nouveau nœud, ou NULL si l'opération échoue
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *add_node = malloc(sizeof(liste_t));
if (add_node == NULL)
	return (NULL);
add_node->str = strdup(str);
if (add_node->str == NULL)
{
	free(add_node);
	return (NULL);
}
add_node->len = strlen(str);
add_node->next = *head;
*head = add_node;

return add_node;
}

}
