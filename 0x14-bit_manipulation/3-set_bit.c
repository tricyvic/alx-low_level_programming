#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at given index
 * @n: sets no.
 * @index: i to set bit
 *
 * Return: returns 1 if success, -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}

