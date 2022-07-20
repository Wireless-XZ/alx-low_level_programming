#include "main.h"

/**
 * _puts_recursion - prints a string followed by a newline
 * @s: String
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i])
	{
		_putchar(s[i]);
		i++;
		_puts_recursion(s + i);
	}
	else
		_putchar('\n');
}
