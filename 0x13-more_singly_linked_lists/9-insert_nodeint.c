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
	listint_t *new, *last, *temp = *head;


	while (temp && i <= idx)
	{
		if (i == idx)
		{
			new = malloc(sizeof(listint_t));
			if (!new)
				return (NULL);
			new->n = n;
			new->next = temp;
			if (idx != 0)
				last->next = new;
			return (new);
		}
		else if (i + 1 == idx)
			last = temp;

		temp = temp->next;
		i++;
	}
	return (NULL);
}
