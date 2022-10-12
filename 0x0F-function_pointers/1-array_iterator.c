#include <stddef.h>
/**
 * array_iterator - a function that executes a function given as a
 * parameter on each element of an array.
 * @array: array element
 * @size: size of array
 * @action: a pointer to the function you need to use
 *
 * Return: Always 0 (success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
