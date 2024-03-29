#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sums of all its parameters.
 * @n: const unsigned int
 * @...: Receives varying amount of arguments
 *
 * Return: sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int i;
	int sum = 0;

	if (n)
	{
		va_start(x, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(x, int);
		}
		va_end(x);

		return (sum);
	}
	return (0);
}
