#include "main.h"
/**
 * 
 * 
 * 
 */
void rev_string(char *s)
{
char *l = s;
char *m = s;
char b;
while (*m)
m++;
m--;
while (l < m)
{
    b = *l;
    *l = *m;
    *m = b;
    l++;
    m--;
}
}