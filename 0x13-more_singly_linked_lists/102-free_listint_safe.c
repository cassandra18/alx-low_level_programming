#include "lists.h"
/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: double pointer to the head
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tortoise, *hare, *current;
	size_t n = 0;

	if (h == NULL || *h == NULL)
		return (0);

	tortoise = *h;
	hare = (*h)->next;

	while (hare && hare->next)
	{
		if (tortoise == hare)
		{
			tortoise = *h;
			while (tortoise != hare)
			{
				current = tortoise;
				tortoise = tortoise->next;
				free(current);
				n++;
			}
			current = hare->next;
			free(hare);
			n++;
			*h = NULL;
			return (n);
		}
		tortoise = tortoise->next;
		hare = hare->next->next;
	}
	while (*h != NULL)
	{
		current = *h;
		*h = (*h)->next;
		free(curret);
		n++;
	}
	return (n);
}
