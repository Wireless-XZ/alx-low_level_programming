#include <stdio.h>

/**
 * main - contains the body of the code
 *
 * Description: prints fibonacci sequence between 1 - 50
 * Return: Always 0
 */
int main(void)
{
	long long int a, b, c, x;

	a = 1;
	b = 2;
	c = a + b;

	printf("%lld, %lld, ", a, b);

	for (x = 3; x <= 50; ++x)
	{
		printf("%lld", c);
		a = b;
		b = c;
		c = a + b;
		if (x != 50)
			printf(", ");
	}
	printf("\n");

	return (0);
}
