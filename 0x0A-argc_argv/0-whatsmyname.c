#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc: number of arguements in the program
 * @argv: pointer to string of argument
 *
 * Return: Always 0
 */

int main(int argc, char* argv[])
{
	while (argc)
	{
		argc--;
		if (!argc)
			printf("%s\n", argv[argc]);
	}
	return (0);
}
