#include <stdlib.h>
#include "lists.h"

/**
 * find_last_node - returns the last node
 * @h: pointer to the head node
 *
 * Return: the last node
 */
dlistint_t *find_end_nodesum(dlistint_t *h)
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
 * sum_dlistint - return the sum of the integer data in doubly linked list
 * @head: head node pointer
 *
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *end, *h = head;

	if (head == NULL)
		return (sum);
	end = find_end_nodesum(head);
	while(head != end)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;
	head = h;
	return (sum);
}
