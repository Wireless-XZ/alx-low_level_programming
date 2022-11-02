#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: the size of the array
 *
 * Return: the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = calloc(size, sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	return (hash_table);
}
