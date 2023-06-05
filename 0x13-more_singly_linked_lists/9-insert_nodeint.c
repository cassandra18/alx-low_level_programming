#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: double pointe to the first node
 * @idx: where idx is the index of the list where the new node should
 * be added. Index starts at 0
 * @n: value of node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current_node;
	unsigned int occurrence = 0;

	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}

	else
	{
		current_node = *head;
		while (current_node != NULL && occurrence < (idx - 1))
		{
			current_node = current_node->next;
			occurrence++;
		}
		if (current_node == NULL || current_node->next == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->next = current_node->next;
		current_node->next = new_node;
	}
		return (new_node);
}
