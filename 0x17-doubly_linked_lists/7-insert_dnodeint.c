#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * find_end_nodex - returns the last node
 * @h: pointer to the head node
 *
 * Return: the last node
 */
dlistint_t *find_end_nodex(dlistint_t *h)
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
 * insert_dnodeint_at_index - return the node pointer at a given index
 * @h: pointer to head node
 * @idx: node index to be returned
 * @n: data of the new node
 *
 * Return: node pointer at a given index
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *head, *end, *temp, *prev;

	if (h == NULL)
		return (NULL);
	head = *h;
	if (*h == NULL)
	{
		if (idx == 0)
		{
			temp = add_dnodeint(h, n);
			return (temp);
		}
		return (NULL);
	}
	end = find_end_nodex(head);
	while (*h != end->next)
	{
		if (i == idx)
		{
			temp = add_dnodeint(h, n);
			if (temp->prev != NULL)
			{
				temp->prev->next = temp, temp->prev = prev;
				*h = head;
			}
			else
				temp->prev = NULL, *h = temp;
			return (temp);
		}
		prev = *h, *h = (*h)->next, i++;
	}
	if (i == idx)
	{
		temp = add_dnodeint_end(h, n);
		prev->next = temp, temp->prev = prev;
		*h = head;
		return (temp);
	}
	return (NULL);
}
