#include "main.h"
/**
 * clear_bit -  a function that sets the value of a bit to 0 at a given index.
 * @n: a pointer to an unsigned long int number that we want to modify
 * @index: an unsigned int representing the index of the bit we want to set.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitMask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~bitMask;
	return (1);
}
