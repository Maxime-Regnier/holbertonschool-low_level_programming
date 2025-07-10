#include "main.h"

/* retourne la longueur de s (sans compter le '\0') */
unsigned int str_length(char *s)
{
    unsigned int len = 0;
    while (s[len])
        len++;
    return len;
}

/* copie src dans dest (incluant '\0') et renvoie dest+taille+1 */
char *str_copy(char *dest, char *src)
{
    unsigned int i = 0;
    while (src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest + i + 1;
}
