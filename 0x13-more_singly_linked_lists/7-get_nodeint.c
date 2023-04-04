#include "lists.h"

/**
 * get_nodeint_at_index - get node at certain position
 * @head: Head of the linked list
 * @index: position of the node to be checked
 * Return: Null if failed or nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int in = 0;

	if (head == NULL)
		return (NULL);
	while ((in < index) && head != NULL)
	{
		head = head->next;
		in++;
	}
	if (in == index)
		return (head);

	return (NULL);
}
