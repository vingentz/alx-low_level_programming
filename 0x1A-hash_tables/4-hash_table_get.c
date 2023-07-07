#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key being looked for
 * Return: value associated with the element || NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *nde;
	unsigned long int index = 0;

	if (ht == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	nde = ht->array[index];

	if (nde == NULL)
		return (NULL);

	while (nde)
	{
		if (!strcmp(nde->key, key))
			return (nde->value);
		nde = nde->next;
	}
	return (NULL);
}
