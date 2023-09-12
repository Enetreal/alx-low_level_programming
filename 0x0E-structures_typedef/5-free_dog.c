#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free struct pointer
 *
 * @d: pointer to free
 *
 * Return: Always 0.
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
