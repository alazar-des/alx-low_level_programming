#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free doubly linked list
 * @head: pointer to the head node
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}