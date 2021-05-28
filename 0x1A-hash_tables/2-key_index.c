#include "hash_tables.h"

/**
 * key_index - generate index from a given key using djb2 algorithm
 * @key: string use to generate hash value
 * @size: size of the hash table
 *
 * Return: hash value modulo size
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
