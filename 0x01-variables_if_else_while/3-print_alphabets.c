#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: display uppercase and lowercase of alphabet
 *
 * Return: Always 0 (successful)
 */

int main(void)
{
	char lower;
	char upper;

	lower = 'a';
	upper = 'A';
	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++
	}
	putchar('\n');

	return (0);
}
