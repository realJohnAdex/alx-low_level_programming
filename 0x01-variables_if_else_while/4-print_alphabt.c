#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: display lowercase of alphabet except q and e
 *
 * Return: Always 0 (successful)
 */

int main(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
		if (x != 'q' && x != 'e')
		{
			putchar(x);
		}
		x++;
	}
	putchar('\n');

	return (0);
}
