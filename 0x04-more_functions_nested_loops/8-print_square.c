#include "main.h"

/**
 * print_square - prints a matrix of #
 * @size: row and column of the matrx=ix
 *
 * Return: void
 */
void print_square(int size)
{
	int x;
	int y;

	for (x = 0; x < size; ++x)
	{
		for (y = 0; y < size; ++y)
		{
			_putchar('#');
			if (y == (size - 1))
				_putchar('\n');
		}
	}
}
