#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: Head of linked list
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *origin, *new;

	if (head == NULL || *head == NULL)
		return (NULL);

	origin = NULL;
	while (*head != NULL)
	{
		new = (*head)->next;
		(*head)->next = origin;
		origin = *head;
		*head = new;
	}
	(*head) = origin;
	return (*head);
}
