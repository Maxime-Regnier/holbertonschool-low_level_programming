#include <stdio.h>
/**
* main - Prints all arguments it receives
*
* @argc: Number of arguments passed to the program
* @argv: Array of pointers to the arguments
* 
* Description: The program prints each argument on a separate line,
* including the program name itself.
* 
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
int b;
for (b = 0; b < argc; b++)
printf("%s\n", argv[b]);
return (0);
}