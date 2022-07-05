#include "main.h"

/**
 * jack_bauer - Prints every minute from 00:00 to 23:59
 *
 * Return: Returns nothing
 */
void jack_bauer(void)
{
	int a, b, c, d, w, x, y, z;
	for (a = 48; a <= 49; ++a)
	{
       		for (b = 48; b <= 57; ++b)
		{
	       		for (c = 48; c <= 53; ++c)
			{
		       		for (d = 48; d <= 57; ++d)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');

				}
			}
		}
	}

	for (w = 50; w < 51; ++w)
	{
		for (x = 48; x <= 51; ++x)
		{
			for (y = 48; y <= 53; ++y)
			{
				for (z = 48; z <= 57; ++z)
				{
					_putchar(w);
					_putchar(x);
					_putchar(':');
					_putchar(y);
					_putchar(z);
					_putchar('\n');
				}
			}
		}
	}
}
