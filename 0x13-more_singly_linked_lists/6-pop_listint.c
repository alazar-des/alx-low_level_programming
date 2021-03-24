#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete the head node and return data
 * @head: pointer to the head node pointer
 *
 * Return: head node data on success, otherwise 0
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head != NULL)
	{
		if (*head != NULL)
		{
			data = (*head)->n;
			temp = *head;
			*head = (*head)->next;
			free(temp);
			return (data);
		}
	}
	return (0);
}
