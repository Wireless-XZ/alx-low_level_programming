#include "main.h"

/**
 * _cp - copies the content of a file to another
 * @file_from: file to copy from
 * @file_to: file to copy to
 *
 */

void _cp(char *file_from, char *file_to)
{
	int from, to, close_to, close_from, len;
	char buffer[1024];

	to = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	from = open(file_from, O_RDONLY);
	if (from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	len = read(from, buffer, 1024);
	close_from = close(from);
	if (close_from == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", from);
		exit(100);
	}

	write(to, buffer, len);
	close_to = close(to);
	if (close_to == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", to);
		exit(100);
	}
}

/**
 * main - Contains the main body of the function
 * @argc: Number of arguments passed to CLI
 * @argv: Pointer to argument strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to/n");
		exit(97);
	}
	_cp(argv[1], argv[2]);

	return (0);
}
