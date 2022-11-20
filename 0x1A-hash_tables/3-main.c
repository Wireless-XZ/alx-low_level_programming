#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	hash_node_t *dummy;
	int i, x;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "hetairas", "col_1");
	hash_table_set(ht, "mentioner", "col_2");
	for (i = 0; i < 1024; i++)
	{
		dummy = ht->array[i];
		x = 0;
		while (dummy)
		{
			printf("(%d) KEY: %s --- VALUE: %s\n", x++, dummy->key, dummy->value);
			dummy = dummy->next;
		}
	}
	return (EXIT_SUCCESS);
}
