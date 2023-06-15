#include "lists.h"

/**
 * sum_dlistint - Sum of all data in a linked list
 * @head: pointer to the head of the list
 * Return: 0 if is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int totsum = 0;

	while (head)
	{
		totsum += head->n;
		head = head->next;
	}
	return (totsum);
}
