#include "main.h"
#include <stdlib.h>

/**
 * _strdup - creates a copy of a string
 * @str: The string to be copied
 *
 * Return: duplicate of str
 */

char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int j;
	char *str_cp;

	while (str[i])
		i++;
	str_cp = malloc(sizeof(*str) * i);
	if (str == NULL || str_cp == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		str_cp[j] = str[j];
	return (str_cp);
}
