#include <stdio.h>
/**
* main - Imprime les nombres de 1 à 100 avec FizzBuzz
*
* Description:
* Ce programme affiche les nombres de 1 à 100.
* Pour chaque multiple de 3, il affiche "Fizz" au lieu du nombre.
* Pour chaque multiple de 5, il affiche "Buzz".
* Pour les nombres multiples à la fois de 3 et de 5, il affiche "FizzBuzz".
* Tous les autres nombres sont affichés normalement, séparés par un espace.
*
* Return: Toujours 0 (succès)
*/
int main(void)
{
int j;
{
for (j = 1; j <= 100; j++)
{
if (j % 3 == 0 && j % 5 == 0)
{
printf("FizzBuzz");
}
else if (j % 5 == 0)
{
printf("Buzz");
}

else if (j % 3 == 0)
{
printf("Fizz");
}
else
{
printf("%d", j);
}
if (j < 100)
{ 
printf(" ");
}
}
printf("\n");
return (0);
}
}
