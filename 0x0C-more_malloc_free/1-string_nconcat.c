#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: String 2
 * @n: Bytes
 *
 * Return: pointer to a new string s1 + s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i, j;

	if (s1 == NULL)
		i = 0;
	if (s2 == NULL)
		j = 0;
	if (n >= strlen(s2))
		s3 = malloc(sizeof(*s3) * (strlen(s1) + strlen(s2) + 2));
	else
		s3 = malloc(sizeof(*s3) * (strlen(s1) + n + 2));
	if (s3 == NULL)
	{
		free(s3);
		return (NULL);
	}
	for (i = 0; i < strlen(s1); i++)
		s3[i] = s1[i];
	if (n >= strlen(s2))
	{
		for (j = 0; j < strlen(s2); j++)
		{
			s3[i] = s2[j];
			i++;
		}
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			s3[i] = s2[j];
			i++;
		}
	}
	s3[i] = '\0';
	return (s3);
}
