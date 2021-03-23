#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add node at the beginning of a list
 * @head: a pointer to the head node of a list
 * @n: an integer to initialize the data of node
 *
 * Return: pointer to the added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
