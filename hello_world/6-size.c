#include<stdio.h>

/**
 * main - Displays the size of basic C data types
 * using the sizeof operator. Prints int, float, double,
 * and char sizes in bytes.
 * Return: Always 0 (Success)
 */

int main(void)
{
printf("Size of a char: %lu byte\n", sizeof(char));
printf("Size of an int: %lu bytes\n", sizeof(int));
printf("Size of a long int: %lu bytes\n", sizeof(long int));
printf("Size of long long int: %lu bytes\n", sizeof(long long int));
printf("Size of a float: %lu bytes\n", sizeof(float));
return (0);
}
