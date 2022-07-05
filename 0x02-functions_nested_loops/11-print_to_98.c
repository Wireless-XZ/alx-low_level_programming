#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints a number to 98
 * @n: The number
 *
 * Return: Returns nothing
 */
void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d", n);
		printf(",");
		printf(" ");
		--n;
	}

	while (n < 98)
	{
		printf("%d", n);
		printf(",");
		printf(" ");
		++n;
	}

	if (n == 98)
	{
		printf("%d", n);
		printf("\n");
	}
}
