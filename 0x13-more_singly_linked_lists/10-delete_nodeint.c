#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node at index
 * index of a listint_t linked list.
 * @head: pointer to first node
 * @index: where index is the index of the node that should be deleted.
 * Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = *head;
	listint_t *previous_node = NULL;
	unsigned int n = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	while (current_node != NULL && n < index)
	{
		previous_node = current_node;
		current_node = current_node->next;
		n++;
	}
	if (n < index)
	{
		return (-1);
	}
	if (previous_node == NULL)
	{
		*head = current_node->next;
	}
	else
	{
		previous_node->next = current_node->next;
	}
	free(current_node);
	return (1);
}
