#include <unistd.h>
#include "main.h"

/**
 * _strlen - using strlen to det len of string
 * @s: character variable
 *
 * Return: integer lenght of s.
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		count++;

	return (count);
}
