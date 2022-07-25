#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of character
 * @size: size of the array
 * @c: Character to be initialized with the array
 *
 * Return: Pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(*s) * size);
	if (size == 0 || s == NULL)
		return (0);
	for (i = 0; i < size; i++)
		*(s + i) = c;
	return (s);
}
