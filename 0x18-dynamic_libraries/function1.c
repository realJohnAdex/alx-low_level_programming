/**
* _isupper - checks for uppercase character
* @c: character to be checked
*
* Return: 1 if @c is uppercase, otherwise 0
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	return (0);
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
* _memset - a function that fills memory with a constant byte
* @s: memory pointer
* @b: constant byte to fill with
* @n: size of the fill
*
* Return: char pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		*(s + i) = b;
	}

	return (s);
}

/**
* _strcat - concatenates two strings
* @dest: destination string
* @src: source string
*
* Return: char pointer
*/
char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';
	return (dest)
}

/**
* _isdigit - checks for a digit
* @c: digit to be checked
*
* Return: 1 if @c is a digit, otherwise 0
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
