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
	hash_node_t *holder;
	unsigned long int index = hash_djb2((const unsigned char *) key) % ht->size;

	if (ht == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = malloc(sizeof(hash_node_t));
		if (ht->array[index] == NULL)
			return (0);
		ht->array[index]->key = strdup(key);
		if (ht->array[index]->key == NULL)
			return (0);
		ht->array[index]->value = strdup(value);
		if (ht->array[index]->value)
			return (0);
		ht->array[index]->next = NULL;
	}
	else
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			ht->array[index]->value = strdup(value);
		else
		{
			if (ht->array[index]->next == NULL)
			{
				ht->array[index]->next = malloc(sizeof(hash_node_t));
				if (ht->array[index]->next == NULL)
					return (0);
				ht->array[index]->next->key = strdup(key);
				if (ht->array[index]->next->key == NULL)
					return (0);
				ht->array[index]->next->value = strdup(value);
				if (ht->array[index]->next->value == NULL)
					return (0);
				ht->array[index]->next->next = NULL;
			}
			else
			{
				holder = malloc(sizeof(hash_node_t));
				if (holder == NULL)
					return (0);
				holder->key = strdup(key);
				if (holder == NULL)
					return (0);
				holder->value = strdup(value);
				if (holder == NULL)
					return (0);
				holder->next = ht->array[index]->next;
				ht->array[index]->next = holder;
			}
		}
	}

	return (1);
}
