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
			new->next = NULL;
			if (idx != 0)
			{
				new->next = temp;
				last->next = new;
			}
			else
				new->next = temp;
			return (new);
		}
		else if (i + 1 == idx)
			last = temp;

		temp = temp->next;
		i++;
	}
	return (NULL);
}
