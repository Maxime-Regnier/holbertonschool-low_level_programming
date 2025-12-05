#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - Node of a hash table
 * @key: The key, string, unique in the hash table
 * @value: The value corresponding to a key
 * @next: Pointer to the next node in case of collision (chaining)
 *
 * Description: Represents a single element in the hash table. Each node
 * contains a key-value pair and a pointer to the next node to handle
 * collisions using chaining.
 */

typedef struct hash_node_s
{
char *key;
char *value;
struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 * @size: The size of the array
 * @array: An array of pointers to hash_node_t
 *
 * Description: Represents the hash table itself. Contains an array of
 * pointers to hash_node_t and the size of the array. Each array element
 * points to the first node of a linked list to handle collisions.
 */

typedef struct hash_table_s
{
unsigned long int size;
hash_node_t **array;
} hash_table_t;

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

/**
 * hash_table_create - Creates a new hash table
 * @size: Size of the array
 *
 * Return: Pointer to the newly created hash table, or NULL on failure
 *
 * Description: Allocates memory for a new hash table and its array of
 * pointers. Initializes each array element to NULL.
 */


hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

#endif
