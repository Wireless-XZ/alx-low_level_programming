#include "main.h"

/**
 * print_diagonal - prints a straight line
 * @n: Number of / to be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int count;
	int x;

	count = 0;
	while (n > 0)
	{
		x = 0;
		count += 1;
		_putchar('\\');
		if (n != 1)
			_putchar('\n');
		n -= 1;
		while (n > 0 && x < count)
		{
			_putchar(' ');
			x++;
		}
	}

	if (n <= 0)
		_putchar('\n');

	/*_putchar('\n');*/
}
