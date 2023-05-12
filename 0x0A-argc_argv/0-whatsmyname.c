#include <stdio.h>
/**
 * main - the program prints its name
 * @argc: count of arguments supplied to the program
 * @argv: is used to refer to an array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
	printf("%s\n", argv[0]);
	return (0);
}
