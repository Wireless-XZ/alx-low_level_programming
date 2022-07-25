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

	if (s1 == NULL)
		i = 0;
	else
		for (i = 0; s1[i]; i++)
			;
	if (s2 == NULL)
		j = 0;
	else
		for (j = 0; s2[j]; j++)
			;
	s3 = malloc(sizeof(char) * (i + j + 1));
	if (s3 == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s3[k] = s1[k];
	for (l = 0; l < j; l++)
	{
		s3[k] = s2[l];
		k++;
	}
	s3[i + j] = '\0';
	return (s3);
}
