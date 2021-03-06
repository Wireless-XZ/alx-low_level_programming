#include "main.h"

/**
 * modulos - checks for remainder after division
 * @num: the divisor
 * @c: the number
 *
 * Return: 0 if there is remainder, 1 if otherwise
 */

int modulos(int num, int c)
{
	if (num == c)
		return (1);
	if (!(c % num))
		return (0);
	return (modulos(num + 1, c));
}

/**
 * is_prime_number - checks if a number is a prime number
 * @n: The number to be checked
 *
 * Return: 1 if prime, 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (modulos(2, n));
}
