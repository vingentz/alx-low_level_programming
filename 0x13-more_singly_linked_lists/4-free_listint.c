#include "lists.h"

/**
 * free_listint - Frees a linked list of type list_t
 * @head: Pointer to the head of the linked list
 * Return: no return.
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
