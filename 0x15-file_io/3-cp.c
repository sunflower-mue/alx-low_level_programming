#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * _exitp - prints error and terminate process with code.
 * @code: the error code.
 * @filename: name of the file.
 * @fd: file descriptor.
 */

void _exitp(int code, const char *filename, int fd)
{
	switch (code)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
			exit(98);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", filename);
			exit(99);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(100);
		default:
		exit(code);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: number of args.
 * @argv: array of args.
 *
 * Return: 0 (Successful).
 */
int main(int argc, char *argv[])
{
	ssize_t fd_from, fd_to, r;
	const char *file_from, *file_to;
	char buffer[1024];

	if (argc != 3)
		_exitp(97, NULL, 0);

	file_from = argv[1];
	file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		_exitp(98, file_from, 0);
	}
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		_exitp(99, file_to, 0);
	}
	while ((r = read(fd_from, buffer, 1024)) > 0)
	{
		if (write(fd_to, buffer, r) != r)
			_exitp(99, file_to, fd_to);
	}
	if (r == -1)
	{
		_exitp(99, file_to, fd_to);
	}
	if (close(fd_from) == -1)
	{
		_exitp(100, NULL, fd_from);
	}
	if (close(fd_to) == -1)
	{
		_exitp(100, NULL, fd_to);
	}

	return (0);
}
