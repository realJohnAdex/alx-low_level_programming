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
	while (*str != '\0')
	{
		printf("%c", (*str + 0));
		str += 2;
	}
	printf("\n");
}
