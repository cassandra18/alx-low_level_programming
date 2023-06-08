#include "main.h"
/**
 *  flip_bits - a function that returns the number of bits you would
 *  need to flip to get from one number to another.
 *  @n: the number for which we want to count
 *  the number of bits needed to be flipped.
 *  @m: the two number for which we want to count the number of bits
 *  needed to be flipped.
 *  Return: the count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exorTotal =  n ^ m;
	unsigned int occurrence = 0;

	while (exorTotal != 0)
	{
		occurrence += exorTotal & 1;
		exorTotal >>= 1;

	}
	return (occurrence);
}
