²#include <stdio.h>
#include <ctype.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void) {

	char ch = 'C';

	if (isupper(ch)) {
		printf("%c is an Uppercase Letter \n", ch);
	}
	else
	{
	printf("%c is not an Uppercase Letter \n", ch);
	}
	return 0;

}
