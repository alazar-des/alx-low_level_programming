#include <stdlib.h>
#include "lists.h"

/**
 * find_last_node - returns the last node
 * @h: pointer to the head node
 *
 * Return: the last node
 */
dlistint_t *find_end_node(dlistint_t *h)
{
	dlistint_t *head = h, *end = NULL, *temp;

	while (h != NULL)
	{
		temp = head;
		while (temp != h)
		{
			if (h->next == temp)
				return (h);
			temp = temp->next;
		}
		end = h;
		h = h->next;
	}
	return (end);
}
/**
 * add_dnodeint_end - add node at the end of doubly linked list
 * @head: pointer to the address of the head node
 * @n: data of the new node to be inserted
 *
 * Return: pointer to the new node on success, otherwise NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end, *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}
	else
	{
		end = find_end_node(*head);
		new->prev = end;
		new->next = end->next;
		end->next = new;
	}
	return (new);
}
