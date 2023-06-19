#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialisez a struct datatype
 *
 * @name: name
 * @d: struct
 * @age: age
 * @owner: owner
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
