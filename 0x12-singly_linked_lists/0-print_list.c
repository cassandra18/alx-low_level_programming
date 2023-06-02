#include "lists.h"

/**
* print_list -  a function that prints all elements of a list
* @h: the pointer to the first node in the list
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	const list_t *current_node = h;
	size_t n = 0;

	while (current_node != NULL)
	{
		if (current_node->str != NULL)
		{
		printf("[%d] %s\n", current_node->len, current_node->str);
		}
		else
		{
		printf("[0] (nil)\n");
	}

	current_node = current_node->next;
	n++;
	}

	return (n);
}
