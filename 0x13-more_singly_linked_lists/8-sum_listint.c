#include "lists.h"

/**
 * sum_listint - returns the sum of all data of a listint_t lunked list
 * @head: head node
 *
 * Return: sum of all data in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
