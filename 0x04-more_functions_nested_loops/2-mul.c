#include <unistd.h>
#include <stdio.h>

/**
 * mul- multiplies two integers.
 * @a: first integer input
 * @b: second integer input
 *
 * Return: product of a and b.
 */
int mul(int a, int b)
{
	int ret_val;

	ret_val = a * b;
	return (ret_val);
}
