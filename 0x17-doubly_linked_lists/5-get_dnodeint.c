#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: pointer to head of the node
 * @index: index of the node
 * Return: NULL if doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int k = 0;

	if (!head)
		return (NULL);

	while (head && k < index)
	{
		head = head->next;
		k++;
	}

	if (head)
		return (head);
	else
		return (NULL);
}
