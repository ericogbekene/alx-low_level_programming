#include "dog.h"

/**
 * init_dog - a function to initialize a variable of type struct dog
 * @d: pointer to struct
 * @name: name element
 * @age: age element
 * @owner: owner element
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->age = age;
	d->owner = owner;
}
