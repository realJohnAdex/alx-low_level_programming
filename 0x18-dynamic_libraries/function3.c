/**
* _strncpy - copies a string
* @dest: destination string.
* @src: source string
* @n: number of string
*
* Return: char pointer
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

/**
* _islower - checks for lowercase character
* @c: The letter to be checked
*
* Return: 1 if the letter is lowercase, otherwise 0
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}

/**
* _puts - prints a string followed by a newline
* @str: string
*
* Return: Always Void
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

/**
* _strcmp - compares two strings
* @s1: first string
* @s2: second string
*
* Return: 0 if @s1 and @s2 are equal, otherwise 1
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int res = 0;

	while (res == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;

		res = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (res);
}

/**
* _strspn - gets the length of a prefix substring
* @s: string
* @accept: initial length
*
* Return: size of the substring
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 1;
	int i;

	while ((*s != ' ') && (*s != '\0'))
	{
		i = 0;

		while (*(accept + i) != '\0')
		{
			if (*accept == *s)
				count++;

			i++;
		}

		s++;
	}

	return (count);
}
