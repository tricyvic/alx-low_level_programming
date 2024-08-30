#include "main.h"

/**
 * append_text_to_file - Appends a string to the end of a specified file.
 * @filename: Pointer to the name of the file.
 * @text_content: String to append to the file's end.
 *
 * Return: -1 if the function fails, filename is NULL,
 *         or the file does not exist, or write permissions are lacking.
 *         1 on success.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(fd, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}

