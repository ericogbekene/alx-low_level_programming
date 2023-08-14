#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - defines a struct data type for a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: of the dog
 *
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
