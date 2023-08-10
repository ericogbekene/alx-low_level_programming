#include "main.h"

int *array_range(int min, int max)
{
	int i = 0;

	int *array;


	if (min > max)
		return (NULL);

	array = (int*) malloc((sizeof(int) * max) + 1);

	if (array == NULL)
		return (NULL);

	for (i = 0; i <= max ; i++)
	{
		array[i] = min;
		min++;

	}

	return (array);
}
