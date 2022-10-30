#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string, followed by a new line
 * @s: string variable
 *
 * Return: void.
 */
void rev_string(char *s)
{
	char *rev, buf;

	rev = s;
	while (*(rev + 1) != '\0')
	{
		rev++;
	}
	while (rev > s)
	{
		buf = *rev;
		*rev-- = *s;
		*s++ = buf;
	}
}
