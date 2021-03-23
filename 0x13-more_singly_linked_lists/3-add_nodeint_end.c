#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add node at the end of a list
 * @head: pointer to the head node pointer
 * @n: integer for node data initialization
 *
 * Return: new node pointer if successful, otherwise NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		for (temp = *head; temp->next != NULL; temp = temp->next)
			;
		temp->next = new;
	}
	return (new);
}
