#include "main.h"
#include <stdlib.h>

/**
 * *create_array - prints an array of chars, initialized with specific char
 * @size: size of array
 * @c : character to initialize with
 *
 * Return: Always (0) Success
 */

char *create_array(unsigned int size, char c)
{
	char *myArray;
	unsigned int i = 0;
	/* to create the array of size char */
	myArray = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		if (size == 0)
			return (NULL);
		else if (myArray == NULL)
			return (NULL);
	}
	myArray[i] = c;
	return (myArray);
}
