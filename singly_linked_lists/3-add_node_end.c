#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - Calcule la longueur d'une chaine
 * @s: ChaiÃn®e aesurer
 *
 * Return: Longueur de la chaine
 */
unsigned int _strlen(const char *s)
{
	unsigned int i = 0;
	while (s[i])
		i++;
	return i;
}

/**
 * add_node_end - Ajoute un nouveau noeud a la fin d'une liste list_t
 * @head: Double pointeur vers le premier noeud de la liste
 * @str: ChaÃ®ne de caractÃ¨r a dupliquer
 *
 * Return: Adresse du nouveau noeud, ou NULL si erreur
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *add_node_end = malloc (sizeof(list_t));
list_t *temp;
	if (add_node_end == NULL)
		return (NULL);
add_node_end->str = strdup(str);
if (add_node_end->str == NULL)
{
	free(add_node_end);
	return (NULL);
}
add_node_end->len = _strlen(str);
add_node_end->next =  NULL;
if (*head == NULL)
{
	*head = add_node_end;
	return (add_node_end);
}
temp = *head;
while (temp->next != NULL)
{
	temp = temp->next;
}
temp->next = add_node_end;

return (add_node_end);
}
