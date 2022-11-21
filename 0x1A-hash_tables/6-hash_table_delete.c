#include "hash_tables.h"

/**
 * hash_table_delete -  a function that deletes a hash table.
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *dummy, *holder;
	unsigned long int i;

	if (ht && ht->array)
	{
		for (i = 0; i < ht->size; i++)
		{
			dummy = ht->array[i];
			while(dummy)
			{
				holder = dummy->next;
				free(dummy->key);
				free(dummy->value);
				free(dummy);
				dummy = holder;
			}
		}
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
				free(ht->array[i]);
		}
		free(ht->array);
	}
}
