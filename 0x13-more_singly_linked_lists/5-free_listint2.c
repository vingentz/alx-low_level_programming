#include "lists.h"

/**
 * free_listint2 - Frees a linked list of type list_t
 * @head: Pointer to the head of the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = current->next;
		free(current);
	}
}
