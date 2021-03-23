#include <unistd.h>
#include "lists.h"

/**
 * listint_len - return length of a list
 * @h: pointer to the head node of a list
 *
 * Return: length of a list
 */
size_t listint_len(const listint_t *h)
{
	size_t len;

	len = 0;
	if (h != NULL || h->next != NULL)
		len++;
	for (; h->next != NULL; h = h->next)
		len++;
	return (len);
}
