/**
 * rot13 - encode a string using rot13
 * @str: input string
 *
 * Return: string pointer
 */
char *rot13(char *str)
{
	char *p = str;
	int i = 0;

	while (*str != '\0')
	{
		if ((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122))
		{
			*str = *str >= 65 && *str < 90 ? (((*str - 65 + 13) % 26) + 65) : ((*str - 97 + 13) % 26) + 97;
		}
		str++;
		while (i < 26)
			i++;
	}

	return (p);
}
