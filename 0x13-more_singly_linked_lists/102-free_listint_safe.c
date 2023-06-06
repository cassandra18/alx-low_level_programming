#include "lists.h"
/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: double pointer to the head
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *current;
	size_t n = 0;

	if (h == NULL || *h == NULL)
		return (n);

	current = *h;

	while (current != NULL)
	{
		n++;
		temp = current;
		current = current->next;
		free(temp);

	}
	*h = NULL;
	return (n);
}
