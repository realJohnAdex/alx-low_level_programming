#include "main.h"

/**
 * puts_half - prints evry other char of a str, starting with the first char
 * @str: string variable
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int i, len;

	len = strlen(str);
	if (len % 2 != 0)
		i = (len - 1) / 1;
	else
		i = len / 2;
	for (; str[i] != '\0'; ++i)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
