#include "lists.h"

/**
 * print_list - prints all the elements of a linked list.
 * @h: The linked list
 *
 * Return: The minber of nodes int the list
 */
size_t print_list(const list_t *h)
{
	int nodeS = 0;

	while (h)
	{
		if (!(h->str))
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		nodeS++;
	}
	return (nodeS);
}
