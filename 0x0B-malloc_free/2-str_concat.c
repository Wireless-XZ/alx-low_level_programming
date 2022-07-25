#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: concatenated string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, j, k, l;

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	s3 = malloc(sizeof(char) * i);
	if (s3 == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s3[k] = s1[k];
	for (l = 0; l <= j; l++)
	{
		if (l == j)
			s3[k] = '\0';
		s3[k] = s2[l];
		k++;
	}
	return (s3);
}
