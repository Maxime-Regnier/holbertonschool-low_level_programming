#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - compare nombre
* de la variable
* et doit récupérer le dernier chiffre
* Return: 0
*/

int main(void)
{
int n, nbr;

srand(time(0));
n = rand() - RAND_MAX / 2;

nbr = n % 10;
if (nbr > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, nbr);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is 0\n", n, nbr);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, nbr);
}
return (0);
}
