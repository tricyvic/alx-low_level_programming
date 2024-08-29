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
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

