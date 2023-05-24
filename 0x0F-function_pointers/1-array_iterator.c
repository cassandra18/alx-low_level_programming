#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator -  a function that executes a function given as a
 * parameter on each element of an array.
 * @array: given array to alternate on
 * @size: the array size
 * @action: the pointer function to the array
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
