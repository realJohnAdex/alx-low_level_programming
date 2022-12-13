/**
* _memcpy - copies memory area
* @dest: destination memory
* @src: source memory
* @n: size of memory
*
*Return: char pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}

/**
 * _strncat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: number of character to concatenate
 *
 * Return: char pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
	{
		; /* Do Nothing */
	}

	for (c = 0; src[c] != '\0' && n > 0; c++, n--, i++)
	{
		dest[i] = src[c];
	}
	return (dest);
}

/**
 * _atoi - converts a string to integer
 * @s: string s
 * Return: returns parsed integer
 */
int _atoi(char *s)
{
	unsigned int num = 0, sign = 1, started = 0;

	while (*s)
	{
		/*if a number is already counted and a non number is found break*/
		if (started && !_isdigit(*s))
			break;
		if (*s == '-')
			sign *= -1;
		if (_isdigit(*s))
		{
			started = 1;
			num = num * 10 + *s;
		}
		s++;
	}
	return (sign * num);
}


/**
* _strchr - locates a character in a string
* @s: string
* @c: character to be searched
*
* Return: char pointer
*/
char *_strchr(char *s, char c)
{
	while (*(++s) != '\0')
	{
		if (*s == c)
			return (s);
	}

	return (NULL);
}

/**
* _strlen - returns the length of a string
* @s: string
*
* Return: length of @s
*/
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
