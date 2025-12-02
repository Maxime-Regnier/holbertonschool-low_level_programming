#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node - Adds a new node at the beginning of a linked list
* @head: Double pointer to the head of the list
* @str: String to store in the new node
*
* Description: Creates a new node containing a copy of `str`.
* Inserts it at the beginning of the list. Returns the new node.
* Returns NULL if memory allocation fails.
*
* Return: Pointer to the new node, or NULL if allocation fails
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
if (!head)
return (NULL);
new_node = malloc(sizeof(list_t));
if (!new_node)
{
return (NULL);
}
new_node->str = strdup(str);
if (!new_node->str)
{
free(new_node);
return (NULL);
}
new_node->next = *head;
*head = new_node;
return (new_node);
}
