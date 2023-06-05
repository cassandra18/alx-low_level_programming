#include "lists.h"

/**
 * free_listint - a function that frees a list_t list.
 * @head: a pointer to the first node in a list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current_node = head;
	listint_t *next_node;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}
