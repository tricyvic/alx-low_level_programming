#include "main.h"

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
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}

