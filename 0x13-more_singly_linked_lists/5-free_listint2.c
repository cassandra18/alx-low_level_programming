#include "lists.h"

/**
 * free_listint2 - a function that frees a list_t list.
 * The function sets the head to NULL
 * @head: a pointer to the first node in a list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);

	}
	*head = NULL;
}
