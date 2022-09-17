#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * print_number- prints an integer using _putchar
 * @n: input integer
 *
 * Return: void
 */
void print_number(int n)
{
	int units, tens, hundreds, thousands;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 == 0)
	{
		_putchar(n + 48);
	}
	else if (n / 100 == 0)
	{
		tens = n / 10;
		units = n % 10;
		_putchar(tens + 48);
		_putchar(units + 48);
	}
	else if (n / 1000 == 0)
	{
		hundreds = n / 100;
		tens = (n / 10) % 10;
		units = n % 10;
		_putchar(hundreds + 48);
		_putchar(tens + 48);
		_putchar(units + 48);
	}
	else if (n / 10000 == 0)
	{
		thousands = n / 1000;
		hundreds = (n / 100) % 10;
		tens = (n / 10) % 10;
		units = n % 10;
		_putchar(thousands + 48);
		_putchar(hundreds + 48);
		_putchar(tens + 48);
		_putchar(units + 48);
	}
}
