#include <stdio.h>

/**
 * main - contains the body of the code
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int n = 612852475143, i;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % i == 0) && (i != n))
			n = n / i;
	}
	printf("%lu\n", n);

	return (0);
}
