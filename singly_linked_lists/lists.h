#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - noeud de liste
 * @str: pointeur vers une string (chaîne de caractères)
 * @len: longueur de la string
 * @next: pointeur vers le prochain noeud
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

size_t list_len(const list_t *h);

#endif
