#include <stdlib.h>
#include "hash_tables.h"
/**
  * hash_table_create - Creates a new hash table
  * @size: Size of the array
  *
  * Return: Pointer to the newly created hash table, or NULL on failure
  *
  * Description: Allocates memory for a new hash table and its array of
  * pointers. Initializes each array element to NULL.
  */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *kb;
unsigned long int i;
if (size == 0)
return (NULL);
kb = malloc(sizeof(hash_table_t));
if (kb == NULL)
return (NULL);
kb->size = size;
kb->array = malloc(sizeof(hash_node_t *) * size);
if (kb->array == NULL)
{
free(kb);
return (NULL);
}
for (i = 0; i < size; i++)
kb->array[i] = NULL;
return (kb);
}
