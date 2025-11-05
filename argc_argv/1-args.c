#include <stdio.h>
/**
* Programme qui affiche le nombre d'arguments passés au programme.
*
*
*/
int main(int argc, char *argv[])
{
int l = argc - 1;
(void)argv;
printf("%d\n", l);
return (0);
}
