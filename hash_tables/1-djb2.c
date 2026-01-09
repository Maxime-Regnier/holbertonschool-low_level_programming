#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_djb2 - Hash function implementing the DJB2 algorithm
 * @str: The string to hash
 *
 * Description: This function takes a string and computes its hash
 * value using the DJB2 algorithm by Dan Bernstein. It shifts the
 * current hash left by 5 bits, adds the previous hash, then adds
 * the current character, iterating over all characters in the string.
 *
 * Return: The computed hash as an unsigned long int
 */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int h;

hash = 5381;
while ((h = *str++))
hash = ((hash << 5) +hash) + h;
return (hash);
}
