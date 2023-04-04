#include "lists.h"

/**
 * pop_listint - delete node
 * @head: pointer to the head of the linked list
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	int nd;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;
	nd = current -> n;
	*head = current->next;
	free(current);
	return (nd);
}
