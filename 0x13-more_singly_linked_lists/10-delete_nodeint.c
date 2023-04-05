#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: head of listed list
 * @index: node to delete
 * Return: 1 if successful else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int nd = 0;
	listint_t *current, *temp;

	if (*head == NULL)
		return (0);

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (nd < (index - 1) && current != NULL)
	{
		current = current->next;
		nd++;
	}

	if (nd != (index - 1) || current->next == NULL)
		return (-1);
	temp = current->next;
	current->next = (current->next)->next;
	free(temp);

	return (1);
}
