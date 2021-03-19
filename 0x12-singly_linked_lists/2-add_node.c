#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add a new node at the begining
 * @head: address of the head node
 * @str: the string element
 *
 * Return: address to the new add node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(new->str);
	new->next = *head;
	*head = new;
	return (*head);
}
