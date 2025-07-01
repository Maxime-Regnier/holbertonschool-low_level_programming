#include "main.h"

/**
 * _strchr - Cherche un caractère dans une chaîne de caractères.
 * @s: Pointeur vers la chaîne de caractères à parcourir.
 * @c: Caractère à rechercher.
 *
 * Return: Pointeur vers la première occurrence de c, ou NULL si non trouvé.
*/

char *_strchr(char *s, char c)

{
	while (*s != '\0') {
	if (*s == c) {
	return s;
	}
	s++;
}
return NULL;
}

