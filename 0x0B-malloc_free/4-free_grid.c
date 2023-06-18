#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * free_grid - frees memory of an allocated grid
 * @grid: array size
 * @height: rows of array
 *
 * Return: Always (0) Success
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
	return (0);
}
