#include <stdio.h>
#include "dog.h"

/**
 * print_dog - a function that initialize a variable of type struct dog
 * @d: structure of dog from dog.h
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
