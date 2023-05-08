#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print and prints to POSIX standard output.
 * @filename: text file being read.
 * @letters: number of letters to be read and print.
 * Return:X- actual number of letters it could read and print.
 * Return:0 when write fails or does not write the expected amount of bytes or filename cannot be opened or read or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t X;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	X = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (X);
}
