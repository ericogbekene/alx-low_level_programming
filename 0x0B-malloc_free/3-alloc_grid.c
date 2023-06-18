#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a 2d Array of integers
 * Main - Entry point
 * @width: size of array
 * @height: height of array
 *
 * Return: Always(0) Success
 */


int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **array;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(array[k]);
			}
			free(array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
