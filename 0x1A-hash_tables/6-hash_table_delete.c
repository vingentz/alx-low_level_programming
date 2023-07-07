#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to be deleted
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *nde;
	hash_table_t *head = ht;
	unsigned long int k;

	for (k = 0; k < ht->size; k++)
	{
		if (ht->array[k] != NULL)
		{
			nde = ht->array[k];
			while (nde != NULL)
			{
				tmp = nde->next;
				free(nde->key);
				free(nde->value);
				free(nde);
				nde = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
