#include "lists.h"

/**
 * listint_len - Returns the number of nodes in a linked list of type list_t
 * @h: Pointer to the head of the linked list
 * Return: Number of nodes in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
