#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{

	if (i != 'e' && i != 'q')
	putchar(i);
	}
	putchar('\n');
	return (0);
}
