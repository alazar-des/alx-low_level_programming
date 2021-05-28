#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: hash table size
 *
 * Return: the address of the hash table if successful, otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (size <= 0)
		return (NULL);
	ht = calloc(1, sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->array = calloc(size, sizeof(hash_node_t *));
	if (ht->array == NULL)
		return (NULL);
	ht->size = size;
	return (ht);
}
