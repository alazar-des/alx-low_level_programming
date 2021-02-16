#include "holberton.h"

/**
 * _sizeof - return size of string
 * @str: input string
 *
 * Return: size of string
 */
int _sizeof(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}

	return (count);
}

/**
 * print_rev - print a string in reverse
 * @s: input string to be printed in reverse
 *
 */
void print_rev(char *s)
{
	int i;

	i = _sizeof(s) - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
