#include <unistd.h>
#include "main.h"

/**
 * print_rev - reverse prints a string, followed by a new line, to stdout
 * @s: string variable
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	for (--index; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
