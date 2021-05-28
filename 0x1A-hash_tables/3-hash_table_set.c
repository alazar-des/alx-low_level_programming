#include <stdlib.h>
#include "hash_tables.h"

/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: if s1 > s2 return positive, if s1 < s2 negative, otherwise 0
 */
int _strcmp(char *s1, const char *s2)
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
 * _strlen - return length of string
 * @str: string pointer
 *
 * Return: length of string
 */
size_t _strlen(const char *str)
{
	size_t count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

/**
 * _strdup - duplicate string
 * @src: string to be duplicated
 *
 * Return: duplicated pointer in success, otherwise NULL
 */
char *_strdup(const char *src)
{
	size_t size, i;
	char *dest;

	size = _strlen(src);
	dest = malloc(size + 1);
	if (dest == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * add_node - add node at the begining of linked list
 * @key: key string data of the node
 * @value: value associated with the key
 *
 * Return: pointer to the created node in success, otherwise NULL
 */
hash_node_t *add_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);
	if (_strlen(key) == 0 || key == NULL)
	{
		free(new);
		return (NULL);
	}
	new->key = _strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (NULL);
	}
	new->value = _strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (NULL);
	}
	return (new);
}

/**
 * hash_table_set - insert data to a hash table
 * @ht: pointer to the hash table structure
 * @key: key of data
 * @value: value associated with the data
 *
 * Return: 1 on success 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;

	if (ht == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		new = add_node(key, value);
		if (new == NULL)
			return (0);
		new->next = NULL;
		ht->array[index] = new;
	}
	else
	{
		if (_strcmp(ht->array[index]->key, key) != 0)
		{
			new = add_node(key, value);
			if (new == NULL)
				return (0);
			new->next = ht->array[index];
			ht->array[index] = new;
		}
		else
		{
			free(ht->array[index]->value);
			ht->array[index]->value = _strdup(value);
			if (ht->array[index]->value == NULL)
				return (0);
		}
	}
	return (1);
}
