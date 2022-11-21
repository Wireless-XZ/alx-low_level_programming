#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key you are looking for
 *
 * Return: the value for the key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;

	if (ht && ht->array)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] && strcmp(ht->array[i]->key, key) == 0)
				return (ht->array[i]->value);
		}
	}

	return (NULL);
}
