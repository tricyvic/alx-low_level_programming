#include "main.h"
#include <unistd.h>

/**
 * _putchar - character c to stdout
 * @c: To print
 *
 * Return: On success 1.
 * On error, -1 is returned, errno appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

