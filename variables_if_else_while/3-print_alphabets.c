#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
int i = 'a';
int j = 'A';

while (i <= 'z')
{
	putchar (i);
	i++;

}

while (i <= 'Z')
{
	putchar (i);
	i++;
}
return (0);

}
