#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: the number of elements to allocate space
 * @size: the each byte
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr != NULL)
	{
		memset(ptr, 0, nmemb * size);
	}

	return (ptr);
}
