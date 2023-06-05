#include "lists.h"

/**
 * add_nodeint_end -  a function that adds a new node at
 * the end of a list_t list.
 * @head: a double pointer to the beggining of linked list
 * @n: the integer value to add
 * Return: the address of the new node or null if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current_node;


	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);


	new_node->n = n;
	new_node->next = NULL;

	if (*head ==  NULL)
	{
		*head = new_node;
	}
	else
	{
		current_node = *head;
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node;
	}


	return (new_node);
}
