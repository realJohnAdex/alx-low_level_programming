#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int lenght;
	unsigned long int mask, temp;

	lenght = 0;
	mask = 1;
	temp = n;
	while (temp > 0)
	{
		lenght++;
		temp >>= 1;
	}
	lenght--;
	if (lenght > 0)
	{
		mask <<= lenght;
	}
	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
	}
}

