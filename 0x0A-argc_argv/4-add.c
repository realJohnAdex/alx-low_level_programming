#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int sum, i, falsesum;

	sum = 0;
	falsesum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				falsesum++;
			} else if (atoi(argv[i]) > 0)
			{
				sum += atoi(argv[i]);
			}
			if (sum && falsesum)
			{
				printf("Error\n");
				return (1);
			}
		}
		if (falsesum == (argc - 1))
		{
			printf("0\n");
		} else
			printf("%d\n", sum);
	} else
		printf("0\n");
	return (0);
}
