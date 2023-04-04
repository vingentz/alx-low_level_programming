#include "lists.h"

/**
 * sum_listint - sum of all data in the list
 * @head: Head of the linked list
 * Return: Sum or 0 if empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
