#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_last_node - returns the last node
 * @h: pointer to the head node
 *
 * Return: the last node
 */
const dlistint_t *find_last_node(const dlistint_t *h)
{
	const dlistint_t *head = h, *end = NULL, *temp;

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
 * print_dlistint - print content of doubly linked list
 * @h: pointer to the head node
 *
 * Return: length of the doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *end;

	if (h != NULL)
	{
		end = find_last_node(h);
		while (h != end)
		{
			len++;
			h = h->next;
		}
		len++;
	}
	return (len);
}
