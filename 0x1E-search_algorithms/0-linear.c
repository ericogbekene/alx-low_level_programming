#include "search_algos.h"

/**
 * linear_search - performs a linear shearch on an array
 * @array: to perform search on
 * @size: of the array
 * @value: to search for
 *
 * Return: index of value || -1
 */

int linear_search(int *array, size_t size, int value)
{
	int found = 0;

	size_t i = 0;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			/*return (i);*/
			/*printf("Found %d at index: %d", array[i], i);*/
			found = 1;
			break;
		}
	}
	if (found == 0)
	{
		/* value not found */
		return (-1);
	}
	return (i);

}
