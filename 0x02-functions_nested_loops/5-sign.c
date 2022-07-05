#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number
 *
 * Return: 1 if > 0, 0 if 0 and -1 of < 0
 */
int print_sign(int n)
{
	int result;

	if (n > 48)
	{
		_putchar('+');
		result = 1;
	}

	else if (n == 0)
	{
		_putchar('0');
		result = 0;
	}

	else if (n < 48)
	{
		_putchar('-');
		result = -1;
	}

	return (result);
}
