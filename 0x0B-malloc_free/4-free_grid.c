#include <stdlib.h>

/**
 * free_grid - deallocate 2d array
 * @grid: pointer to 2d array
 * @height: number of rows
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
