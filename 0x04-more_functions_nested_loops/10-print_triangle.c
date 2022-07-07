#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the to be printed
 *
 * Return: void
 */
void print_triangle(int size)
{
	int n;
	int x;
	int count;

	size = size;
	count = 0;
	while (size > 0)
	{
		n = 0;
		x = 0;
		++count;
		while (size > n)
		{
			_putchar(' ');
			++n;
			while (size == n && x < count)
			{
				_putchar('#');
				x++;
			}
		}
		if (size != 1)
			_putchar('\n');
		--size;
	}

	if (size <= 0)
		_putchar('\n');
}
