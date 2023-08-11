#include "main.h"

int *array_range(int min, int max)
{
	int i, range = 0;

	int *array;

	range = max - min;

	if (min > max)
		return (NULL);

	array = (int*) malloc((sizeof(int) * range) + 1);

	if (array == NULL)
		return (NULL);

	for (i = min; i <= range ; i++)
	{
		array[i] = min;
		min++;

	}

	return (array);
}
