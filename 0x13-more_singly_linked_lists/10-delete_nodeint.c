#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: pointer to head node
 * @index: the index to perform the deletion
 *
 * Return: 1 if success, -1 if otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *delete, *last;
	unsigned int i = 0;

	while (temp && i <= index)
	{
		if (i == index)
		{
			if (index == 0)
			{
				delete = *head;
				*head = (*head)->next;
				free(delete);
			}
			else
			{
				delete = temp;
				temp = temp->next;
				free(delete);
				last->next = temp;
			}
			return (1);
		}
		else if (i + 1 == index)
			last = temp;
		temp = temp->next;
		i++;
	}
	return (-1);
}
