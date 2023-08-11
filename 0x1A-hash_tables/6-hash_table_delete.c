#include "hash_tables.h"

/**
  * hash_table_delete - function that deletes the hash table
  * @ht: the hash table
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int j;
	hash_node_t *currentItem;
	hash_node_t *tempItemp;


	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[i] != NULL)
		{
			currentItem = ht->array[j];
			while (currentItem != NULL)
			{
				tempItem = currentItem->next;
				free(currentItem->key);
				free(currentItem->value);
				free(currentItem);
				currentItem = tempItem;
			}
		}
	}
	free(ht->array);
	free(ht);
}
