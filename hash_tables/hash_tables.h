#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - Node of a hash table
 *
 * Description: Represents a single element in the hash table, storing
 * a key-value pair and a pointer to the next node to handle collisions.
 *
 * @key: The key, a unique string in the hash table
 * @value: The value corresponding to a key
 * @next: Pointer to the next node in case of collision (chaining)
 */

typedef struct hash_node_s
{
char *key;
char *value;
struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s
{
unsigned long int size;
hash_node_t **array;
} hash_table_t;

int _putchar(char c);
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

#endif
