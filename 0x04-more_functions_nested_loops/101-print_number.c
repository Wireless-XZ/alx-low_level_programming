#include "main.h"

/**
 * print_number - prints an integer
 * @n: The integer
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int holder = 1, dummy = n, x;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
		dummy = n;
	}

	while (dummy > 9)
	{
		dummy = dummy / 10;
		holder = holder * 10;
	}

	while (holder != 0)
	{
		x = n / holder;
		n = n % holder;
		holder = holder / 10;
		_putchar('0' + x);
	}
}
