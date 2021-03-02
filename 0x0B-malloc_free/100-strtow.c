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
	while (*s != ' ')
	{
		count++;
		s++;
	}
	return (count);
}

/**
 * count_words - count number of words in a string
 * @s: input string
 *
 * Return: number of words
 */
int count_words(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		while (*s == ' ' && *s != '\0')
			s++;
		while (*s != ' ' && *s != '\0')
			s++;
		count++;
	}
	return count;
}

/**
 * cpy_str - copy string from s1 to s2
 * @s1: source
 * @s2: destination
 *
 */
void cpy_str(char *s1, char *s2)
{
	while (*s1 != ' ')
	{
		*s2 = *s1;
		s2++, s1++;
	}
	*s2 = '\0';
}

/**
 * word_cpy - copy each words on string into 2D array
 * @s: input string
 * @w: number of words in the input string
 *
 * Return: 2D array that containes words in each row
 */
char **word_cpy(char *s, int w)
{
	char **crt;
	int i;

	crt = malloc(w * sizeof(char *));
	if (crt == NULL)
		return (NULL);
	i = 0;
	while (i < w - 1)
	{
		while (*s == ' ' && *s != '\0')
			s++;
		if (*s != '\0')
		{
			crt[i] = malloc(_sizeof(s) + 1);
			if (crt[i] == NULL)
				return (NULL);
			cpy_str(s, crt[i]);
		}
		i++;
	}
	return (crt);
}

/**
 * strtow - split string into words
 * @str: input string
 *
 * Return: words in 2D array format
 */
char **strtow(char *str)
{
	int words;

	words = count_words(str);
	return (word_cpy(str, words));
}
