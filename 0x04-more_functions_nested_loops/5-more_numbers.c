#include "main.h"

/**
 * more_numbers - prints from 0-14, 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;
	int count;

	count = 0;
	j = 49;

	while (count >= 0 && count <= 5)
	{
		if (count != 6)
		{
			for (i = 48; i <= 57; ++i)
			{
				_putchar(i);
				if ((i == 57) || (count >= 1 && count <= 4))
				{
					_putchar(j);
					++count;
				}
				else if (i == 52 && count == 5)
					++count;
			}
		}
	}
}