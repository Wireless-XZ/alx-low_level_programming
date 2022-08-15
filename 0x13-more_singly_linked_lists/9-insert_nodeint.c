#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head node
 * @idx: index where the new node should be inserted
 * @n: node data
 *
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *temp = *head;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;

	while (temp)
	{
		if (i + 1 == idx)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}

		temp = temp->next;
		i++;
	}
	free (new);

	return (NULL);
}
