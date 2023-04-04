#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at index
 * @head: Head of linked list
 * @idx: index to insert
 * @n: data to insert
 * Return: new node address or NULL if failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int in = 0;
	listint_t *new, *temp;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	temp = *head;
	while (in < (idx - 1))
	{
		temp = temp->next;
		in++;
		if (temp == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
