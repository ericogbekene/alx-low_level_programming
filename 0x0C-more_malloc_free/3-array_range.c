#include "main.h"

/**
 * array_range - print an array within a range
 * @min: minimum range input
 * @max: maximum range input
 *
 * Return:an array of integers
 */

int *array_range(int min, int max)
{
	int i, range = 0;

	int *array;

	range = max - min;

	if (min > max)
		return (NULL);

	array = (int *) malloc(sizeof(int) * (range + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; i <= range ; i++)
	{
		array[i] = min + i;

	}

	return (array);
}
