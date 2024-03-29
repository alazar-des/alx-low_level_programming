#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - insert node at the begining of doubly linked list
 * @head: a pointer to the head node address
 * @n: node data
 *
 * Return: address of the new node on success, otherwise null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head != NULL)
		new->prev = (*head)->prev;
	else
		new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (*head);
}
