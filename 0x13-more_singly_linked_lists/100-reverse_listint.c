#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverse list
 * @head: point to the node pointer
 *
 * Return: the head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	current = *head;
	next = (*head)->next;
	(*head)->next = NULL;
	*head = next;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = current;
		current = *head;
		*head = next;
	}
	*head = current;
	return (*head);
}
