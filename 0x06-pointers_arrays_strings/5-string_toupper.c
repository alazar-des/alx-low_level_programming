/**
 * string_toupper - convert lowercase letters to uppercase
 * @str: string input
 *
 * Return: pointer to the string
 */
char *string_toupper(char *str)
{
	char *p = str;

	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
			*str -= 32;
		str++;
	}

	return (p);
}
