#include "main.h"

/**
* _isalpha - checks for alphabetic character
* @c: The letter to be checked
*
* Return: 1 if it's a letter, otherwise 0
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);

	return (0);
}

/**
* _strpbrk - searches a string for any of a set of bytes.
* @s: string
* @accept: string to be located
*
* Return: char pointer
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
		if (*(s + i) == *(accept + j))
			return (s + i);
		}
	}

	return ('\0');
}

/**
* _strstr - locates a substring.
* @haystack: string
* @needle: string to be located
*
* Return: char pointer if located, otherwise NULL.
*/
char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}

		if (!*pneedle)
			return (bhaystack);

		haystack = bhaystack + 1;
	}

	return (0);
}

/**
* _abs - computes the absolute value of an integer
* @n: number to be computed
*
* Return: absolute value of @n
*/
int _abs(int n)
{
	if (n < 0)
		return (-1 * n);

	return (n);
}

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
