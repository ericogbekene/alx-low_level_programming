#include "main.h"

/**
 * create_array - creates an array and initializes it with a specific char
 * @size: size of the array
 * @c: Character to initialize with
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *myArray;
	unsigned int i;

	if (size == 0)
		return (NULL);

	myArray = malloc(sizeof(char) * size);
	if (myArray == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		myArray[i] = c;
	}
	return (myArray);
}
