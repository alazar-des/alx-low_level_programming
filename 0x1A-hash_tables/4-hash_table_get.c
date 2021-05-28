#include <stdlib.h>
#include "hash_tables.h"

/**
 * _strcmpg - compare two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: if s1 > s2 return positive, if s1 < s2 negative, otherwise 0
 */
int _strcmpg(char *s1, const char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 - *s2 != 0)
			return (*s1 - *s2);
		s1++;
		s2++;
	}

	return (0);
}

/**
 * hash_table_get - get value from hash table
 * @ht: hash table pointer
 * @key: the key to look for
 *
 * Return: value if key exists, otherwise NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (ht == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == 0)
		return (NULL);
	while (ht->array[index] != NULL)
	{
		if (_strcmpg(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);
		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
