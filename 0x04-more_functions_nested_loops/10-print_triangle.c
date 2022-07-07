#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the to be printed
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; ++j)
			_putchar(' ');
		for (k = i + 1; k > 0; --k)
			_putchar(35);
		_putchar('\n');
	}
}
