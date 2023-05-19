#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _realloc -  a function that reallocates a memory block using malloc and free
 * @ptr:  a pointer to the memory previously allocated with a
 * call to malloc: malloc(old_size)
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size:  is the new size, in bytes of the new memory block
 * Return: pointer to the new location
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *arr;
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		arr = malloc(new_size);
		return (arr);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	memcpy(new_ptr, ptr, (old_size < new_size) ? old_size : new_size);

	free(ptr);

	return (new_ptr);
}
