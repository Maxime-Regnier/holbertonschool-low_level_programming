#include <stdio.h>
#include <stdlib.h>
/**
* main - Multiplies two numbers
* @argc: Number of arguments
* @argv: Array of argument strings
*
* Return: 0 if success, 1 if error
*/
int main(int argc, char *argv[])
{
int num0, num2, result;
if (argc != 3)
{
printf("Error\n");
return (1);
}
num0 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num0 * num2;
printf("%d\n", result);
return (0);
}
