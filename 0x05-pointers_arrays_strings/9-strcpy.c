#include "main.h"

/**
 * _strcpy - copies str pointed to by src, to buffer pointed to by dest
 * @dest: buffer to copy into
 * @src: string to copy
 *
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	size_t i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	i++;
	dest[i] = '\0';

	return (dest);
}
