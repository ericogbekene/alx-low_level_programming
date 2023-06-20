#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - creates a new dog struct
 * @name: char data type
 * @age: float data type
 * @owner: char data type
 * Return: new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		printf("Error: \n");
		return (NULL);
	}

	new_dog->name = malloc(strlen(name) + 1);

	if (new_dog->name == NULL)
	{
		printf("Error: Failed to allocate memory\n");
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->name, name);

	new_dog->age = age;

	new_dog->owner = malloc(strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		printf("Error,Not enough memory allocated\n");
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	strcpy(new_dog->owner, owner);
	return (new_dog);
}
