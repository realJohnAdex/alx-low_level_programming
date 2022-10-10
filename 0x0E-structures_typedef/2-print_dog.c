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
	char *name;
	float age;
	char *owner;

	if (d)
	{
		name = ((d->name == NULL) ? "nil" : d->name);
		age = d->age;
		owner = ((d->owner == NULL) ? "nil" : d->owner);
		printf("Name: %s\nAge: %f\nOwner: %s\n", name, age, owner);
	}
}
