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
	char *p = str2;

	while (*(str1) != '\0')
	{
		if (*str1 != *p)
			return (0);
		p++;		
		str1++;
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
	char *p;

	while (*haystack != '\0')
	{
		if (*haystack == needle[0])
		{
			p = _cmpstr(needle, haystack);
			if (p)
				return (p);
		}
		haystack++;
	}

	return (NULL);
}
