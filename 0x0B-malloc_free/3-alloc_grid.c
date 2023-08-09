#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2d array of int
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer to grid
 */

int **alloc_grid(int width, int height)
{
	int x, y = 0;
	int **ptr;

	if (width == 0 || height == 0)
		return (NULL);
	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		ptr[x] = malloc(width * sizeof(int));

		if (ptr[x] == NULL)
		{
			for (y = 0; y < width; y++)
			{
				free(ptr[y]);
			}
			free(ptr);
			return (NULL);
		}

		for (y = 0; y < width; y++)
		{
			ptr[x][y] = 0;
		}
	}
	return (ptr);

}
