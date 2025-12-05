#include <stdlib.h>
#include "hash_tables.h"
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, a unique string in the hash table
 * @value: The value corresponding to a key
 * @next: Pointer to the next node in case of collision (chaining)
 *
 * Description: Represents a single element in the hash table. Each node
 * contains a key-value pair and a pointer to the next node to handle
 * collisions using chaining.
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
