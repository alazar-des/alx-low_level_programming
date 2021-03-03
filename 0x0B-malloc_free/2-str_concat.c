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
	return (count);
}

/**
 * cpy_str - copy string from s1 to s2
 * @s1: source
 * @s2: destination
 *
 */
void cpy_str(char *src, char *dest)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++, src++;
	}
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
	int size1, size2;
	char *con;

	if (s1 != NULL)
		size1 = _sizeof(s1);
	else
		size1 = 0;
	if (s2 != NULL)
		size2 = _sizeof(s2);
	else
		size2 = 0;
	if (size1 + size2 == 0)
		return (0);
	con = malloc(size1 + size2 + 1);
	if (con == NULL)
		return (NULL);
	if (size1 != 0)
		cpy_str(s1, con);
	if (size2 != 0)
		cpy_str(s2, con + size1);

	con[size1 + size2] = '\0';
	return (con);
}
