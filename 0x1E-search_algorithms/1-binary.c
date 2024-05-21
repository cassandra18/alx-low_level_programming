#include <stdio.h>
#include <stddef.h>

/**
* print_array - Prints the current array being searched
* @array: The array to print
* @left: The starting index of the current subarray
* @right: The ending index of the current subarray
*/
void print_array(int *array, size_t left, size_t right)
{
size_t i;
printf("Searching in array: ");

for (i = left; i <= right; i++)
{
if (i > left)
{
printf(", ");
}
printf("%d", array[i]);
}
printf("\n");
}

/**
* binary_search - Searches for a value in a sorted array of integers
*                 using the Binary search algorithm.
* @array: Pointer to the first element of the array to search in.
* @size: The number of elements in the array.
* @value: The value to search for.
*
* Return: The index where value is located, or -1 if value is not present
*         in the array or if the array is NULL.
*/
int binary_search(int *array, size_t size, int value)
{
size_t left;
size_t right;
size_t mid;

if (array == NULL)
{
return (-1);
}

left = 0;
right = size - 1;

while (left <= right)
{
print_array(array, left, right);

mid = left + (right - left) / 2;

if (array[mid] == value)
{
return ((int)mid);
}
else if (array[mid] < value)
{
left = mid + 1;
}
else
{
right = mid - 1;
}
}

return (-1);
}
