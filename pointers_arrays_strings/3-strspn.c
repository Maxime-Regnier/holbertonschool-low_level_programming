#include "main.h"

/**
 * _strspn - Calcule la longueur du préfixe de la chaîne s
 *           constitué uniquement de caractères présents dans accept.
 * @s: la chaîne principale à analyser
 * @accept: la chaîne de caractères acceptés
 *
 * Retourne le nombre d'octets (caractères) du segment initial de s
 * composé uniquement de caractères présents dans accept.
 *
 * Fonction équivalente à strspn de la bibliothèque standard.
 * Voir 'man strspn' pour plus de détails.
 *
 * Return: la longueur du préfixe valide dans s
 */

unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, j, len = 0;
    int found;

    for (i = 0; s[i] != '\0'; i++)
    {
        found = 0;
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
            return len;
        len++;
    }
    return len;
}
