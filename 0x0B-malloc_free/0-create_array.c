#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of characters and
 * initializes it with a specific character
 * @size: size of bytes that will be allocated
 * @c: character to br printed in the memory of type char
 * Return: the array filled
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	return (NULL);

	str = malloc(sizeof(char) * size);

	if (str == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
