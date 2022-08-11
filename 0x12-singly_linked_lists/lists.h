#ifndef _LIST_H_
#define _LIST_H_

typedef struct node * nodeptr;

struct node{
	char *str;
	int len;
	nodeptr next;
};

typedef struct node list_t;

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
size_t print_list(const list_t *h);

#endif /* #define _LIST_H_ */
