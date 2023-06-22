#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - checks for an int in an array
 * @array: the array
 * @size: size of the array
 * @cmp: pointer to compare
 *
 * Return: first index without int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;


	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i <= size; i++)
	{
		cmp(array[i]);

		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
