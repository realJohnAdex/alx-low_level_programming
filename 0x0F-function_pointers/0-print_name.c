#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: name of the person
 * @f: pointer to function
 *
 * Return: Always 0 (success)
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		(*f)(name);
}
