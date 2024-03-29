#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: the array being operated on
 * @size: of the array
 * @cmp: function pointer
 *
 * Return: index of first non integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		/*cmp(array[i]);*/

		if (cmp(array[i]) != 0)
			return (i);


	}
	return (-1);
}
