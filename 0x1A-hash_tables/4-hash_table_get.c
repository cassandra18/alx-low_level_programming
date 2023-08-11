#include "hash_tables.h"
/**
  * hash_table_get - function that retrieves a value corresponding to a key
  * @ht: the hash table to retrieve from
  * @key: the key you are looking for
  * Return: the value or  NULL if key couldn’t be found
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *currentItem = ht->array[index];

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	if (index >= ht->size)
		return (NULL);

	while (currentItem && strcmp(currentItem->key, key) != 0)
	{
		currentItem = currentItem->next;
	}
	return ((currentItem == NULL) ? NULL : currentItem->value);
}
