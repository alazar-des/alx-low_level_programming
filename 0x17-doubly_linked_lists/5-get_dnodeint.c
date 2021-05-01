#include <stdlib.h>
#include "lists.h"

/**
 * find_last_node - returns the last node
 * @h: pointer to the head node
 *
 * Return: the last node
 */
dlistint_t *find_end_nodeidx(dlistint_t *h)
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
 * get_dnodeint_at_index - return the node pointer at a given index
 * @head: pointer to head node
 * @index: node index to be returned
 *
 * Return: node pointer at a given index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *h = head, *end, *temp;

	if (head == NULL)
		return (NULL);
	end = find_end_nodeidx(head);
	while (head != end)
	{
		if (i == index)
		{
			temp = head;
			head = h;
			return (temp);
		}
		head = head->next;
		i++;
	}
	if (i == index)
	{
		temp = head;
		head = h;
		return (head);
	}
	return (NULL);
}
