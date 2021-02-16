#include <stdio.h>

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
 * rev_string - reverse a string
 * @s: input string
 *
 */
void rev_string(char *s)
{
	int l;
	char c;
	int i = 0;

	l = _sizeof(s) - 1;
	while (i < l / 2)
	{
		c = *(s + l - i);
		*(s + l - i) = *(s + i);
		*(s + i) = c;
		i++;
	}
}
