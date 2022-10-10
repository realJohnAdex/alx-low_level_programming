#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function that frees struct dog
 * @d: dog_t sturct
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
