/**
 * _strchr - locate a character in a string
 * @s: input string the character to be located
 * @c: character to be located
 *
 * Return: address of the character if existed, otherwise NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (0);
}
