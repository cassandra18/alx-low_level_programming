#include "main.h"
/**
 *get_endianness - a function that checks the endianness.
 *Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int number = 1;
	char *ptr = (char *)&number;

	return ((int)*ptr);
}
