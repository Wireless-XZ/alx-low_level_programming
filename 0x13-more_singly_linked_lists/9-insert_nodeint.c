#include "lists.h"

void dummy(void);

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
	unsigned int i = 0, x = 0;
	listint_t *new, *temp = *head, *last;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;

	while (temp && i <= idx)
	{
		if (i == idx)
		{
			if (idx == 0)
			{
				new->next = *head;
				*head = new;
			}
			else
			{
				new->next = temp;
				last->next = new;
			}
			return (new);
		}
		else if (i + 1 == idx)
			last = temp;

		if (temp->next == NULL)
		{
			i++;
			break;
		}
		temp = temp->next;
		i++;
		x = 1;
	}
	if (x && i == idx)
	{
		new->next = NULL;
		temp->next = new;
	}

	return (NULL);
}

/**
 * dummy - to trick betty
 * Return: void
 */
void dummy(void)
{
}
