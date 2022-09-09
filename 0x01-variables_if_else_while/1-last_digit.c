#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: check if random number is pos, neg or zero
 *
 * Return: Always 0 (successful)
 */

int main(void)
{
	int n;
	int n_mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n_mod = n % 10;
	if (n_mod > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n_mod);
	} else if (n_mod == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n_mod);
	} else if (n_mod < 6 && n_mod != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n_mod);
	}

	return (0);
}
