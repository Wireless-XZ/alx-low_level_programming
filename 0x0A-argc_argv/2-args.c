#include <stdio.h>

/**
 * main - prints all arguments the CLI receives
 * @argc: number of arguments
 * @argv: pointer to argument string
 *
 * Description: prints the name of the program also
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
