#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at a given index
 * @head: pointer to the node pointer
 * @idx: index node to be inserted, index startes from 0
 * @n: data to initalize node
 *
 * Return: inserted node on success, otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i;

	if (head != NULL)
	{
		temp = *head;
		for (i = 1; i < idx; i++)
		{
			if (temp == NULL)
				return (NULL);
			temp = temp->next;
		}
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		if (idx == 0)
		{
			new->next = temp;
			*head = new;
		}
		else
		{
			new->next = temp->next;
			temp->next = new;
		}
		return (new);
	}
	return (NULL);
}
