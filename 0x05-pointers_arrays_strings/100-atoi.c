#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: the string input
 *
 * Return: the integer converted into
 */
int _atoi(char *s)
{
	unsigned int num;
	int sign, i;

	sign = 1;
	num = 0;
	i = 0;

	do {
		i++;
		if (*s == '-' && (s[i] >= '0' && s[i] <= '9'))
			sign = -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}
