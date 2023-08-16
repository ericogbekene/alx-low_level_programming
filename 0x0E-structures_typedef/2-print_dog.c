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
		free(d);
		return;
	}

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age == 0.00)
		printf("Age: 0.000000");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s\n", d->owner);

}
