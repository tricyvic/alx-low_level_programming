#include "main.h"

/**
 * binary_to_uint - converts binary no. to u_int
 * @b: points to a binary number string
 *
 * Return: returns unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		num <<= 1;
		if (b[x] == '1')
			num += 1;
	}
	return (num);
}

