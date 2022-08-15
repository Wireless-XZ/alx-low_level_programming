#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of listint_t list
 * @head: pointer to head node
 * @n: int member of the list
 *
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
