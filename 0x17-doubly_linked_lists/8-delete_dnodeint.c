#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes node at the given index
 * @head: Pointer to the head node
 * @index: Index of the node to delete.
 * Return: 1 if deleted else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *crnt;
	unsigned int num = 0;

	if (*head == NULL)
		return (-1);

	crnt = *head;

	if (index == 0)
	{
		*head = crnt->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(crnt);
		return (1);
	}

	while (crnt != NULL && num < index)
	{
		crnt = crnt->next;
		num++;
	}
	if (crnt == NULL)
		return (-1);
	if (crnt->next != NULL)
		crnt->next->prev = crnt->prev;
	if (crnt->prev != NULL)
		crnt->prev->next = crnt->next;
	free(crnt);
	return (1);
}
