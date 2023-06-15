#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * @head: pointer to the head of the list
 * @n: element to be added
 * Return: address of the new element else NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nnode;

	nnode = malloc(sizeof(dlistint_t));

	if (nnode == NULL)
		return (NULL);

	nnode->n = n;
	nnode->prev = NULL;
	nnode->next = *head;

	if (*head != NULL)
		(*head)->prev = nnode;

	*head = nnode;
	return (nnode);
}
