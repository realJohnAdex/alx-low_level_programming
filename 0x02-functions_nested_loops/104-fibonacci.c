#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: Print the first 98 fibonacci numbers starting with 1, 2
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	unsigned long int a, b, next, last;

	a = 1;
	b = 2;
	printf("%lu, %lu, ", a, b);
	for (i = 0; i < 95; i++)
	{
		next = a + b;
		printf("%lu, ", next);
		a = b;
		b = next;
	}
	last = a + b;
	printf("%lu\n", last);
	return (0);
}
