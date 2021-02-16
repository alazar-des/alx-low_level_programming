#include "holberton.h"

/**
 * _sizeof - return size of a string
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
 * puts2 - print every other character of a string
 * @str: input string
 *
 */
void puts2(char *str)
{
	int len;

	len = _sizeof(str);
	while (len > 0)
	{
		_putchar(*str);
		str += 2;
		len -= 2;
	}
	_putchar('\n');
}
