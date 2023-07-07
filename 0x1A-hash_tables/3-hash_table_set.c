#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds element to hash table
 * @ht: hash table to add/update the key/value
 * @key: key
 * @value: value associated with the key
 * Return: 1 if succeeded else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nw;
	unsigned long int k, index;
	char *nw_value;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	nw_value = strdup(value);
	if (nw_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (k = index; ht->array[k]; k++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[k]->value = nw_value;
			return (1);
		}
	}
	nw = malloc(sizeof(hash_node_t));
	if (nw == NULL)
	{
		free(nw_value);
		return (0);
	}
	nw->key = strdup(key);
	if (nw->key == NULL)
	{
		free(nw);
		return (0);
	}
	nw->value = nw_value;
	nw->next = ht->array[index];
	ht->array[index] = nw;
	return (1);
}
