#include "main.h"

/**
 * _puts - print a string
 *
 * @str: string pointer
 *
 * Return: nothing
*/

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
