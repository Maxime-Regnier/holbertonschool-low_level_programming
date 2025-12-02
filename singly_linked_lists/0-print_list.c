#include <stdio.h>
#include "lists.h"
/**
* print_list - prints all the elements of a list_t list
* @h: pointer to the first node of the list
*
* Description: traverses the list and prints each node’s string
* along with its length. If the string is NULL, prints
* [0] (nil). Returns the number of nodes in the list.
*
* Return: the number of nodes in the list
*/
size_t print_list(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
if (h->str != NULL)
{
printf("[%u] %s\n", h->len, h->str);
}
else
{
printf("[0] (nil)\n");
}
h = h->next;
count++;
}
return (count);
}
