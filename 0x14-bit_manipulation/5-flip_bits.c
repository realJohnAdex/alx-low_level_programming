#include "main.h"

/**
 * flip_bits - number of bits to flip to get from one number to another
 * @n: unsigned long int
 * @m: unsigned long int
 *
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned long int xor;

	count = 0;
	xor = n ^ m;
	while (xor > 0)
	{
		xor &= (xor - 1);
		count++;
	}
	return (count);
}

