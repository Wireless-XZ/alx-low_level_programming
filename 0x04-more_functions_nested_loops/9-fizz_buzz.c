#include <stdio.h>

/**
 * main - prints 1 to 100
 *
 * Description: multiples of 3 (Fizz), 5 (Buzz), 3&5 (FizzBuzz)
 * Return: Always 0 if code runs successfully
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; ++i)
	{
		if (i != 100)
		{
			if (i % 3 == 0)
			{
				printf("Fizz ");
			}
			else if (i % 5 == 0)
			{
				printf("Buzz ");
			}
			else if ((i % 3 == 0) && (i % 5 == 0))
			{
				printf("FizzBuzz ");
			}
			else
				printf("%d ", i);
		}
		else
			printf("Buzz \n");
	}
	return (0);
}
