#include "holberton.h"

/**
 * print_triangle - print triangle using #
 * @size: size of triangle
 *
 */

void print_triangle(int size)
{
	if (size > 0)
	{
	int i, s, h;

	for (i = 0; i < size; i++)
	{
		for (s = size - 1; s > i; s--)
			_putchar(' ');
		for (h = 0; h <= i; h++)
			_putchar('#');
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
