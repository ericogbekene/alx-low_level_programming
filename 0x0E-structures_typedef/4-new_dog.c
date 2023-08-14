#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: of new dog
 * @age: of new dog
 * @owner: of new dog
 *
 * Return: new dog created
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
