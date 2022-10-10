#include <stdio.h>
#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: structure of dog from dog.h
 * @name: name var
 * @age: age var
 * @owner: owner var
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
