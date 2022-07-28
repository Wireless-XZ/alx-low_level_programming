#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: from min'th element
 * @max: to max'th element
 *
 * Return: pointer to the newly created string
 */

int *array_range(int min, int max)
{
	int *s, i;

	if (min > max)
		return (NULL);

	s = malloc(sizeof(*s) * (max - min + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++, min++)
		s[i] = min;

	return (s);
}
