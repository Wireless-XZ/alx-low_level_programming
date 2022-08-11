#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to linked list pointer
 * @str: string
 *
 * Return: address of new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new;

	for (i = 0; str[i]; i++)
	{
		;
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;
	return (new);
}
