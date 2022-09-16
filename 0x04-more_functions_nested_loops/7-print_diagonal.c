#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * print_diagonal- draws a diagonal line on the terminal.
 * @n: integer input
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; ++i)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
