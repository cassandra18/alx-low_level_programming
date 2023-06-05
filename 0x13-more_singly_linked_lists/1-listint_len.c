#include "lists.h"

/**
 * listint_len - a function that returns the number of
 * elements in listint_t list.
 * @h: pointer to the first node
 * Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *head = h;
	size_t n = 0;

	while (head != NULL)
	{
		n++;
		head = head->next;

	}
	return (n);
}
