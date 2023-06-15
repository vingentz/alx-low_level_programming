#include "lists.h"
/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list
 * @head: pointer to pointer to the head of the node
 * @n: element to be added
 * Return: address of the new element else NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nnode;

	nnode = malloc(sizeof(dlistint_t));

	if (nnode == NULL)
		return (NULL);

	nnode->n = n;
	nnode->next = NULL;

	if (*head == NULL)
	{
		nnode->prev = NULL;
		*head = nnode;
	}
	else
	{
		dlistint_t *tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = nnode;
		nnode->prev = tmp;
	}
	return (nnode);
}
