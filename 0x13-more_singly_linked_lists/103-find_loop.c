#include "lists.h"
/**
 * find_listint_loop - a function that finds the loop in a linked list.
 * @head: pointer to the first node in the list
 * Return: ddress of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hare = head;
	listint_t *tortoise = head;

	while (hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;


		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (hare);

		}
	}
	return (NULL);
}
