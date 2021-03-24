#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: pointer to head node pointer
 * @index: index at which the node to be deleted is
 *
 * Return: data of the deleted node on success, otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t  *temp, *prev;
	unsigned int i;
	int data;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	temp = *head;
	for (i = 1; i < index ; i++)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}
	if (index == 0)
	{
		data = temp->n;
		*head = temp->next;
	}
	else
	{
		prev = temp;
		temp = temp->next;
		if (temp == NULL)
			return (-1);
		prev->next = temp->next;
		data = temp->n;
	}
	free(temp);
	return (data);
}
