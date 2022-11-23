#include "main.h"

/**
 * puts2 - prints evry other char of a str, starting with the first char
 * @str: string variable
 *
 * Return: void.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
