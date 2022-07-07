#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: Character
 * Return: 1 if uppercase, otherwise 0.
 */
int _isupper(int c)
{
	int result;

	if (c >= 0 && c <= 90)
	{
		if (!(c >= 33 && c <= 64))
		{
			result = 1;
		}
	}
	else
		result = 0;

	return (result);
}
