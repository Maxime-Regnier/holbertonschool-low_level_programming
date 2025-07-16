#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - Appelle une fonction pour imprimer un nom.
 * @name: Le nom a imprimer.
 * @f: Pointeur vers la fonction qui imprimera le nom.
 *
 * Description :
 * Cette fonction vérifie que name et f ne sont pas nuls,
 * puis appelle la fonction f pour imprimer le nom.
 */
void print_name(char *name, void (*f)(char *))
{

if (name != NULL && f != NULL)
{
f(name);
}

}
