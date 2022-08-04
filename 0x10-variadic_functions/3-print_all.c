#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that prints anything
 * @format: list of types
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	int i= 0;
	char *str;

	va_start(valist, format);

	while (i < 4)
	{
		switch (*(format + i))
		{
		case 'c':
			printf("%c, ", va_arg(valist, int));
			break;
		case 'i':
			printf("%d, ", va_arg(valist, int));
			break;
		case 'f':
			printf("%f, ", va_arg(valist, double));
			break;
		case 's':
			str = va_arg(valist, char *);
			str ? printf("%s\n", str) : printf("(nil)");
			break;
		default:
			break;
		}
		i++;

	}
	va_end(valist);
}
