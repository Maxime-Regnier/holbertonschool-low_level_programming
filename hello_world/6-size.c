#include<stdio.h>

/**
 * main - Displays the size of basic C data types
 * using the sizeof operator. Prints int, float, double,
 * and char sizes in bytes.
 * Return: Always 0 (Success)
 */

int main(void)
{
printf("Size of int: %lu bytes\n", sizeof(int));
printf("Size of float: %lu bytes\n", sizeof(float));
printf("Size of double: %lu bytes\n", sizeof(double));
printf("Size of char: %lu byte\n", sizeof(char));
return (0);
}
