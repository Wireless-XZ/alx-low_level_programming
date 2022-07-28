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
	int *s, i, x;

	if (min > max)
		return (NULL);
	x = max - min + 1;

	s = malloc(sizeof(*s) * x);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < x; i++, min++)
		s[i] = min;

	return (s);
}
