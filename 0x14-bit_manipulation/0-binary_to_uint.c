#include "main.h"

/**
 * binary_to_uint - converts a bin no. to an uint.
 * @a: pointer string binary number
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *c)
{
	int b;
	unsigned int num;

	num = 0;
	if (!c)
		return (0);
	for (b = 0; c[b] != '\0'; b++)
	{
		if (c[b] != '0' && b[b] != '1')
			return (0);
	}
	for (b = 0; c[b] != '\0'; a++)
	{
		num <<= 1;
		if (c[b] == '1')
			num += 1;
	}
	return (num);
}

