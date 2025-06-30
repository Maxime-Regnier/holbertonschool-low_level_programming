#include "main.h"

/**
 * _memcpy - Copie une zone mémoire.
 * @dest: pointeur vers la mémoire de destination.
 * @src: pointeur vers la mémoire source.
 * @n: nombre d'octets à copier.
 *
 * Cette fonction copie n octets de la zone mémoire src vers dest.
 * Return: pointeur vers dest.
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
