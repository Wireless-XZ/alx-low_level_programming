#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * count - count the no. of elements in an array
 * @frmt: the array
 *
 * Return: no. of elements in frmt
 */

int count(const char * const frmt)
{
	int j = 0;

	while (frmt[j])
		j++;
	return (j);
}


/**
 * print_all - a function that prints anything
 * @format: list of types
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	int i = 0, x = 1;
	char *str;
	int n = count(format);

	va_start(valist, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int));
			break;
		case 'i':
			printf("%d", va_arg(valist, int));
			break;
		case 'f':
			printf("%f", va_arg(valist, double));
			break;
		case 's':
			str = va_arg(valist, char *);
			str ? printf("%s", str) : printf("(nil)");
			break;
		default:
			x = 0;
			break;
		}
		if (i < n - 1 && x)
			printf(", ");
		i++;
		x = 1;
	}
	printf("\n");
	va_end(valist);
}
