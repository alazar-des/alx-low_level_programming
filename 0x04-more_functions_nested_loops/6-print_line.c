#include "holberton.h"

/**
 * print_line - print straight line
 * @n: the number of times the _ should be printed
 *
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
