#include <stdio.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog new_dog = {name, age, owner};
	name = new_dog.name;
	owner = new_dog.owner;

}
