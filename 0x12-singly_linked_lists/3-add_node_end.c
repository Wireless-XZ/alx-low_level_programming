#include "lists.h"

/**
 * add_node_end - adds a node at the end of a linked list
 * @head: head pointer
 * @str: string
 *
 * Return: address to the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	int i;


	for (i = 0; str[i]; i++)
	{
		;
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		list_t *last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (new);
}
