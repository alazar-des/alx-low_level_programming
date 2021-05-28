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
	int flag = 0;
	hash_node_t *nxt;

	if (ht != NULL)
	{
		printf("{");
		for (unsigned long int i = 0; i < ht->size; i++)
		{
			nxt = ht->array[i];
			while (nxt != NULL)
			{
				if (flag)
					printf(", ");
				printf("'%s': '%s'", nxt->key,
				       nxt->value);
				nxt = nxt->next;
				flag = 1;
			}
		}
		printf("}\n");
	}
}
