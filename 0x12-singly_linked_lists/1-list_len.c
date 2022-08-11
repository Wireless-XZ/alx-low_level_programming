#include "lists.h"

/**
 * list_len - gets the number of elements in a linked list
 * @h: pointer to the linked list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
