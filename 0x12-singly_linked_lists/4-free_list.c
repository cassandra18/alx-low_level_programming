#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: a pointer to the first node in a list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current_node = head;
	list_t *next_node;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node->str);
		free(current_node);
		current_node = next_node;
	}
}
