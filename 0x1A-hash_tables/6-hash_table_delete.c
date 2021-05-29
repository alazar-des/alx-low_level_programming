#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - delete hash table
 * @ht: hash table pointer
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *next;
	unsigned long int i;

	if (ht != NULL)
	{
		if (ht->array != NULL)
		{
			for (i = 0; i < ht->size; i++)
			{
				while (ht->array[i] != NULL)
				{
					next = ht->array[i]->next;
					if (ht->array[i]->key != NULL)
					{
						free(ht->array[i]->key);
						ht->array[i]->key = NULL;
					}
					if (ht->array[i]->value != NULL)
					{
						free(ht->array[i]->value);
						ht->array[i]->value = NULL;
					}
					free(ht->array[i]);
					ht->array[i] = NULL;
					ht->array[i] = next;
				}
			}
			free(ht->array);
			ht->array = NULL;
		}
		free(ht);
		ht = NULL;
	}
}
