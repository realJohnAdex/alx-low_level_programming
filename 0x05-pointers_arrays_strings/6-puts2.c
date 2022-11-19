#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - prints evry other char of a str, starting with the first char
 * @str: string variable
 *
 * Return: void.
 */
void puts2(char *str)
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
