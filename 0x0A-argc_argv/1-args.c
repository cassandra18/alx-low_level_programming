#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: argument count
 * @argv: vector argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/

	printf("%d\n", argc - 1);

	return (0);
}
