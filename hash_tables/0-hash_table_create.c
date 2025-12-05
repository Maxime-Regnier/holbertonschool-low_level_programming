#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to new table, or NULL
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
