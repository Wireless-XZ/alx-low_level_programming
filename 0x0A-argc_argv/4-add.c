#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: pointer to argument string
 *
 * Return: 0 if number , 1 if otherwise
 */

int main(int argc, char *argv[])
{
	int a = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		a += atoi(argv[i]);
	}
	printf("%d\n", a);
	return (0);
}
