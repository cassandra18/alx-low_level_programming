#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* print_subarray - Prints the elements in the array between low and high
* @array: The array to print elements from
* @low: The starting index
* @high: The ending index
*/
void print_subarray(int *array, size_t low, size_t high)
{
size_t i;

printf("Searching in array: ");
for (i = low; i <= high; i++)
{
if (i != low)
printf(", ");
printf("%d", array[i]);
}
printf("\n");
}

/**
* binary_search - Searches for a value in a sorted array using binary search
* @array: Pointer to the first element of the array to search
* @low: The starting index of the subarray to search
* @high: The ending index of the subarray to search
* @value: The value to search for
*
* Return: The first index where value is located, or -1 if not found
*/
int binary_search_2(int *array, size_t low, size_t high, int value)
{
size_t mid;

while (low <= high)
{
print_subarray(array, low, high);
mid = low + (high - low) / 2;

if (array[mid] == value)
return (mid);
if (array[mid] < value)
low = mid + 1;
else
high = mid - 1;
}

return (-1);
}

/**
* exponential_search - Searches for a value in a sorted array using
*	exponential search
* @array: Pointer to the first element of the array to search
* @size: The number of elements in the array
* @value: The value to search for
* 
* Return: The first index where value is located, or -1 if not found
*/
int exponential_search(int *array, size_t size, int value)
{
size_t bound = 1;
size_t low = bound / 2;
size_t high = (bound < size) ? bound : size - 1;

if (array == NULL)
return (-1);

if (array[0] == value)
return (0);

while (bound < size && array[bound] < value)
{
printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
bound *= 2;
}


printf("Value found between indexes [%lu] and [%lu]\n", low, high);
return (binary_search_2(array, low, high, value));
}
