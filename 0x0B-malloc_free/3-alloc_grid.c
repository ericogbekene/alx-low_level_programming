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
	int i;
	int j;
	int **array;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	array = malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
	}
	if (array[i] != NULL)
	{
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				array[i][j] = 0;
			}
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
