#include "main.h"
/**
 * multiply - multiplies an integer with itself
 * @num: The integer
 * @c: A number
 *
 * Description: checks if num * num == c
 * Return: num if num * num == c, otherwise -1
 */

int multiply(int num, int c)
{
	if (num * num == c)
		return (num);
	if (num * num > c)
		return (-1);
	return (multiply(num + 1, c));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The number
 *
 * Return: The square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (multiply(1, n));
}
