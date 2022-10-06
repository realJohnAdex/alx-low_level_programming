#include <stdio.h>
#include <stdlib.h>

/**
 * makechange - entry
 * @cents: int argument
 *
 * Return: int
 */
int makechange(int cents)
{
	int coins, rem;

	coins = 0;
	rem = cents;
	while (rem > 0)
	{
		if (rem >= 25)
		{
			coins += rem / 25;
			rem = rem % 25;
		}
		if (rem >= 10)
		{
			coins += rem / 10;
			rem = rem % 10;
		}
		if (rem >= 5)
		{
			coins += rem / 5;
			rem = rem % 5;
		}
		if (rem >= 2)
		{
			coins += rem / 2;
			rem = rem % 2;
		}
		if (rem >= 1)
		{
			coins += rem / 1;
			rem =  rem % 1;
		}
	}
	return (coins);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int coins, arg;

	if (argc == 2)
	{
		arg = atoi(argv[1]);
		if (arg < 0)
		{
			printf("0\n");
		} else
		{
			coins = makechange(arg);
			printf("%d\n", coins);
		}
	} else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
