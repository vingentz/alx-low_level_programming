#include "lists.h"

/**
 * print_list - Prints all elements of a linked list of type list_t
 * @h: Pointer to the head of the linked list
 * Return: Number of nodes in the linked list
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		node_count++;
		h = h->next;
	}
	return (node_count);
}
