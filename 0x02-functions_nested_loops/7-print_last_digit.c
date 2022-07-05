#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number
 *
 * Return: Returns the value of the last digit
 */
int print_last_digit(int n)
{
	int result;

	result = n % 10;

	if (result < 0)
		result = result * -1;

	_putchar(result + 48);

	return (result);
}
