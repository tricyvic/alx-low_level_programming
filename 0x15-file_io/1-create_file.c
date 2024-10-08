#include "main.h"

/**
 * create_file - Creates a new file or truncates an existing one.
 * @filename: Pointer to the name of the file to be created.
 * @text_content: Pointer to the string to be written into the file.
 *
 * Return: -1 if the function fails.
 *         1 on success.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(fd, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}

