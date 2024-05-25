#include <stdio.h>
#include <math.h>
#include <stddef.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 *	using jump search algorithm
 * @array: Pointer to the first element in the array to search
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where the value is located
 *	or -1 if value is absent in the array
 *
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step, start, end, prev, i;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	prev = 0;

	/* Finding the block where the element may be present*/
	while (array[prev] < value)
	{
		printf("Value checked array[%u] = [%d]\n", (unsigned int)prev, array[prev]);
		if (array[prev] == value)
			return (prev);

		if (prev + step >= size)
			break;

		prev += step;
	}

	/*Print the the range in which the valu is expected to be found */
	start = prev > step ? prev - step : 0;
	end = prev >= size ? size - 1 : prev;

	printf("Value found between indexes [%u] and [%u]\n",
			(unsigned int)start, (unsigned int)end);

	/*Linear search in the identified block*/
	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%u] = [%d]\n", (unsigned int)i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
