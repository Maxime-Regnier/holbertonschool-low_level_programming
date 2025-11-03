#include "main.h"
/**
 * _strlen - Calcule la longueur d'une chaîne de caractères
 * @s: La chaîne dont on veut connaître la longueur
 *
 * Description: Cette fonction parcourt chaque caractère de la chaîne
 * jusqu'au caractère nul '\0' et retourne le nombre de caractères.
 *
 * Return: La longueur de la chaîne
 */
int _strlen(char *s)
{
int k = 0;
while (s[k] != '\0')
k++;
return (k);
}
