#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers within a range
 * @min: minimum range
 * @max: maximum range
 *
 * Return: Always (0) Success
 */

int *array_range(int min, int max)
{
	int *myArray;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	myArray = (int *) malloc(size * sizeof(int));

	if (myArray == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		myArray[i] = min + i;
	}
	return (myArray);
}
