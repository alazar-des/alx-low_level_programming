#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - print hash table into standard output
 * @ht: pointer to the hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *next;

	if (ht != NULL)
	{
		if (ht->array != NULL)
		{
			printf("{");
			for (unsigned long int i = 0; i < ht->size; i++)
			{
				next = ht->array[i];
				while (next != NULL)
				{
					printf(", ");
					printf("'%s': '%s'", next->key,
					       next->value);
					next = next->next;
				}
			}
			printf("}\n");
		}
	}
}
