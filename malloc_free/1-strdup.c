#include <stdlib.h>
/**
* _strdup - retourne une copie d'une chaîne allouée dynamiquement
* @str: chaîne à dupliquer
* Return: pointeur vers la copie, ou NULL si str = NULL ou malloc échoue
*/
char *_strdup(char *str)
{
char *dup;
unsigned int r, len = 0;
if (str == NULL)
return (NULL);
while (str[len] != '\0')
len++;
dup = malloc((len + 1) * sizeof(char));
if (dup == NULL)
return (NULL);
for (r = 0; r < len; r++)
dup[r] = str[r];
dup[r] = '\0';
return (dup);
}
