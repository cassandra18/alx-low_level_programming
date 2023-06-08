#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: the number whose binary is to be calculated
 */
void print_binary(unsigned long int n)
{
	unsigned long int bitMask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
	{
		_putchar('0');
	return;
	}

	while (bitMask > 0)
	{
		if (n & bitMask)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}

		bitMask >>= 1;
	}

}
