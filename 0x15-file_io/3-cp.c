#include "main.h"

/**
 * buff - memory allocation for buffer (1024).
 * @file: name of file to create buffer from.
 *
 * Return: pointer to buffer -type char.
 */

char *buff(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * BUFFER_SIZE);

	if (!buffer)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_f - colse a file.
 * @fd: the opened file to be closed.
 */

void close_f(int fd)
{
	int cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies content from one file to the other.
 * @argc: Number of args.
 * @argv: Array of pointers, pointing to args.
 *
 * Return: (0) Always.
 *
 * Cases: 97 -arg count is not correct.
 * 98 - cannot read file.
 * 99 - fd cannot be created or written,
 * 100 - file cannot be close.
 */
int main(int argc, char *argv[])
{
	int r, w, source, dest;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	source = open(argv[1], O_RDONLY);
	buffer = buff(argv[2]);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (r > 0)
	{
		if (source == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(dest, buffer, r);

		if (dest == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(source, buffer, BUFFER_SIZE);
		dest = open(argv[2], O_WRONLY | O_APPEND);
	}

	free(buffer);
	close_f(source);
	close_f(dest);
	return (0);
}
