#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: display two double digits and ,
 *
 * Return: Always 0 (successful)
 */

int main(void)
{
	int i, j;
	int a, b, c, d;

	for (i = 0; i < 100; i++)
	{
		a = i / 10; /* first num tens */
		b = i % 10; /* first num units */

		for (j = 0; j < 100; j++)
		{
			c = j / 10; /* second num tens */
			d = j % 10; /* second num units */
			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');
				if (!(a == 9 && b == 8))
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
