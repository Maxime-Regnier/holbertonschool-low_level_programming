#include <stdio.h>
/**
* main - Prints the number of arguments passed to the program
* @argc: Number of arguments passed to the program
* @argv: Array of pointers to the arguments
*
* Description: The program prints the number of arguments passed
* to it, excluding the name of the program itself. Each argument
* is counted, and the total number is printed followed by a new line.
*
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
