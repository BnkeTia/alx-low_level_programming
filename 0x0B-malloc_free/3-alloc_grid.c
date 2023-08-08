#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a 2D array of integers.
 * @width: width of grid.
 * @height: height of grid
 * Return: pointer to a 2D array of integers
 */

int **alloc_grid(int width, int height)
{
	int **grid, x = 0, y = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		grid[x] = (int *)malloc(width * sizeof(int));
		if (grid[x] == NULL)

		{

			for (y = 0; y < x; y++)
				free(grid[y]);
			free(grid);

			return (NULL);
		}

		for (y = 0; y < width; y++)
			grid[x][y] = 0;
	}
	return (grid);
}

