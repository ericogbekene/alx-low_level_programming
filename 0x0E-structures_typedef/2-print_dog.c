#include "dog.h"

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("Struct d does not exist\n");
		return;
	}

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->age == 0.00)
		printf("(nil)");
	if (d->owner == NULL)
		d->owner = "(nil)";


	printf("Name: %s\n Age: %f\n Owner: %s\n", d->name, d->age, d->owner);

}
