#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: pointer to the first node
 * Return: pointer to the first node of the reversed string
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node = NULL;
	listint_t *temp = *head;
	listint_t *next_node;

	while (temp != NULL)
	{
		next_node = temp->next;
		temp->next = previous_node;
		temp = next_node;
	}

	*head = previous_node;
	return (*head);
}
