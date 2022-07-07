#include "main.h"

/**
 * print_diagonal - prints a straight line
 * @n: Number of / to be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int count;

	count = 1;
	while (n > 0)
	{
		_putchar('\\');
		_putchar('\n');
		--n;
		while (count > 0)
		{
			_putchar(' ');
			--count;
	}
	_putchar('\n');
}
