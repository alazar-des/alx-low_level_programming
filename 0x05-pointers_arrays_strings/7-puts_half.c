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
 * puts_half - print second half of a string
 * @str: input string
 *
 */
void puts_half(char *str)
{
	int len;

	len = _sizeof(str) / 2;
	if (len % 2 != 0)
		len++;
	str = str + len;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}