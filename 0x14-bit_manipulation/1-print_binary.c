#include "main.h"

/**
 * _pow - (base ^ power)
 * @base: exponent's base
 * @power: exponent's power
 *
 * Return: (base ^ power) value
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int x;

	num = 1;
	for (x = 1; x <= power; x++)
		num *= base;
	return (num);
}

/**
 * print_binary - prints bin notation no.
 * @n: no. to print
 *
 * Return: returns void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}

