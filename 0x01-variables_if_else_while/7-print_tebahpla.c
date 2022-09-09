#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: display lowercase of alphabet in reverse
 *
 * Return: Always 0 (successful)
 */

int main(void)
{
	char x;

	x = 'z';
	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');

	return (0);
}
