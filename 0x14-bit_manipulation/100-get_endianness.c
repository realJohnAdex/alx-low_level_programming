#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: int
 */
int get_endianness(void)
{
	int ret_val, i;
	char *c;

	i = 0;
	c = (char *)&i;
	if (*c)
		ret_val = 0;
	else
		ret_val = 1;

	return (ret_val);
}

