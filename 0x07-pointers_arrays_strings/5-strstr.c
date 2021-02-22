#include <stddef.h>

/**
 * _cmpstr - compare two strings if they are identical
 * @str1: first string
 * @str2: second string
 *
 * Return: if identical pointer to str2, otherwise 0
 */
char *_cmpstr(char *str1, char *str2)
{
	int i = 0;

	while (str1[i] != '\0')
	{
		if (str1[i] != str2[i])
			return (0);
		i++;
	}

	return (str2);
}

/**
 * _strstr - finds the first occurance of needle substring
 * in the haystack string
 * @haystack: the string to be scanned
 * @needle: the substring to be searched with-in the main string
 *
 * Return: the index of the first occurance in haystack string
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	char *p;

	i = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			p = _cmpstr(needle, &haystack[i]);
			if (p)
				return (p);
		}
		i++;
	}

	return (NULL);
}
