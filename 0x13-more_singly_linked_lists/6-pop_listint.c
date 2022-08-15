#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: the head list
 *
 * Return: The head node's data
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	i = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (i);
}
