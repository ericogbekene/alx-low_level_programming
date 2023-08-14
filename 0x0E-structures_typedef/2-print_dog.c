#include "dog.h"

/**
 * print_dog - prints a dog struct data type
 * @d: dog struct to print
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("Struct d does not exist\n");
		return;
	}

	if (d->name == NULL)
		printf("(nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age == 0.00)
		printf("(nil)");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("(nil)");
	else
		printf("Owner: %s\n", d->owner);

}
