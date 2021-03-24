#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free list memory
 * @head: pointer to the head node of a list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
