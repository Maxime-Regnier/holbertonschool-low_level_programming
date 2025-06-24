#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * mul - Multiplie deux entiers.
 * @a: 98
 * @b: 1024
 *
 * Return: 98*1024
 */

int mul(int a, int b)

{

	printf("98*1024\n");
	scanf("%d %d", &a, &b);

	printf("Multiplication of %d and %d is %d\n", a, b, (a * b));

	return (0);
}
