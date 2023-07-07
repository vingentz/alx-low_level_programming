#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: size of the array
 * Return:  a pointer to the newly created hash table || NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *nw_hsht = NULL;

	if (size == 0)
		return (NULL);
	nw_hsht = malloc(sizeof(hash_table_t));
	if (!nw_hsht)
		return (NULL);
	nw_hsht->size = size;
	nw_hsht->array = calloc((size_t)size, sizeof(hash_node_t *));
	if (nw_hsht->array == NULL)
		return (NULL);
	return (nw_hsht);
}
