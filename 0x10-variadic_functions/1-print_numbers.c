#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers
 * @separator: the string to be printed between numbers
 * @n: number of inteegrs to be passed into the function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d", va_arg(num, int));
			if (separator)
				printf("%s", separator);
		}
		else
			printf("%d\n", va_arg(num, int));
	}
	va_end(num);
}
