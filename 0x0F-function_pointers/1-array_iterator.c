#include "function_pointers.h"

/**
 * array_iterator - performs a function on each element of an array
 * @array: being operated on
 * @size: of the array
 * @action: to be performed
 *
 * Return:void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
