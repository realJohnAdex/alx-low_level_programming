#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: pointer to unsigned long int
 * @index: unsigned int
 *
 * Return: integer 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int ret_val;
	unsigned int lenght;
	unsigned long int mask, temp;

	lenght = 0;
	mask = 1;
	ret_val = -1;
	temp = *n;
	if (!n)
	{
		return (-1);
	}
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
		return (-1);
	}
	if (mask >>= (lenght - index))
	{
		*n |= 1 << index;
		ret_val = 1;
	} else
	{
		ret_val = -1;
	}
	return (ret_val);
}

