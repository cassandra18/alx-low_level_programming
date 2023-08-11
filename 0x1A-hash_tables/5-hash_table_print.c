#include "hash_tables.h"

/**
  * hash_table_print - prints a hash table
  * @ht: the hash table
  */
void hash_table_print(const hash_table_t *ht)
{
	int position = 1;
	unsigned long int j;
	hash_node_t *currentItem = NULL;

	if (ht == NULL)
		return;
	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		currentItem = ht->array[j];
		while (currentItem != NULL)
		{
			if (!position)
				printf(", ");
			printf("'%s': '%s'", currentItem->key, currentItem->value);
			position = 0;
			currentItem = currentItem->next;
		}
	}
	printf("}\n");
}
