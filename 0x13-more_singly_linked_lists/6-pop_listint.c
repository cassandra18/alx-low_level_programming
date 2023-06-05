#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: double pointer to the head node
 * Return: the head nodes data
 */
int pop_listint(listint_t **head)
{
	listint_t *temporary =  *head;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	data = temporary->n;

	*head = (*head)->next;

	free(temporary);
	return (data);
}
