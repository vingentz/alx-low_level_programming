#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to a pointer
 * @idx: index of the list where new node will be added
 * @n: element to be added
 * Return: address of new node else NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nnode, *tmp = *h;
	unsigned int k = 0;

	if (h == NULL)
		return (NULL);
	nnode = malloc(sizeof(dlistint_t));
	if (nnode == NULL)
		return (NULL);
	nnode->n = n;
	nnode->prev = NULL;
	nnode->next = NULL;
	if (idx == 0)
	{
		if (*h != NULL)
			(*h)->prev = nnode;
		nnode->next = *h;
		*h = nnode;
	}
	while (k < idx - 1)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		k++;
	}
	if (tmp == NULL)
		return (NULL);
	nnode->next = tmp->next;
	nnode->prev = tmp;
	if (tmp->next == nnode)
		tmp->next->prev = nnode;
	tmp->next = nnode;
	return (nnode);
}
