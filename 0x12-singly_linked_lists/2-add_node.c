#include "lists.h"

int _strlen(const char *str);

/**
* _strlen - returns the length of a string
* @str: the string whose length is to be returned
* Return: length of @str
*/
int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}


/**
 * add_node -  a function that adds a new node at
 * the beginning of a list_t list.
 * @head: a double pointer to the beggining of linked list
 * @str: a pointer the string to duplicate
 * Return: the address of the new node or null if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
