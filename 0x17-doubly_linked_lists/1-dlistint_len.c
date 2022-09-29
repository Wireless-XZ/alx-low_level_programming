#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head node
 *
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *dummy = h;
	unsigned long int len;

	for (len = 0; dummy; len++)
		dummy = dummy->next;

	return (len);
}
