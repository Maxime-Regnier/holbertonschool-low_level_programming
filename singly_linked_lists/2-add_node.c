#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * 
 * 
 * 
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *add_node = malloc(sizeof(list_t));
if (!add_node)
{
return (NULL);
}
add_node->str = strdup(str);
if (!add_node->str)
{
free(add_node);
return (NULL);
}
add_node->next = *head;
*head = add_node;
return (add_node);
}
