#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Alxays 0 Success
 *
 */

int main(void)
{
	char n;
	char t;

	for (n = '0'; n <= '9'; n++)
	{
	putchar(n);
	}
	for (t = 'a'; t <= 'f'; t++)
	{
	putchar(t);
	}
	putchar ('\n');
	return (0);
}
