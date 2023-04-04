#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 * Description: singly linked list node structure
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


/**
 * print_listint - prints elements of a linked list
 * @h: pointer to the head of the linked list
 * Return: Number of nodes in the linked list
 */
size_t print_listint(const listint_t *h);

/*
 * listint_len - calculates the number of nodes in a linked list
 * @h: pointer to the head of the linked list
 * Return: Number of nodes in the linked list
 */
size_t listint_len(const listint_t *h);

/*
 * add_nodeint - add node at the beginning of the linked list
 * @head: pointer to the head of the linked list
 * @n: integer to add
 * Return: Address of the new elementNumber of nodes in the linked list
 */
listint_t *add_nodeint(listint_t **head, const int n);

/*
 * add_nodeint_end - add node to the end of the list
 * @head: pointer to the head of the linked list
 * @n: integer to add
 * Return: Address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n);

/*
 * free_listint - frees linked list
 * @head: pointer to the head of the linked list
 * Return: Nothing
 */
void free_listint(listint_t *head);

/*
 * free_listint2 - frees linked list
 * @head: pointer to the head of the linked list
 * Return: Nothing
 */
void free_listint2(listint_t *head);

/*
 * pop_listint - deletes head node of a linked list
 * @head: pointer to the head of the linked list
 * Return: 0 if empty
 */
int pop_listint(listint_t **head);

/*
 * get_nodeint_at_index - reads the nth node of a list
 * @head: pointer to the head of the linked list
 * @index: node to read,starting at 0
 * Return: nth ode or NULL if non-existent
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/*
 * sum_listint - Sums data in a linked list
 * @head: pointer to the head of the linked list
 * Return: total sum
 */
int sum_listint(listint_t *head);

/*
 * insert_nodeint_at_index - insert node at a given position
 * @head: pointer to the head of the linked list
 * @idx:index where to add new node
 * @n: node to add
 * Return: address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/*
 * delete_nodeint_at_index - delete node at a given position
 * @head: pointer to the head of the linked list
 * @index: node to delete
 * Return: 1 if successfull or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index);


listint_t *reverse_listint(listint_t **head);


size_t print_listint_safe(const listint_t *head);


size_t free_listint_safe(listint_t **h);


listint_t *find_listint_loop(listint_t *head);


#endif
