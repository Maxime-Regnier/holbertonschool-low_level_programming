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
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{

	if (letter == 'q' || letter == 'e')
	{
		continue;
	}
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
