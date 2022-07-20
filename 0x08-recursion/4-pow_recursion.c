#include "main.h"

/**
 * _pow_recursion - raises a num to the power of another num
 * @x: number
 * @y: power
 *
 * Return: x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
