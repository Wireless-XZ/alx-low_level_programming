#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: pointer to argument string
 *
 * Return: 0 if argc == 2, 1 if otherwise
 */

int main(int argc, char *argv[])
{
	int i;
	int multiply = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
			multiply *= atoi(argv[i]);
		printf("%d\n", multiply);
		return (0);
	}
	printf("Error\n");
	return (1);
}
