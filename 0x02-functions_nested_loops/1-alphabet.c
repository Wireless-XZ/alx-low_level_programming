#include "main.h"

/**
 * print_alphabet - Contains the full body of the code
 *
 * Description: Prints th alphabet in lowercase
 * Return: Has no return value
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 97; ch <= 122; ++ch)
		_putchar(ch);
	_putchar('\n');
}
