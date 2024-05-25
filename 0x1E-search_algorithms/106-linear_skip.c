#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* linear_skip - Searches for a value in a sorted skip list of integers
* @list: A pointer to the head of the skip list to search in
* @value: The value to search for
*
* Return: A pointer on the first node where value is located,
*         or NULL if value is not present or list is NULL
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *node, *express;

if (!list)
return (NULL);

node = list;
while (node->express)
{
express = node->express;
printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
if (express->n >= value)
break;
node = express;
}

if (node->express)
printf("Value found between indexes [%lu] and [%lu]\n",
		node->index, node->express->index);
else
{
express = node;
while (express->next)
express = express->next;
printf("Value found between indexes [%lu] and [%lu]\n",
		node->index, express->index);
}

while (node && node->index <= express->index)
{
printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
if (node->n == value)
return (node);
node = node->next;
}

return (NULL);
}
