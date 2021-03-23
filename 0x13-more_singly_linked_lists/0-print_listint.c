#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all elements of node in a list
 * @h: the pointer to the list
 *
 * Return: length of a list
 */
size_t print_listint(const listint_t *h)
{
	size_t len;

	len = 0;
	if (h != NULL || h->next != NULL)
	{
		for (; h->next != NULL; h = h->next)
		{
			if (h != NULL)
				printf("%d\n", h->n);
			len++;
		}
		printf("%d\n", h->n);
		len++;
	}
	return (len);
}
