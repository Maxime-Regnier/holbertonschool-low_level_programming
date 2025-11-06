#include <stdio.h>
#include <stdlib.h>
/**
 * main - Adds positive numbers
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
int b = 0;
int s, r;

if (argc == 1)
{
printf("%d\n", 0);
return (0);
}
for (s = 1; s < argc; s++)
{
for (r = 0; argv[s][r] != '\0'; r++)
{
if (argv[s][r] < '0' || argv[s][r] > '9')
{
printf("Error\n");
return (1);
}
}
b += atoi(argv[s]);
}
printf("%d\n", b);
return (0);
}
