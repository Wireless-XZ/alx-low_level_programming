#include "lists.h"

/**
 * print_listint - prints all elements of listint_t list
 * @h: head node of the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
