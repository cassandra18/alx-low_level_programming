#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: argument count
 * @argv: vector argument
 * return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argv - 1);
	return (0);
}
