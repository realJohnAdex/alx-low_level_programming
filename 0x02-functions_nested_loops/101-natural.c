#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * print_natural_sum- Entry point
 *
 * Description: Print the sum of all natural numbers
 * within range 0 - 1024 that are multiples of 3 or 5
 *
 * Return: void
 */
void print_natural_sum(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
}
