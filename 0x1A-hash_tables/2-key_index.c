#include "hash_tables.h"

/**
 * key_index - function that returns the index of a key
 * @key: pointer to the string to be hashed
 * @size: the size of array
 * Return: index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashed_value = hash_djb2((const unsigned char *)key);
	unsigned int index = hashed_value % size;

	return (index);
}
