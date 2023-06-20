#ifndef DOG_H
#define DOG_H

typedef struct dog dog_name;
/**
 * struct dog - data type
 * @name: name
 * @owner: owner
 * @age: age
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
