#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix (casted as int*)
 * @size: size of the square matrix
 *
 * Description: Calculates the sum of the two diagonals of a square matrix.
 * Prints each sum followed by a comma and space, except the last sum.
 * Uses _putchar to print each digit of the sums.
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int h;
int sum1 = 0;
int sum2 = 0;

for (h = 0; h < size; h++)
{
sum1 += a[h * size + h];

sum2 += a[h * size + (size - 1 - h)];
}
printf("%d, %d\n", sum1, sum2);
}
