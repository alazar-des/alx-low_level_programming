/**
 * rot13 - encode a string using rot13
 * @str: input string
 *
 * Return: string pointer
 */
char *rot13(char *str)
{
	char *p = str;

	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
			*str = ((*str - 65 + 13) % 26) + 65;
		else if (*str >= 97 && *str <= 122)
			*str = ((*str - 97 + 13) % 26) + 97;

		str++;
	}

	return (p);
}
