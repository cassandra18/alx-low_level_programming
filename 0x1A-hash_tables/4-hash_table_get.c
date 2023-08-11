#include "hash_tables.h"
/**
  * hash_table_get - function that retrieves a value corresponding to a key
  * @ht: the hash table to retrieve from
  * @key: the key you are looking for
  * Return: the value or  NULL if key couldn’t be found
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *currentItem = ht->array[index];

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	while (currentItem != NULL)
	{
		if (strcmp(currentItem->key, key) == 0)
			return (currentItem->value);
		currentItem = currentItem->next;
	}
	return (NULL);
}
