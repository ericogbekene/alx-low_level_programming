#include "main.h"

/**
 * free_grid - frees the elements of a 2d array
 * @grid: @d array to be freed
 * @height: of array
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
