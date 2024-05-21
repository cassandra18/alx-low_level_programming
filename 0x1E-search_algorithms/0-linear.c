#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - uses linear algorithm to search for a value
 * in an array.
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value:  the value to search for
 * Return: The function returns the index where the first value is located,
 *	 or return -1 if the value is not in the array
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", (unsigned int)i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}

	return (-1);
}
