#include "hash_tables.h"

/**
  * hash_table_delete - function that deletes the hash table
  * @ht: the hash table
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int j;
	hash_node_t *currentItem = NULL;
	hash_node_t *tempItem = NULL;

	if (ht == NULL)
		return;
	for (j = 0; j < ht->size; j++)
	{
		currentItem = ht->array[j];
		while (currentItem != NULL)
		{
			tempItem = currentItem;
			currentItem = currentItem->next;
			free(tempItem->key);
			free(tempItem->value);
			free(tempItem);
		}
	}
	free(ht->array);
	free(ht);
}
