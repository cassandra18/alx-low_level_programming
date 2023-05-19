#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - a function that  creates an array of integers.
 * @min: the integer o begin with
 * @max: the integer to end with
 * Return: thepointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		ptr[i - min] = i;
	}
	return (ptr);
}
