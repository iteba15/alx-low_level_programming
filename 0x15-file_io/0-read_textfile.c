#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read text file and prints POSIX  standard output
 * @filename: text file to be read
 * @letters: numbers of letters to be printed and read
 *
 * Return: Actual number of letters it could read and print, or 0 on failure
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
