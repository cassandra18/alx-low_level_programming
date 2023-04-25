#include <stdio.h>
/**
 * main - Entry point
 * description- program that prints the alphabet in lowercase
 * skip q and e
 * Return: 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
