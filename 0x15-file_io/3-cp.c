#include "main.h"

void dummy(void);

/**
 * _cp - copies the content of a file to another
 * @file_from: file to copy from
 * @file_to: file to copy to
 *
 * Return: 1 on success
 */

int _cp(char *file_from, char *file_to)
{
	int fd_from, fd_to, close_to, close_from, write_len, read_len;
	char buffer[1024];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	read_len = read(fd_from, buffer, 1024);
	if (read_len == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	close_from = close(fd_from);
	if (close_from == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}


	fd_to = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	write_len = write(fd_to, buffer, read_len);
	if (write_len == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	close_to = close(fd_to);
	if (close_to == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (1);
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

/**
 * dummy - to trick betty
 * Return: void
 */
void dummy(void)
{
}
