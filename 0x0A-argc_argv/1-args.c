#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	while (argv)
	{
		printf("%d\n", (argc - 1));
		break;
	}
	return (0);
}
