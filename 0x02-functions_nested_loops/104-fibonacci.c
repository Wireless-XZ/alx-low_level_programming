#include <stdio.h>

/**
 * main - contains the body of the code
 *
 * Description: prints fibonacci sequence between 1 - 50
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a, b, c, x, k;

	a = 1;
	b = 2;
	c = a + b;
	k = 0;

	printf("%lu, %lu, ", a, b);

	for (x = 3; x <= 98; ++x)
	{
		printf("%lu", c);
		a = b;
		b = c;
		c = a + b;
		if (x != 98)
			printf(", ");
	}

	printf("\n");

	return (0);
}
