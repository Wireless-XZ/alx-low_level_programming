#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to be checked
 *
 * Return: 1 if character is lowercase otherwise 0
 */
int _islower(int c)
{
	int result;

	if (c >= 97 && c <= 122)
		result = 1;
	else
		result = 0;

	return (result);
}
