#include "main.h"

/**
 * _abs - Removes all negative sign from an integer
 * @c: The integer
 *
 * Return: Always a positive integer if code runs successfully
 */
int _abs(int c)
{
	int result;

	if (c < 0)
		result = (c * -1);
	else if (c >= 0)
		result = c;

	return (result);
}
