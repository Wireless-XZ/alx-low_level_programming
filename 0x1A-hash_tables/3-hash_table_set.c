#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 on success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = hash_djb2((const unsigned char *) key) % ht->size;

	if (ht == NULL)
		return (0);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = malloc(sizeof(hash_node_t));
		if (ht->array[index] == NULL)

			return (0);

		ht->array[index]->key = (char *) key;
		ht->array[index]->value = (char *) value;
		ht->array[index]->next = NULL;
	}
	else
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			ht->array[index]->value = (char *) value;
		else
		{
			ht->array[index]->next = malloc(sizeof(hash_node_t));
			if (ht->array[index]->next == NULL)
				return (0);

			ht->array[index]->next->key = (char *) key;
			ht->array[index]->next->value = (char *) value;
			ht->array[index]->next->next = NULL;
		}
	}

	return (1);
}