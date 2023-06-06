#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: pointer to the first node
 * Return: pointer to the first node of the reversed string
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node = NULL;
	listint_t *next_node = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);
	while ((*head)->next != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = previous_node;
		previous_node = *head;
		*head = next_node;
	}

	(*head)->next = previous_node;
	return (*head);
}
