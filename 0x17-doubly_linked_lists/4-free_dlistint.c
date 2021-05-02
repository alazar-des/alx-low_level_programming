#include <stdlib.h>
#include "lists.h"

/**
 * find_last_node - returns the last node
 * @h: pointer to the head node
 *
 * Return: the last node
 */
const dlistint_t *find_last_nodefr(const dlistint_t *h)
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
 * free_dlistint - free doubly linked list
 * @head: pointer to the head node
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;
	const dlistint_t *end;

	if (head == NULL)
		return;
	end = find_last_nodefr(head);
	while (head != end)
	{
		next = head->next;
		free(head);
		head = NULL;
		head = next;
	}
	free(head);
	head = NULL;
}
