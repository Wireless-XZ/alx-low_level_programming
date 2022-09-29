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

	if (head == NULL)
		return (NULL);
	else if (index == 0)
		return (head);
	for (x = 0; head->next; x++)
	{
		if (x == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
