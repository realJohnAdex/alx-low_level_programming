#include <stdio.h>

/**
 * premain - print this before main is executed.
 *
 * Return: Always nothing.
 */
void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
