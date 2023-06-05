#include "lists.h"

/**
 * get_nodeint_at_index -  a function that returns the nth node
 * of a listint_t linked list.
 * @head: pointer to first node
 * @index: index of the node to be returned, starting at 0
 * Return: nth node or NULL  if the node doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head != NULL && n < index)
	{
		head = head->next;
		n++;
	}
	if (n < index)
	{
		return (NULL);
	}
	return (head);
}
