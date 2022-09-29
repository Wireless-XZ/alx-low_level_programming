#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *dummy = head;

	if (head)
	{
		while (head->next)
		{
			head = head->next;
			free(dummy);
			dummy = head;
		}
	}
	free(dummy);
}
