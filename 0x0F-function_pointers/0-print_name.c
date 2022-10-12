#include "function_pointers.h"

/**
 * void print_name - a function that prints a name.
 * @name: name of the person
 * @(*f)(char *): pointer to function
 *
 * Description: Funtion pointers
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
