#include "lists.h"
/**
 * dlistint_len - returns number of elements in linked dlistint_t list
 * @h: pointer to list head
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t k = 0;

	while (h != NULL)
	{
		k++;
		h = h->next;
	}
	return (k);
}
