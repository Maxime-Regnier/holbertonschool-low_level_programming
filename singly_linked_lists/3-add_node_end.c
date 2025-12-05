#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
  * add_node_end - Adds a new node at the end of a list_t list
  * @head: A pointer to the pointer to the head of the list
  * @str: The string to be duplicated and stored in the new node
  *
  * Description: This function allocates memory for a new node, duplicates
  * the string str, calculates its length, sets the next pointer to NULL,
  * and appends the node at the end of the list. If the list is empty,
  * the new node becomes the head. If memory allocation fails, returns NULL.
  *
  * Return: The address of the new element, or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *temp;
unsigned int i = 0;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}

while (new->str[i] != '\0')
i++;
new->len = i;
if (*head == NULL)
{
*head = new;
}
else
{
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = new;
}
return (new);
}
