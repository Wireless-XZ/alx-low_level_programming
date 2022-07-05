#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * Return: Always 1 if character is lowercase
 */
int _islower(int c)
{
	int result;

	if (c >= 65 && c <= 90)
		result = 0;
	else
		result = 1;

	return (result);
}
