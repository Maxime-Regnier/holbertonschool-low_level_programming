#include "main.h"

/**
* _strlen - returns the length of a string
* @s: string
* Return: length of a string
**/
int _strlen(char *s)
{
	int chaine = 0;

	while (*(s + chaine) != '\0')
	{
	chaine++;
	}

	return (chaine);
}
