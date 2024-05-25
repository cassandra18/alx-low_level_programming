#include <stdio.h>
#include <stddef.h>

/**
 *interpolation_search - A function that searches for a value in a sorted array
 *	using interpolation search algorithm
 *@array: pointer to the first element in the array
 *@value: The value to search for
 *@size: The number of elements in the array
 *
 *Return: THe index of the value or,
 *-1 if the value is absent or the array is NULL
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
				return (low);
			return (-1);
		}

		pos = low + (((double)(high - low) / (array[high] -
						array[low])) * (value - array[low]));

		if (pos >= size)
		{
			printf("Value checked array[%u] is out of range\n", (unsigned int)pos);
			return (-1);
		}

		printf("Value checked array[%u] = [%d]\n", (unsigned int)pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}
