#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function to free dogs
 * @d: struct defined as a dog
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);

	free(d);
}
