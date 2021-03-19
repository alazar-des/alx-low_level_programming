#include <stdlib.h>
#include "lists.h"

/**
 * _strlen - return length of string
 * @str: string pointer
 *
 * Return: length of string
 */
size_t _strlen(const char *str)
{
	size_t count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

/**
 * _strdup - duplicate string
 * @src: string to be duplicated
 *
 * Return: duplicated pointer in success, otherwise NULL
 */
char *_strdup(const char *src)
{
	size_t size, i;
	char *dest;

	size = _strlen(src);
	dest = malloc(size + 1);
	if (dest == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

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
	new->str = _strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;
	return (*head);
}
