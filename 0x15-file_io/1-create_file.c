#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: name of the file to create.
 * @text_content: is a NULL terminated string to write to the file and
 *                if is NULL creates an empty string.
 *
 * Return: 1 on success else -1 on failure or if filename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int fd, X, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	X = write(fd, text_content, len);

	if (fd == -1 || X == -1)
		return (-1);

	close(fd);

	return (1);
}
