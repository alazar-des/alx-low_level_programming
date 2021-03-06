/**
 * _strspn - a function returns the index of the first
 * character in string s that doesn't match any character
 * in the string accept
 * @s: the string to be searched
 * @accept: the characters that should only contained in s
 *
 * Return: the index of the character that is not contained
 * in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int exist;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		exist = 0;
		while (accept[j] != '\n')
		{
			if (s[i] == accept[j])
			{
				exist = 1;
				break;
			}
			j++;
		}
		if (!exist)
			return (i);
		j = 0;
		i++;
	}

	return (i);
}
