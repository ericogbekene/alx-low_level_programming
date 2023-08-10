#include "main.h"

int *array_range(int min, int max)
{
	int i, range = 0;

	int *array;

	range = max - min;

	if (min > max)
		return (NULL);

	array = (int*) malloc(sizeof(int) * range);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < max ; i++)
	{
		array[i] = min;

	}

	return (array);
}
