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

	if (ht != NULL)
	{
		if (ht->array != NULL)
		{
			printf("{");
			for (unsigned long int i = 0; i < ht->size; i++)
			{
				while (ht->array[i] != NULL)
				{
					if (flag)
						printf(", ");
					printf("'%s': '%s'", ht->array[i]->key,
					       ht->array[i]->value);
					ht->array[i] = ht->array[i]->next;
					flag = 1;
				}
			}
			printf("}\n");
		}
	}
}
