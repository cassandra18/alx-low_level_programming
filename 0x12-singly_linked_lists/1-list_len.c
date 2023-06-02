#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 * in a linked list_t list.
 * @h: a pointer to the first node
 * Return: number of elements in a list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *current_node = h;

	while (current_node != NULL)
	{
		n++;
		current_node = current_node->next;
	}
	return (n);
}
