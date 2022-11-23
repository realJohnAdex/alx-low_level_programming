#include "main.h"

/**
 * print_array - prints n elements of an array of int, followed by a new line
 * @a: array of integer
 * @n: number of elements to be printed
 *
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d", a[i]);
	printf("\n");
}
