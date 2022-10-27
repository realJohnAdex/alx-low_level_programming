#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: b is pointing to a string
 *
 * Return: the converted number, or 0
 * if there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint, position, index, b_len, base2;
	int num;

	if (b == NULL)
		return (0);
	b_len = strlen(b);
	index = b_len;
	position = 0;
	base2 = 1;
	uint = 0;
	while (index > 0)
	{
		index--;
		num = b[index] - 48;
		if (num == 0 || num == 1)
		{
			uint += (num) * base2;
			base2 *= 2;
			position++;
		} else
		{
			return (0);
		}
	}
	return (uint);
}

