#include <unistd.h>
#include <ctype.h>
#include <stdio.h>

/**
 * _isupper - checks if case of character c
 * @c: character input
 *
 * Return: 1 if c is uppercase 0 otherwise
 */
int _isupper(int c)
{
	int ret_val;

	if (isupper(c))
		ret_val = 1;
	else
		ret_val = 0;
	return (ret_val);
}
