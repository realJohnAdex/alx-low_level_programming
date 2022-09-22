#include <unistd.h>
#include "main.h"

/**
 * swap_int - dereferencing to swap two int values
 * @a: first Int variable
 * @b: second int var
 *
 * Return: Nothing.
 */

void swap_int(int *a, int *b)
{
	int buf;

	buf = *a;
	*a = *b;
	*b = buf;
}
