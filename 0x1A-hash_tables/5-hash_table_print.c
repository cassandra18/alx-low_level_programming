#include "hash_tables.h"

/**
  * hash_table_print - prints a hash table
  * @ht: the hash table
  */
void hash_table_print(const hash_table_t *ht)
{
	int position = 0;
	unsigned long int j;
	hash_node_t *currentItem = NULL;

	if (ht == NULL)
		return;
	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			if (position == 1)
				printf(",");

			currentItem = ht->array[j];
			while (currentItem != NULL)
			{
				printf("'%s': '%s'", currentItem->key, currentItem->value)
				currentItem = currentItem->next;
				if (currentItem != NULL)
					printf(", ");
			}
			position = 1;
		}
	}
	printf("}\n");
}
