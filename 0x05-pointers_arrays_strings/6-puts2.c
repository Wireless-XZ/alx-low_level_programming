#include "main.h"

/**
 * puts2 - prints evey character at step 2
 * @str: the character
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
