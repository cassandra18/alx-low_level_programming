#include "hash_tables.h"

/**
 * hash_table_set - function that inserts elements to the hash table
 * @ht: pointer to the hash table
 * @key: its the key
 * @value: value corresponding to the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newItem;
	char *newValue;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	newValue = strdup(value);
	if (newValue == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = newValue;
			return (1);
		}
	}

	newItem = malloc(sizeof(hash_node_t));
	if (newItem == NULL)
	{
		free(newValue);
		return (0);
	}
	newItem->key = strdup(key);
	if (newItem->key == NULL)
	{
		free(newItem);
		return (0);
	}
	newItem->value = newValue;
	newItem->next = ht->array[index];
	ht->array[index] = newItem;

	return (1);
}
