#include <unistd.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _printf - print integer to standard output
 * @n: input integer
 *
 */
void _printf(int n)
{
	char c;

	if (n < 0)
	{
		c = '-';
		write(1, &c, 1);
		n = -n;
	}
	if (n / 10)
		_printf(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

/**
 * print_listint - print all elements of node in a list
 * @h: the pointer to the list
 *
 * Return: length of a list
 */
size_t print_listint(const listint_t *h)
{
	size_t len;
	char nl = '\n';

	len = 0;
	if (h != NULL)
	{
		for (; h->next != NULL; h = h->next)
		{
			if (h != NULL)
			{
				_printf(h->n);
				write(1, &nl, 1);
			}
			len++;
		}
		_printf(h->n);
		write(1, &nl, 1);
		len++;
	}
	return (len);
}
