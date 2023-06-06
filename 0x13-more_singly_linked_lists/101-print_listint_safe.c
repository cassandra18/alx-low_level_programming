#include "lists.h"
/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: pointer to first node
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise = head;
	const listint_t *hare = head;
	size_t n = 0;
	int loop_detected = 0;

	if (head == NULL)
		return (98);
	while (tortoise != NULL && hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
		{
			loop_detected = 1;
			break;
		}
	}
	if (loop_detected)
	{
		printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
		return (n);
	}
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		n++;
	}
	return (n);
}
