#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - performs a function on elements of an array
 * @size: of array
 * @array: the array being worked on
 * @action: function operation
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL)
	{
		return;
	}
	for (array[i] = 0; i < size; i++)
	{
		action(array[i]);
	}
}
