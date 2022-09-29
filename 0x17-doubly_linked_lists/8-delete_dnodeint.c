#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node
 * @head: head node
 * @index: the index to delete
 *
 * Return: 1 on success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *dummy = *head;

	if (*head == NULL || head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(dummy);
		return (1);
	}
	for (i = 0; dummy; i++)
	{
		if (i == index)
		{
			if (dummy->next == NULL)
			{
				dummy->prev->next = NULL;
				free(dummy);
				return (1);
			}
			dummy->prev->next = dummy->next;
			dummy->next->prev = dummy->prev;
			free(dummy);
			return (1);
		}
		dummy = dummy->next;
	}
	return (-1);
}
