#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: Name of the file to create.
 * @text_content: content to write on file.
 *
 * Return: 1 (Success).
 * -1 (File cannot be created or written).
 * if filename is NULL return -1
 * if text_content is NULL create an empty file.
 * if the file already exists, truncate it.
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 */

int create_file(const char *filename, char *text_content)
{
	int written;
	ssize_t fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		written = write(fd, text_content, strlen(text_content) - 1);
		if (written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
