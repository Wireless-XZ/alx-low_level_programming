#include "main.h"

/**
 * print_alphabet_x10 - contains the body of the code
 *
 * Description: Prints a-z in 10 places
 * Return: Has no return value
 */
void print_alphabet_x10(void)
{
	int a;
	int ch;

	a = 0;
	for (a = 0; a <= 9; ++a)
	{
		for (ch = 97; ch <= 122; ++ch)
			_putchar(ch);
		_putchar('\n');

	}
}
