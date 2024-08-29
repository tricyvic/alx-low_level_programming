#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - sets the value bit to 0 at a given index
 * @n: a pointer unsigned long int n
 * @index: unsigned in index
 * Return: returns 1 if success, -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

