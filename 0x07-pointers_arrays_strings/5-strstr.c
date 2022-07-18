#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @needle: substring
 * @haystack: string *
 * Return: a pointer to needle in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, init;

	init = 1;
	j = i = 0;

	while (haystack[i] && init == 1)
	{
		while (haystack[i] == needle[j])
		{
			if (haystack[i] && needle[j])
			{
				++j;
				++i;
				init = 0;
			}
			else
				break;
		}
		if (init == 1)
			++i;
	}
	if (!(needle[j]))
		return (haystack + (i - j));

	return (0);
}
