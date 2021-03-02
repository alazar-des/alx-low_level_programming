#include <stdlib.h>

/**
 * _sizeof - return number of character in a string
 * @s: input string
 *
 * Return: number of characters
 */
int _sizeof(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count - 1);
}

/**
 * str_concat - concatnate two strings
 * @s1: input string 1
 * @s2: input string 2
 *
 * Return: the concatnated string pointer
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i, j;
	char *con;

	i = 0, j = 0;
	size1 = _sizeof(s1);
	size2 = _sizeof(s2);
	if (size1 + size2 == 0)
		return (NULL);
	con = malloc(size1 + size2 + 2);
	while (i < size1 + size2)
	{
		while (i < size1)
		{
			con[i] = s1[i];
			i++;
		}
		con[i] = ' ';
		i++;
		while (j < size2)
		{
			con[i] = s2[j];
			i++, j++;
		}
	}
	con[i] = '\0';
	return (con);
}
