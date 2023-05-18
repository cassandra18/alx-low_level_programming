#include <stdlib.h>
#include <malloc.h>
#include "main.h"


/**
 * malloc_checked - allocates memory using malloc
 * @b: the memory to be allocated
 * Return: a pointer to the memory address allocated
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
