#ifndef _LIST_H_
#define _LIST_H_

/**
 * struct node - structure for linked list
 * @str: string data
 * @len: length of string data
 * @next: pointer to next element on the list
 */
typedef struct node
{
	char *str;
	int len;
	struct node *next;
} list_t;

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
size_t print_list(const list_t *h);

#endif /* #define _LIST_H_ */
