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
	const dlistint_t *end;

	if (head == NULL)
		return;
	end = find_last_node(head);
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
