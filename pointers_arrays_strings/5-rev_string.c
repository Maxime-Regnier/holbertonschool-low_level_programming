#include "main.h"
/**
 * rev_string - reverse a string in place
 * @s: pointer to the string to reverse
 *
 * This function takes a pointer to a string and reverses
 * the order of its characters directly in memory.
 * It uses two pointers that start at the beginning and end
 * of the string and swaps their values until they meet.
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
