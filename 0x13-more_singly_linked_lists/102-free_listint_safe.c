#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: Head of the linked list
 * Return: size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t freesize = 0;
	int rem;

	listint_t *frs;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		rem = *h - (*h)->next;
		if (rem > 0)
		{
			frs = (*h)->next;
			free(*h);
			*h = frs;
			freesize++;
		}
		else
		{
			free(*h);
			*h = NULL;
			freesize++;
			break;
		}
	}
	*h = NULL;
	return (freesize);
}
