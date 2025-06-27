#include "main.h"
#include <stdio.h>

/**
 * main - Print a Fizz Buzz program
 * Return: Always 0 (Success)
 */

int main(void)

{
	int h;

	for (h = 1; h <= 100; h++)
	{
	if ((h % 3 == 0) && (h % 5 == 0))
	{
	printf("FizzBuzz");
	}
	else if (h % 3 == 0)
	{
	printf("Fizz");
	}
	else if (h % 5 == 0)
	{
	printf("Buzz");
	}
	else
	{
	printf("%d", h);
	}
	if (h != 100)
	{
	printf(" ");
	}
	}
	printf("\n");
	return (0);
}
