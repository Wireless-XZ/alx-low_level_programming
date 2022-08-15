#include "lists.h"

/**
 * listint_len - gets the number od elemets int listint_int list
 * @h: head node
 *
 * Return: number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
