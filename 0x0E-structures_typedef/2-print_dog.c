#include "dog.h"

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		d->name = "(nil)";
	/*
	if (!d->age)
		d->age = "(nil)";
	*/
	if (d->owner == NULL)
		d->owner = "(nil)";

	if (d == NULL)
	return;

	printf("Name: %s\n Age: %f\n Owner: %s\n", d->name, d->age, d->owner);

}
