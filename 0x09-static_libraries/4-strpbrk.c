/**
 * _strpbrk - return the first character apper in accept string
 * @s: string to be searched
 * @accept: a string that contains the character to be searched
 *
 * Return: a pointer to the first character appiered
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (&s[i]);
			j++;
		}
		i++;
	}

	return (0);
}
