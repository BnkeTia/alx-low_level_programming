#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A pointer that frees my prev 2D grid
 * @grid: pointer to the 2D array.
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL)
		return;

	for (x = 0; x < height; x++)
	{
		if (grid[x] != NULL)

			free(grid[x]);
	}

	free(grid);

}
