#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>
/**
 * add_node_end - add a new node at the begining
 * @head: address of the head node
 * @str: the string element
 *
 * Return: address to the new add node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(new->str);
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
