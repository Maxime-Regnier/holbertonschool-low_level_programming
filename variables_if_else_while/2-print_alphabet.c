#include "holberton.h"

/**
 * print_alphabet - Prints the alphanet in lowercase
 */
voicd print_alphabet(voice)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	_putchar('\n');
}
