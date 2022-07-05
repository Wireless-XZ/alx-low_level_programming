#include <stdio.h>

/**
 * main - contains the body of the code
 *
 * Description: Sums the multiples of 3 or 5 below 1024
 * Return: Always 0 if code run successfully
 */
int main(void)
{
	int n, sum;

	sum = 0;

	for (n = 1024; n > 0; --n)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			sum = sum + n;
	}

	printf("%d", sum);
	printf("\n");

	return (0);
}
