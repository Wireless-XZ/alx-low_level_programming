#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a linked list
 * @head: head node
 * @n: value of the element
 *
 * Return: address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *dummy = *head;


	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (dummy->next)
			dummy = dummy->next;
		dummy->next = new;
		new->prev = dummy;
	}
	return (new);
}
