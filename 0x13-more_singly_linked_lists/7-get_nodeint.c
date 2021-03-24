#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node
 * @head: pointer to the head node
 * @index: the index of the node to be returned
 *
 * Return: node pointer if index exists, otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head != NULL)
	{
		for (i = 0; i < index; i++)
		{
			if (head == NULL)
				return (NULL);
			head = head->next;
		}
		return (head);
	}
	return (NULL);
}
