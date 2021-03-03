#include <stdlib.h>

/**
 * create_array - create an array and initialize with a character
 * @size: size of array
 * @c: character to initialize string
 *
 * Return: array pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ch = malloc(size);
	if (ch == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ch[i] = c;
		i++;
	}
	return (ch);
}
