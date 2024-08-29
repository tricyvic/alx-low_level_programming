#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return: returns 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int x;
	char *b;

	x = 1;
	b = (char *)&x;
	return (*b);
}

