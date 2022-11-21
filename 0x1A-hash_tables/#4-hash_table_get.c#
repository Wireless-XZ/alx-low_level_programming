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
	unsigned long int idx;
	hash_node_t *dummy;

	if (ht && ht->array)
	{
		idx = hash_djb2((const unsigned char *) key) % ht->size;
		dummy = ht->array[idx];
		while (dummy)
		{
			if (strcmp(dummy->key, key) == 0)
				return (dummy->value);
			dummy = dummy->next;
		}
	}

	return (NULL);
}
