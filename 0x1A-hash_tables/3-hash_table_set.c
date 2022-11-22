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
	unsigned long int idx;
	hash_node_t *new;

	if (strlen(key) == 0 || !key || !value || !ht)
		return (0);

	idx = hash_djb2((const unsigned char *) key) % ht->size;
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
		return (0);
	new->value = strdup(value);
	if (new->value == NULL)
		return (0);
	new->next = NULL;

	if (ht->array[idx])
	{
		if (strcmp(ht->array[idx]->key, key) == 0)
		{
			free(ht->array[idx]->value);
			ht->array[idx]->value = strdup(value);
			if (ht->array[idx]->value == NULL)
				return (0);
		}
		else
		{
			new->next = ht->array[idx];
			ht->array[idx] = new;
		}
	}
	else
		ht->array[idx] = new;

	return (1);
}
