#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and outputs it to the standard output.
 * @filename: Name of the file to read from.
 * @letters: Number of letters (bytes) to read and print.
 *
 * Return: The number of bytes actually read and printed.
 *         Returns 0 if the function fails or if filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

