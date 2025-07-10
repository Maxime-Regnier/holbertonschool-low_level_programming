#include "main.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
 */

char *str_concat(char *s1, char *s2)
{
        char *concat;
        unsigned int len 1, len 2;

if s1 == NULL
        s1 = ""
if s2 == NULL
        s2 = ""
len 1 = str_length(s1);
len 2 = str_length(s2);

concat = malloc(len1 + len2 + 1);

if concat == NULL
       return NULL;
str_copy(concat, s1);
str_copy(concat + len1, s2);

concat[len1 + len2] = '\0';

return concat;
}
