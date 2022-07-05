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

	if (n < 0)
		result = (n * -1) % 10;
	else if (n >= 0)
		result = n % 10;

	return (result);
}
