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
 * argstostr - concatinate all input arguments
 * @ac: number of input argments
 * @av: input argument array
 *
 * Return: concatinated string
 */
char *argstostr(int ac, char **av)
{
	char *str, *rstr;
	int sum, i;

	if (ac == 0 || av == NULL)
		return (NULL);
	sum = 0, i = 0;
	while (i < ac)
	{
		sum += _sizeof(av[i]);
		i++;
	}
	str = malloc(sum + ac + 1);
	if (str == NULL)
		return (NULL);
	rstr = str;
	i = 0;
	while (i < ac)
	{
		while (*av[i] != '\0')
		{
			*str = *av[i];
			av[i]++, str++;
		}
		*str = '\n';
		str++;
		i++;
	}
	*str = '\0';
	return (rstr);
}
