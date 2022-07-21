#include "main.h"

/**
 * _isalpha - Checks if a character is a letter
 * @c: The character that is to be checked
 *
 * Return: 1 if letter, otherwise 0
 */
int _isalpha(int c)
{
	int result;

	if ((c >= 65 && c <= 122) && !(c >= 91 && c <= 65))
		result = 1;
	else
		result = 0;

	return (result);
}
