/**
 * _sizeof - calculate size of string
 * @str: input string
 *
 * Return: size of string
 */
int _sizeof(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	return (len);
}

/**
 * _strncpy - copy n uumber of characters from src to destination
 * @dest: destination string
 * @src: source of string
 * @n: number of characters to be copied
 *
 * Return: destination pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	int len;
	int i;

	len = _sizeof(src);
	if (n <= len)
	{
		while (n > 0)
		{
			*dest = *src;
			dest++;
			src++;
			n--;
		}
	}
	else
	{
		i = len;
		while (i > 0)
		{
			*dest = *src;
			dest++;
			src++;
			i--;
		}
		while (len < n)
		{
			*dest = '\0';
			dest++;
			len++;
		}
	}
	return (p);
}
