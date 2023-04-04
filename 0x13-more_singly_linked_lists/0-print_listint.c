#include "lists.h"

/**
 * print_listint - Prints all elements of a linked list of type list_t
 * @h: Pointer to the head of the linked list
 * Return: Nodes in the linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}
	return (node_count);
}
