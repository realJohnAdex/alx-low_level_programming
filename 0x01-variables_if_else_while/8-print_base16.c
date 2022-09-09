#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: display hex
 *
 * Return: Always 0 (successful)
 */

int main(void)
{
	int n;
	char x;

	n = 0;
	x = 'a';
	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	while (x <= 'f')
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
