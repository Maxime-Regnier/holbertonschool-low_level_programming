#include <stdarg.h>
#include <stdio.h>
/**
* print_strings - Affiche des chaînes de caractères
* @separator: La chaîne à afficher entre chaque chaîne passée en argument
* @n: Le nombre de chaînes passées à la fonction
*
* Description: Cette fonction affiche toutes les chaînes passées en arguments
* séparées par la chaîne @separator Si @separator est NULL aucun séparateur
* n'est affiché. Si une des chaînes est NULL "(nil)" est affiché à la place
* Après l'affichage de toutes les chaînes, un saut de ligne est imprimé.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int g;
char *str;
va_start(args, n);
for (g = 0; g < n; g++)
{
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (g != n - 1 && separator != NULL)
printf("%s", separator);
}
va_end(args);
printf("\n");
}
