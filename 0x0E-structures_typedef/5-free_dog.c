#include "dog.h"

/**
 * free_dog - frees a dog struct
 * @d: dog to free
 *
 */

void free_dog(dog_t *d)
{
	free(d);
}
