#include "holberton.h"

/**
 * print_alphabet - writes the alphabet in lowercase
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

}
