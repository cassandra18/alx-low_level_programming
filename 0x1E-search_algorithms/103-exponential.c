#include <stdio.h>


/**
 * print_array - prints the current subarray being searched
 * @array: The array to be printed
 * @left: the left index of the subarray
 * @right: the right index of the subarray
 */

void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}


/**
 * binary_search_2 - Searches for a value in a sorted array of integers using
 *	the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @left: The left index of the subarray to search.
 * @right: The right index of the subarray to search.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if value is not present.
 */
int binary_search_2(int *array, size_t left, size_t right, int value)
{
	size_t mid = left + (right - left) / 2;

	while (left <= right)
	{
	print_array(array, left, right);

	if (array[mid] == value)
		return (mid);
	if (array[mid] < value)
		left = mid + 1;
	else
		right = mid - 1;
	}
	return (-1);
}


/**
 * exponential_search - Afunction that searches for a value in a sorted array
 *	using exponential search algorithm
 * @array: pointer of the first element in the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: The first index where the value is located,
 *	or -1 if the value is absent of the array in NULL
 *
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	size_t left = i / 2;
	size_t right = i < size ? i : size - 1;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	while (i < size && array[i] <= value)
	{
		printf("Value cahecked array[%u] = [%d]\n", (unsigned int)i, array[i]);
		i *= 2;
	}

	printf("Value found between indexes [%u] and [%u]\n",
			(unsigned int)left, (unsigned int)right);

	return (binary_search_2(array, left, right, value));
}
