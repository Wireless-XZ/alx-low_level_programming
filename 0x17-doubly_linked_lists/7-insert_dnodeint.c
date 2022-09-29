#include "lists.h"

void lol(void);

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head node
 * @idx: position to insert node
 * @n: value of node
 *
 * Return: address of th new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *dummy = *h, *new;
	unsigned int i;

	if (*h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	for (i = 0; dummy; i++)
	{
		if (i == idx)
		{
			new->prev = dummy->prev;
			new->next = dummy;
			if (dummy->prev)
				(dummy->prev)->next = new;
			if (idx == 0)
				*h = new;
			return (new);
		}
		/**
		 *if (dummy->next == NULL)
		 *{
		 *	if (i + 1 == idx)
		 *	{
		 *		dummy->next = new;
		 *		new->prev = dummy;
		 *		return (new);
		 *	}
		 *}
		 */
		dummy = dummy->next;
	}
	return (NULL);
}

/**
 * lol - to trick betty
 */
void lol(void)
{
}
