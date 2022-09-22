#include <stdio.h>

/**
 * main - You cannot modify a
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[5];
	int b;
	int c[5];

	a = 0; /* nop */
	a = &b; /* nop */
	a = c; /* nop */
	return (0);
}
