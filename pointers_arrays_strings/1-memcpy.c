#include "main.h"

/**
 * Copier les n premiers octets de la zone mémoire pointée par src vers celle pointée par d
 *
 *
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
