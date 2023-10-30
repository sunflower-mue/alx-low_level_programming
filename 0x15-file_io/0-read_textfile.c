#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to file.
 * @letters: number of letters it should read and print.
 *
 * Return: returns the actual number of letters it could read and print.
 * 0 (File name cannot open) (File name is NULL)
 * if write fails or does not write the expected amount of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, written;
	char *buffer;

	if (!filename)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);

	fd = open(filename, O_RDONLY);
	rd = read(fd, buffer, letters);
	written = write(STDOUT_FILENO, buffer, rd);

	if (fd == -1 || rd == -1 || written == -1 || written != rd)
	{
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (written);
}
