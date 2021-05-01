#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * find_last_node - returns the last node
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
 * get_dnodeint_at_index - return the node pointer at a given index
 * @head: pointer to head node
 * @index: node index to be returned
 *
 * Return: node pointer at a given index
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *h = *head, *end;

	if (head == NULL|| *head == NULL)
		return (-1);
	end = find_end_nodex(*head);
	while (*head != end->next)
	{
		if (i == index)
		{
			if ((*head)->prev != NULL)
			{
				(*head)->prev->next = (*head)->next;
				if ((*head)->next != NULL)
					(*head)->next->prev = (*head)->prev;
				free(*head);
				*head = h;
			}
			else
			{
				if ((*head)->next == NULL)
				{
					free(*head);
					*head = NULL;
				}
				else
				{
					(*head)->next->prev = NULL;
					free(*head);
					*head = (*head)->next;
				}
			}
			return (1);
		}
		*head = (*head)->next;
		i++;
	}
	return (-1);
}
