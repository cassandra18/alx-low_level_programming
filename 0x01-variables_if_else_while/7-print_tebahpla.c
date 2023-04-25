#include <stdio.h>
/**
 * main - program that prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	int x = 122;

	while (x >= 97)
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
