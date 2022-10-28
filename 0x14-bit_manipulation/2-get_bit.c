#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: unsigned int
 *
 * Return: integer 0 or 1 or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int ret_val;
	unsigned int lenght;
	unsigned long int mask, temp;

	lenght = 0;
	mask = 1;
	ret_val = -1;
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
	} else
	{
		return (-1);
	}
	if (index > lenght)
	{
		return (ret_val);
	}
	if (mask >>= (lenght - index))
	{
		if (n & mask)
			ret_val = 1;
		else
			ret_val = 0;
	} else
	{
		ret_val = -1;
	}
	return (ret_val);
}

