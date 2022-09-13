#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - print all lowercase character 10times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i;

	i = 0;
	while (i <= 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		i++;
	}
}
