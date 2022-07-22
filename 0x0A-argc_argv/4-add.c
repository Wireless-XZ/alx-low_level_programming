#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: pointer to argument string
 *
 * Return: 0 if number , 1 if otherwise
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc)
	{
		for (i = 1; i < argc; i++)
		{
			if (!(atoi(argv[i])))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");

	return (0);
}
