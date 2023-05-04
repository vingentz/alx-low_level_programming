#include "lists.h"
#include <stdio.h>

/**
 * loops_listint - Counts unique looped nodes in linked list
 * @head: Head of the linked list
 * Return: No of looped nodes else if no loop - 0
 */
size_t loops_listint(const listint_t *head)
{
	const listint_t *one, *two;
	size_t lnode = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	one = head->next;
	two = (head->next)->next;

	while (two)
	{
		if (one == two)
		{
			one = head;
			while (one != two)
			{
				lnode++;
				one = one->next;
				two = two->next;
			}
			one = one->next;
			while (one != two)
			{
				lnode++;
				one = one->next;
			}
			return (lnode);
		}
		one = one->next;
		two = (two->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listed list
 * @head: Head of the linked list
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t lnode, index = 0;

	lnode = loops_listint(head);

	if (lnode == 0)
	{
		for (; head != NULL; lnode++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < lnode; index++)
			printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	printf("-> [%p] %d\n", (void *)head, head->n);
	return (lnode);
}
