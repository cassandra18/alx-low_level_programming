#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: pointer to the first node
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *head = h;
	size_t n = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		n++;
	}
	return (n);
}
