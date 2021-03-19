#include <stdlib.h>
#include "lists.h"

/**
 * list_len - return length of a list
 * @h: list pointer
 *
 * Return: list length
 */
size_t list_len(const list_t *h)
{
	size_t len;

	if (h == NULL)
		return (0);
	len = 0;
	for (; h != NULL; h = h->next)
		len++;
	return (len);
}
