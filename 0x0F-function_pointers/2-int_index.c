#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index : checks for an int
 * @array: the array
 * @size: size of the array
 * @cmp: pointer to compare
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;
	int count;

	for (i = 0; i <= size; i++)
	{
		cmp(array[i]);
		if (array[i])
		{
			count+= 1;
		}
	}
}
