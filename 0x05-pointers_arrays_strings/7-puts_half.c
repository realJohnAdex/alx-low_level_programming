#include "main.h"

/**
 * puts_half - prints evry other char of a str, starting with the first char
 * @str: string variable
 *
 * Return: void.
 */
void puts_half(char *str)
{
	char *buf;

	buf = str;
	while (*buf != '\0')
	{
		printf("%c", (*buf + 0));
		buf += 2;
	}
	printf("\n");
}
