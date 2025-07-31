#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - Calcule la longueur d'une chaîne de caractères
 * @s: Chaîne dont on veut calculer la longueur
 *
 * Return: Longueur de la chaîne
 */
unsigned int _strlen(const char *s)
{
	unsigned int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * add_node - Ajoute un nouveau noeud au début d'une liste list_t
 * @head: Double pointeur vers le premier élémente la liste
 * @str: Chaîne de caractèr a dupliquer et stocker dans le nouveau noeud
 *
 * Return: Adresse du nouveau noeud, ou NULL si l'opération échoue
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *add_node = malloc(sizeof(list_t));
if (add_node == NULL)
	return (NULL);
add_node->str = strdup(str);
if (add_node->str == NULL)
{
	free(add_node);
	return (NULL);
}
add_node->len = _strlen(str);
add_node->next = *head;
*head = add_node;

return (add_node);
}
