#include "main.h"

/**
 * flip_bits - counts no. of bits to change
 * @n: 1st no.
 * @m: 2nd no.
 *
 * Return: changes the no. of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (x = 63; a >= 0; x--)
	{
		current = exclusive >> x;
		if (current & 1)
			countbit++;
	}

	return (countbit);
}

