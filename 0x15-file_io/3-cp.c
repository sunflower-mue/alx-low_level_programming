#include "main.h"

/**
 * error_exit - exit code.
 * @message: message to print.
 * @exit_code: code.
 */

void error_exit(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(exit_code);
}

int main(int argc, char *argv[])
{
	int fd_source, fd_dest;
	const char *file_from, *file_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}
	file_from = argv[1];
	file_to = argv[2];

	fd_source = open(file_from, O_RDONLY);

	if (fd_source == -1)
	{
		error_exit("Can't read from file", 98);
	}

	fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fd_dest == -1)
	{
		error_exit("Can't write to file", 99);
	}

	bytes_read = read(fd_source, buffer, BUFFER_SIZE);
	written = write(fd_source, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		if (written == -1)
		{
			error_exit("Can't write to file", 99);
		}
	}

	if (bytes_read == -1)
	{
		error_exit("Can't read from file", 98);
	}

	if (close(fd_source) == -1)
	{
		error_exit("Can't close fd", 100);
	}

	if (close(fd_dest) == -1)
	{
		error_exit("Can't close fd", 100);
	}

	return (0);
}
