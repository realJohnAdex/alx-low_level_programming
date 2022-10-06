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
	int prod, arg1, arg2;

	if (argc > 1)
	{
		arg1 = atoi(argv[1]);
		arg2 = atoi(argv[2]);
		prod = (arg1 * arg2);
		printf("%d\n", prod);
		return (0);
	}
	printf("Error\n");
	return (1);

}
