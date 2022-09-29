#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at a given index
 * @head: head node
 * @index: index position of the node
 *
 * Return: node at index index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;
	dlistint_t *dummy = head;

	for (x = 0; dummy->next; x++)
	{
		if (x == index)
			return (dummy);
		dummy = dummy->next;
	}
	return (NULL);
}
